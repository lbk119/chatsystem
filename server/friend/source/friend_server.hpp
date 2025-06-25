// 实现好友管理服务
#pragma once
#include <brpc/server.h>
#include <butil/logging.h>
#include <unordered_map>
#include <unordered_set>

#include "etcd.hpp" //服务注册模块封装
#include "channel.hpp"
#include "utils.hpp"
#include "logger.hpp" //日志模块封装
#include "data_es.hpp"

#include "base.pb.h"    //protobuf代码框架
#include "user.pb.h"    //protobuf代码框架
#include "message.pb.h" //protobuf代码框架
#include "friend.pb.h"  //protobuf代码框架

#include "mysql_chat_session_member.hpp"
#include "mysql_chat_session.hpp"
#include "mysql_relation.hpp"
#include "mysql_apply.hpp"
namespace lbk
{
    // 继承实现FriendService
    class FriendServiceImpl : public lbk::FriendService
    {
    public:
        FriendServiceImpl(const std::shared_ptr<odb::core::database> &db, const std::shared_ptr<elasticlient::Client> es_client,
                          const ServiceManager::ptr &mm_channels, const std::string &user_service_name, const std::string &message_service_name)
            : _mysql_chat_session_member(std::make_shared<ChatSessionMemberTable>(db)), _mysql_chat_session(std::make_shared<ChatSessionTable>(db)),
              _mysql_relation(std::make_shared<RelationTable>(db)), _mysql_apply(std::make_shared<FriendApplyTable>(db)),
              _mm_channels(mm_channels), _user_service_name(user_service_name), _message_service_name(message_service_name),
              _es_user(std::make_shared<ESUser>(es_client))
        {
        }
        virtual void GetFriendList(::google::protobuf::RpcController *controller,
                                   const ::lbk::GetFriendListReq *request,
                                   ::lbk::GetFriendListRsp *response,
                                   ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求中的关键要素：用户ID
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            // 2. 从数据库中查询获取用户的好友ID
            unordered_set<std::string> uid_list = _mysql_relation->friends(uid);
            // 3. 从用户子服务批量获取用户信息
            unordered_map<std::string, UserInfo> user_list;
            bool ret = GetUserInfo(rid, uid_list, user_list);
            if (ret == false)
            {
                LOG_ERROR("{} - 批量获取用户信息失败!", rid);
                return err_response("批量获取用户信息失败!");
            }
            // 4. 组织响应
            response->set_success(true);
            for (auto &e : user_list)
            {
                auto friend_info = response->add_friend_list();
                friend_info->CopyFrom(e.second);
            }
        }
        virtual void FriendRemove(::google::protobuf::RpcController *controller,
                                  const ::lbk::FriendRemoveReq *request,
                                  ::lbk::FriendRemoveRsp *response,
                                  ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取关键要素：当前用户ID，要删除的好友ID
            std::string uid = request->user_id();
            std::string pid = request->peer_id();
            std::string rid = request->request_id();
            // 2. 从好友关系表中删除好友关系信息
            bool ret = _mysql_relation->remove(uid, pid);
            if (!ret)
            {
                LOG_ERROR("{} - 从数据库删除好友会话信息失败！", rid);
                return err_response("从数据库删除好友会话信息失败！");
            }
            // 3. 从会话信息表中，删除对应的聊天会话
            ret = _mysql_chat_session->remove(uid, pid);
            if (!ret)
            {
                LOG_ERROR("{} - 从数据库删除好友会话信息失败！", rid);
                return err_response("从数据库删除好友会话信息失败！");
            }
            // 4. 组织响应
            response->set_success(true);
        }
        virtual void FriendAdd(::google::protobuf::RpcController *controller,
                               const ::lbk::FriendAddReq *request,
                               ::lbk::FriendAddRsp *response,
                               ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false); 
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求中的关键要素：申请人用户ID； 被申请人用户ID
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            std::string pid = request->respondent_id();
            // 2. 判断两人是否已经是好友
            bool ret = _mysql_relation->exists(uid, pid);
            if (ret)
            {
                LOG_ERROR("{} - 申请好友失败-两者{}-{}已经是好友关系", rid, uid, pid);
                return err_response("两者已经是好友关系！");
            }
            // 3. 当前是否已经申请过好友
            ret = _mysql_apply->exists(uid, pid);
            if (ret)
            {
                LOG_ERROR("{}- 申请好友失败-已经申请过对方好友！", rid);
                return err_response("已经申请过对方好友！");
            }
            // 4. 向好友申请表中，新增申请信息
            FriendApply fa(uid, pid);
            ret = _mysql_apply->insert(fa);
            if (!ret)
            {
                LOG_ERROR("{}- 新增申请失败！", rid);
                return err_response("新增申请失败！");
            }
            // 5. 组织响应
            response->set_success(true);
        }
        virtual void FriendAddProcess(::google::protobuf::RpcController *controller,
                                      const ::lbk::FriendAddProcessReq *request,
                                      ::lbk::FriendAddProcessRsp *response,
                                      ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求中的关键要素：申请人用户ID；被申请人用户ID；处理结果；
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            std::string pid = request->apply_user_id();
            bool agree = request->agree();
            // 2. 判断有没有该申请事件
            bool ret = _mysql_apply->exists(pid, uid);
            if (!ret)
            {
                LOG_ERROR("{} - 没有找到{}-{}对应的好友申请事件！", rid, pid, uid);
                return err_response("没有找到对应的好友申请事件!");
            }
            // 3. 如果有： 可以处理； --- 删除申请事件--事件已经处理完毕
            ret = _mysql_apply->remove(pid, uid);
            if (!ret)
            {
                LOG_ERROR("{} - 从数据库删除申请事件 {}-{} 失败！", rid, pid, uid);
                return err_response("从数据库删除申请事件失败!");
            }
            // 4. 如果处理结果是同意：向数据库新增好友关系信息；新增单聊会话信息及会话成员
            std::string ssid;
            if (agree)
            {
                ret = _mysql_relation->insert(uid, pid);
                if (!ret)
                {
                    LOG_ERROR("{} - 新增好友关系信息 {}-{} 失败！", rid, uid, pid);
                    return err_response("新增好友关系信息失败！");
                }
                ssid = uuid();
                ChatSession cs(ssid, "", ChatSessionType::SINGLE);
                ret = _mysql_chat_session->insert(cs);
                if (!ret)
                {
                    LOG_ERROR("{} - 新增会话信息 {} 失败！", rid, ssid);
                    return err_response("新增会话信息失败！");
                }
                ChatSessionMember csm1(ssid, uid);
                ChatSessionMember csm2(ssid, pid);
                std::vector<ChatSessionMember> csm_list({csm1, csm2});
                ret = _mysql_chat_session_member->append(csm_list);
                if (!ret)
                {
                    LOG_ERROR("{} - 新增会话成员 {} 失败！", rid, ssid);
                    return err_response("新增会话成员失败！");
                }
            }
            // 5. 组织响应
            response->set_success(true);
            response->set_new_session_id(ssid);
        }
        virtual void FriendSearch(::google::protobuf::RpcController *controller,
                                  const ::lbk::FriendSearchReq *request,
                                  ::lbk::FriendSearchRsp *response,
                                  ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求中的关键要素：搜索关键字（可能是用户ID，可能是手机号，可能是昵称的一部分）
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            std::string skey = request->search_key();
            // 2. 根据用户ID，获取用户的好友ID列表
            auto friend_list = _mysql_relation->friends(uid);
            // 把自己也过滤掉
            friend_list.insert(uid);
            std::vector<std::string> search_arg(friend_list.begin(), friend_list.end());
            // 3. 从ES搜索引擎进行用户信息搜索 --- 过滤掉当前的好友
            auto search_res = _es_user->search(skey, search_arg);
            // 4. 根据获取到的用户ID， 从用户子服务器进行批量用户信息获取
            unordered_set<std::string> uid_list;
            for(auto& user:search_res)
            {
                uid_list.insert(user.user_id());
            }
            unordered_map<std::string, UserInfo> user_info_list;
            bool ret = GetUserInfo(rid, uid_list, user_info_list);
            if (!ret)
            {
                LOG_ERROR("{} - 批量获取用户信息失败!", rid);
                return err_response("批量获取用户信息失败!");
            }
            // 5. 组织响应
            response->set_success(true);
            for (auto &e : user_info_list)
            {
                auto user_info = response->add_user_info();
                user_info->CopyFrom(e.second);
            }
        }
        virtual void GetPendingFriendEventList(::google::protobuf::RpcController *controller,
                                               const ::lbk::GetPendingFriendEventListReq *request,
                                               ::lbk::GetPendingFriendEventListRsp *response,
                                               ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取关键要素：当前用户ID
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            // 2. 从数据库获取待处理的申请事件信息 --- 申请人用户ID列表
            auto uid_list = _mysql_apply->applyUsers(uid);
            // 3. 批量获取申请人用户信息
            unordered_map<std::string, UserInfo> user_list;
            bool ret = GetUserInfo(rid, uid_list, user_list);
            if (!ret)
            {
                LOG_ERROR("{} - 批量获取用户信息失败!", rid);
                return err_response("批量获取用户信息失败!");
            }
            // 4. 组织响应
            response->set_success(true);
            for (auto &e : user_list)
            {
                auto event = response->add_event();
                event->mutable_sender()->CopyFrom(e.second);
            }
        }
        // 获取聊天会话的作用：一个用户登录成功后，能够展示自己的历史聊天信息
        virtual void GetChatSessionList(::google::protobuf::RpcController *controller,
                                        const ::lbk::GetChatSessionListReq *request,
                                        ::lbk::GetChatSessionListRsp *response,
                                        ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求中的关键要素：当前请求用户ID
            std::string rid = request->request_id();
            std::string uid = request->user_id();
            // 2. 从数据库中查询出用户的单聊会话列表
            auto scs_list = _mysql_chat_session->singleChatSession(uid);
            //  2.1 从单聊会话列表中，取出所有的好友ID，从用户子服务获取用户信息
            unordered_set<std::string> uid_list;
            for (auto &e : scs_list)
            {
                uid_list.insert(e.friend_id);
            }
            unordered_map<std::string, UserInfo> user_list;
            bool ret = GetUserInfo(rid, uid_list, user_list);
            if (!ret)
            {
                LOG_ERROR("{} - 批量获取用户信息失败!", rid);
                return err_response("批量获取用户信息失败!");
            }
            //  2.2 设置响应会话信息：会话名称就是好友名称；会话头像就是好友头像
            for (auto &e : scs_list)
            {
                auto chat_session_info = response->add_chat_session_info_list();
                chat_session_info->set_chat_session_id(e.chat_session_id);
                chat_session_info->set_single_chat_friend_id(e.friend_id);
                chat_session_info->set_chat_session_name(user_list[e.friend_id].nickname());
                chat_session_info->set_avatar(user_list[e.friend_id].avatar());
                // 2.3 根据所有的会话ID，从消息存储子服务获取会话最后一条消息
                MessageInfo msg;
                ret = GetRecentMsg(rid, e.chat_session_id, msg);
                if (!ret)
                    continue;
                chat_session_info->mutable_prev_message()->CopyFrom(msg);
            }
            // 3. 从数据库中查询出用户的群聊会话列表
            auto gcs_list = _mysql_chat_session->groupChatSession(uid);
            for (auto &e : gcs_list)
            {
                auto chat_session_info = response->add_chat_session_info_list();
                chat_session_info->set_chat_session_id(e.chat_session_id);
                chat_session_info->set_chat_session_name(e.chat_session_name);
                // 2.3 根据所有的会话ID，从消息存储子服务获取会话最后一条消息
                MessageInfo msg;
                ret = GetRecentMsg(rid, e.chat_session_id, msg);
                if (!ret)
                    continue;
                chat_session_info->mutable_prev_message()->CopyFrom(msg);
            }
            // 5. 组织响应
            response->set_success(true);
        }
        // 创建会话，其实针对的是用户要创建一个群聊会话
        virtual void ChatSessionCreate(::google::protobuf::RpcController *controller,
                                       const ::lbk::ChatSessionCreateReq *request,
                                       ::lbk::ChatSessionCreateRsp *response,
                                       ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取请求关键要素：会话名称，会话成员
            std::string rid = request->request_id();
            std::string ssname = request->chat_session_name();
            // 2. 生成会话ID，向数据库添加会话信息，添加会话成员信息
            std::string ssid = uuid();
            ChatSession cs(ssid, ssname, ChatSessionType::GROUP);
            bool ret = _mysql_chat_session->insert(cs);
            if (!ret)
            {
                LOG_ERROR("{} - 向数据库添加会话信息失败: {}", rid, ssname);
                return err_response("向数据库添加会话信息失败!");
            }
            std::vector<ChatSessionMember> csm_list;
            for (int i = 0; i < request->member_id_list_size(); i++)
            {
                ChatSessionMember csm(ssid, request->member_id_list(i));
                csm_list.push_back(csm);
            }
            ret = _mysql_chat_session_member->append(csm_list);
            if (!ret)
            {
                LOG_ERROR("{} - 向数据库添加会话成员信息失败: {}", rid, ssname);
                return err_response("向数据库添加会话成员信息失败!");
            }
            // 3. 组织响应---组织会话信息
            response->set_success(true);
            response->mutable_chat_session_info()->set_chat_session_id(ssid);
            response->mutable_chat_session_info()->set_chat_session_name(ssname);
        }
        // 用于用户查看群聊成员信息的时候：进行成员信息展示
        virtual void GetChatSessionMember(::google::protobuf::RpcController *controller,
                                          const ::lbk::GetChatSessionMemberReq *request,
                                          ::lbk::GetChatSessionMemberRsp *response,
                                          ::google::protobuf::Closure *done)
        {
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 提取关键要素：聊天会话ID
            std::string rid = request->request_id();
            std::string cssid = request->chat_session_id();
            // 2. 从数据库获取会话成员ID列表
            auto v_uid_list = _mysql_chat_session_member->members(cssid);
            unordered_set<std::string> uid_list(v_uid_list.begin(), v_uid_list.end());
            // 3. 从用户子服务批量获取用户信息
            unordered_map<std::string, UserInfo> user_list;
            bool ret = GetUserInfo(rid, uid_list, user_list);
            if (!ret)
            {
                LOG_ERROR("{} - 批量获取用户信息失败!", rid);
                return err_response("批量获取用户信息失败!");
            }
            // 4. 组织响应
            response->set_success(true);
            for (auto &e : user_list)
            {
                auto member_info = response->add_member_info_list();
                member_info->CopyFrom(e.second);
            }
        }

    private:
        bool GetRecentMsg(const std::string &rid, const std::string &cssid, MessageInfo &msg)
        {
            auto channel = _mm_channels->choose(_message_service_name);
            if (!channel)
            {
                LOG_ERROR("{} - 获取消息存储子服务信道失败！！", rid);
                return false;
            }
            MsgStorageService_Stub stub(channel.get());
            GetRecentMsgReq req;
            GetRecentMsgRsp rsp;
            req.set_request_id(rid);
            req.set_chat_session_id(cssid);
            req.set_msg_count(1);
            brpc::Controller cntl;
            stub.GetRecentMsg(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed())
            {
                LOG_ERROR("{} -消息存储子服务调用失败: {}", rid, cntl.ErrorText());
                return false;
            }
            if (rsp.success() == false)
            {
                LOG_ERROR("{} - 获取会话 {} 最近信息失败: {}", rid, cssid, rsp.errmsg());
                return false;
            }
            if (rsp.msg_list_size() > 0)
            {
                msg.CopyFrom(rsp.msg_list(0));
                return true;
            }
            return false;
        }
        bool GetUserInfo(const std::string &rid, const unordered_set<std::string> &uid_list,
                         unordered_map<std::string, UserInfo> &user_list)
        {
            auto channel = _mm_channels->choose(_user_service_name);
            if (!channel)
            {
                LOG_ERROR("{} - 获取用户子服务信道失败！！", rid);
                return false;
            }
            UserService_Stub stub(channel.get());
            GetMultiUserInfoReq req;
            GetMultiUserInfoRsp rsp;
            req.set_request_id(rid);
            for (auto &e : uid_list)
            {
                req.add_users_id(e);
            }
            brpc::Controller cntl;
            stub.GetMultiUserInfo(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed())
            {
                LOG_ERROR("{} - 用户子服务调用失败: {}", rid, cntl.ErrorText());
                return false;
            }
            if (rsp.success() == false)
            {
                LOG_ERROR("{} - 批量获取用户信息失败: {}", rid, rsp.errmsg());
                return false;
            }
            for (auto &e : rsp.users_info())
            {
                user_list[e.first] = e.second;
            }
            return true;
        }

    private:
        // 用户子服务调用相关信息
        std::string _user_service_name;
        std::string _message_service_name;
        ServiceManager::ptr _mm_channels;

        // mysql的操作句柄
        ChatSessionMemberTable::ptr _mysql_chat_session_member;
        ChatSessionTable::ptr _mysql_chat_session;
        RelationTable::ptr _mysql_relation;
        FriendApplyTable::ptr _mysql_apply;

        ESUser::ptr _es_user;
    };

    // 使用建造者模式实现FriendServer
    class FriendServer
    {
    public:
        using ptr = std::shared_ptr<FriendServer>;
        FriendServer(const std::shared_ptr<odb::core::database> &db,
                     const std::shared_ptr<elasticlient::Client> &es_client,
                     const Discovery::ptr &discovery_client,
                     const Registry::ptr &reg_client,
                     const std::shared_ptr<brpc::Server> &rpc_server)
            : _db(db), _es_client(es_client), _discovery_client(discovery_client), _registry_client(reg_client), _rpc_server(rpc_server)
        {
        }
        // 搭建RPC服务器，并启动服务器
        void start()
        {
            _rpc_server->RunUntilAskedToQuit();
        }

    private:
        std::shared_ptr<odb::core::database> _db;
        std::shared_ptr<elasticlient::Client> _es_client;
        Discovery::ptr _discovery_client;
        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };

    class FriendServerBuilder
    {
    public:
        // 构造es客户端对象
        void make_es_object(const std::vector<std::string> &host_list)
        {
            _es_client = ESClientFactory::create(host_list);
        }
        // 构造mysql客户端对象
        void make_mysql_object(const std::string &user,
                               const std::string &password,
                               const std::string &host,
                               const std::string &db,
                               const std::string &cset,
                               int port,
                               int conn_pool_count)
        {
            _mysql_client = ODBFactory::create(user, password, host, db, cset, port, conn_pool_count);
        }
        // 用于构造服务发现客户端&信道管理对象
        void make_discovery_object(const std::string &reg_host, const std::string &base_service_name,
                                   const std::string &user_service_name, const std::string &message_service_name)
        {
            _user_service_name = user_service_name;
            _message_service_name = message_service_name;
            _mm_channels = std::make_shared<ServiceManager>();
            _mm_channels->declared(user_service_name);
            _mm_channels->declared(message_service_name);
            LOG_DEBUG("设置用户子服务为需添加管理的子服务：{}", user_service_name);
            LOG_DEBUG("设置消息存储子服务为需添加管理的子服务：{}", message_service_name);
            auto put_cb = std::bind(&ServiceManager::onServiceOnline, _mm_channels.get(), std::placeholders::_1, std::placeholders::_2);
            auto del_cb = std::bind(&ServiceManager::onServiceOffline, _mm_channels.get(), std::placeholders::_1, std::placeholders::_2);
            _discover_client = std::make_shared<Discovery>(reg_host, base_service_name, put_cb, del_cb);
        }
        // 构造服务注册客户端对象
        void make_registry_object(const std::string &reg_host,
                                  const std::string &service_name,
                                  const std::string &access_host)
        {
            _registry_client = std::make_shared<Registry>(reg_host);
            _registry_client->registry(service_name, access_host);
        }

        // 构造RPC服务器对象
        void make_rpc_object(uint16_t port, int32_t timeout, uint8_t num_threads)
        {
            if (!_mm_channels)
            {
                LOG_ERROR("还未初始化信道管理模块！");
                abort();
            }
            if (!_mysql_client)
            {
                LOG_ERROR("还未初始化Mysql数据库模块！");
                abort();
            }
            if (!_es_client)
            {
                LOG_ERROR("还未初始化ES搜索引擎模块！");
                abort();
            }
            _rpc_server = std::make_shared<brpc::Server>();
            FriendServiceImpl *transmite_service = new FriendServiceImpl(
                _mysql_client, _es_client, _mm_channels, _user_service_name, _message_service_name);
            int ret = _rpc_server->AddService(transmite_service, brpc::ServiceOwnership::SERVER_OWNS_SERVICE);
            if (ret == -1)
            {
                LOG_ERROR("添加Rpc服务失败！");
                abort();
            }
            brpc::ServerOptions options;
            options.idle_timeout_sec = timeout;
            options.num_threads = num_threads;
            ret = _rpc_server->Start(port, &options);
            if (ret == -1)
            {
                LOG_ERROR("服务启动失败！");
                abort();
            }
        }
        FriendServer::ptr build()
        {
            if (!_discover_client)
            {
                LOG_ERROR("还未初始化服务发现模块！");
                abort();
            }
            if (!_registry_client)
            {
                LOG_ERROR("还未初始化服务注册模块！");
                abort();
            }
            if (!_rpc_server)
            {
                LOG_ERROR("还未初始化RPC服务器模块！");
                abort();
            }
            FriendServer::ptr server = std::make_shared<FriendServer>(
                _mysql_client, _es_client, _discover_client, _registry_client, _rpc_server);
            return server;
        }

    private:
        // 用户子服务和消息存储子服务调用相关信息
        std::string _user_service_name;
        std::string _message_service_name;
        ServiceManager::ptr _mm_channels;
        Discovery::ptr _discover_client;

        // mysql数据库客户端
        std::shared_ptr<odb::core::database> _mysql_client;
        // es搜索引擎客户端
        std::shared_ptr<elasticlient::Client> _es_client;

        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };
}
