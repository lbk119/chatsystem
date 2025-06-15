// 实现消息存储子服务
// 1. 获取历史消息：
//  a. 获取最近 N 条消息：用于登录成功后，点击对方头像打开聊天框时显示最近的消息
//  b. 获取指定时间段内的消息：用户可以进行聊天消息的按时间搜索
// 2. 消息搜索：用户可以进行聊天消息的关键字搜索
#pragma once

#include <brpc/server.h>
#include <butil/logging.h>
#include <unordered_set>
#include <unordered_map>
#include <string>

#include "data_es.hpp"       // es数据管理客户端封装
#include "mysql_message.hpp" // mysql数据管理客户端封装
#include "etcd.hpp"          // 服务注册模块封装
#include "logger.hpp"        // 日志模块封装
#include "utils.hpp"         // 基础工具接口
#include "channel.hpp"       // 信道管理模块封装
#include "rabbitmq.hpp"

#include "message.pb.h" // protobuf框架代码
#include "base.pb.h"    // protobuf框架代码
#include "file.pb.h"    // protobuf框架代码
#include "user.pb.h"    // protobuf框架代码

namespace lbk
{
    // 继承实现MsgStorageService
    class MsgStorageServiceImpl : public lbk::MsgStorageService
    {
    public:
        MsgStorageServiceImpl(const std::shared_ptr<odb::core::database> &db, const std::shared_ptr<elasticlient::Client> &es,
                              const ServiceManager::ptr &mm_channels, const std::string &user_service_name, const std::string &file_service_name)
            : _mysql_message(std::make_shared<MessageTable>(db)), _es_message(std::make_shared<ESMessage>(es)),
              _mm_channels(mm_channels), _user_service_name(user_service_name), _file_service_name(file_service_name)
        {
            _es_message->createIndex();
        }

        virtual void GetHistoryMsg(::google::protobuf::RpcController *controller,
                                   const ::lbk::GetHistoryMsgReq *request,
                                   ::lbk::GetHistoryMsgRsp *response,
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
            // 1. 提取关键要素：会话ID，起始时间，结束时间
            std::string rid = request->request_id();
            std::string ssid = request->chat_session_id();
            boost::posix_time::ptime stime = boost::posix_time::from_time_t(request->start_time());
            boost::posix_time::ptime etime = boost::posix_time::from_time_t(request->over_time());
            // 2. 从数据库中进行消息查询
            auto msg_lists = _mysql_message->range(ssid, stime, etime);
            if (msg_lists.empty())
            {
                response->set_success(true);
                return;
            }
            // 3. 统计所有文件类型消息的文件ID，并从文件子服务进行批量文件下载
            unordered_set<std::string> file_id_lists;
            for (auto &msg : msg_lists)
            {
                // 跳过文本消息
                if (msg.file_id().empty())
                    continue;
                file_id_lists.insert(msg.file_id());
            }
            unordered_map<std::string, std::string> file_data_lists;
            bool ret = _GetFile(rid, file_id_lists, file_data_lists);
            if (ret == false)
            {
                LOG_ERROR("{} 批量文件数据下载失败！", rid);
                return err_response("批量文件数据下载失败!");
            }
            // 4. 统计所有消息的发送者用户ID，从用户子服务进行批量用户信息获取
            unordered_set<std::string> user_id_lists;
            for (auto &msg : msg_lists)
            {
                user_id_lists.insert(msg.user_id());
            }
            unordered_map<std::string, UserInfo> user_lists;
            ret = _GetUser(rid, user_id_lists, user_lists);
            if (ret == false)
            {
                LOG_ERROR("{} 批量用户数据获取失败！", rid);
                return err_response("批量用户数据获取失败!");
            }
            // 5. 组织响应
            response->set_success(true);
            for (auto &msg : msg_lists)
            {
                auto message_info = response->add_msg_list();
                message_info->set_message_id(msg.message_id());
                message_info->set_chat_session_id(msg.session_id());
                message_info->set_timestamp(boost::posix_time::to_time_t(msg.create_time()));
                message_info->mutable_sender()->CopyFrom(user_lists[msg.user_id()]);
                switch (msg.message_type())
                {
                case MessageType::STRING:
                    message_info->mutable_message()->set_message_type(MessageType::STRING);
                    message_info->mutable_message()->mutable_string_message()->set_content(msg.content());
                    break;
                case MessageType::IMAGE:
                    message_info->mutable_message()->set_message_type(MessageType::IMAGE);
                    message_info->mutable_message()->mutable_image_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_image_message()->set_image_content(file_data_lists[msg.file_id()]);
                    break;
                case MessageType::FILE:
                    message_info->mutable_message()->set_message_type(MessageType::FILE);
                    message_info->mutable_message()->mutable_file_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_file_message()->set_file_size(msg.file_size());
                    message_info->mutable_message()->mutable_file_message()->set_file_name(msg.file_name());
                    message_info->mutable_message()->mutable_file_message()->set_file_contents(file_data_lists[msg.file_id()]);
                    break;
                case MessageType::SPEECH:
                    message_info->mutable_message()->set_message_type(MessageType::SPEECH);
                    message_info->mutable_message()->mutable_speech_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_speech_message()->set_file_contents(file_data_lists[msg.file_id()]);
                    break;
                default:
                    LOG_ERROR("消息类型错误！！");
                    break;
                }
            }
        }
        virtual void GetRecentMsg(::google::protobuf::RpcController *controller,
                                  const ::lbk::GetRecentMsgReq *request,
                                  ::lbk::GetRecentMsgRsp *response,
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

            // 1. 提取关键要素：会话ID，消息条数
            std::string rid = request->request_id();
            std::string ssid = request->chat_session_id();
            int msg_count = request->msg_count();
            // 2. 从数据库中进行消息查询
            auto msg_lists = _mysql_message->recent(ssid, msg_count);
            if (msg_lists.empty())
            {
                response->set_success(true);
                return;
            }
            // 3. 统计所有文件类型消息的文件ID，并从文件子服务进行批量文件下载
            unordered_set<std::string> file_id_lists;
            for (auto &msg : msg_lists)
            {
                // 跳过文本消息
                if (msg.file_id().empty())
                    continue;
                file_id_lists.insert(msg.file_id());
            }
            unordered_map<std::string, std::string> file_data_lists;
            bool ret = _GetFile(rid, file_id_lists, file_data_lists);
            if (ret == false)
            {
                LOG_ERROR("{} 批量文件数据下载失败！", rid);
                return err_response("批量文件数据下载失败!");
            }
            // 4. 统计所有消息的发送者用户ID，从用户子服务进行批量用户信息获取
            unordered_set<std::string> user_id_lists;
            for (auto &msg : msg_lists)
            {
                user_id_lists.insert(msg.user_id());
            }
            unordered_map<std::string, UserInfo> user_lists;
            ret = _GetUser(rid, user_id_lists, user_lists);
            if (ret == false)
            {
                LOG_ERROR("{} 批量用户数据获取失败！", rid);
                return err_response("批量用户数据获取失败!");
            }
            // 5. 组织响应
            response->set_success(true);
            for (auto &msg : msg_lists)
            {
                auto message_info = response->add_msg_list();
                message_info->set_message_id(msg.message_id());
                message_info->set_chat_session_id(msg.session_id());
                message_info->set_timestamp(boost::posix_time::to_time_t(msg.create_time()));
                message_info->mutable_sender()->CopyFrom(user_lists[msg.user_id()]);
                switch (msg.message_type())
                {
                case MessageType::STRING:
                    message_info->mutable_message()->set_message_type(MessageType::STRING);
                    message_info->mutable_message()->mutable_string_message()->set_content(msg.content());
                    break;
                case MessageType::IMAGE:
                    message_info->mutable_message()->set_message_type(MessageType::IMAGE);
                    message_info->mutable_message()->mutable_image_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_image_message()->set_image_content(file_data_lists[msg.file_id()]);
                    break;
                case MessageType::FILE:
                    message_info->mutable_message()->set_message_type(MessageType::FILE);
                    message_info->mutable_message()->mutable_file_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_file_message()->set_file_size(msg.file_size());
                    message_info->mutable_message()->mutable_file_message()->set_file_name(msg.file_name());
                    message_info->mutable_message()->mutable_file_message()->set_file_contents(file_data_lists[msg.file_id()]);
                    break;
                case MessageType::SPEECH:
                    message_info->mutable_message()->set_message_type(MessageType::SPEECH);
                    message_info->mutable_message()->mutable_speech_message()->set_file_id(msg.file_id());
                    message_info->mutable_message()->mutable_speech_message()->set_file_contents(file_data_lists[msg.file_id()]);
                    break;
                default:
                    LOG_ERROR("消息类型错误！！");
                    break;
                }
            }
        }
        virtual void MsgSearch(::google::protobuf::RpcController *controller,
                               const ::lbk::MsgSearchReq *request,
                               ::lbk::MsgSearchRsp *response,
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

            // 关键字的消息搜索--只针对文本消息
            // 1. 从请求中提取关键要素：请求ID，会话ID, 关键字
            std::string rid = request->request_id();
            std::string ssid = request->chat_session_id();
            std::string search_key = request->search_key();
            // 2. 从ES搜索引擎中进行关键字消息搜索，得到消息列表
            auto msg_lists = _es_message->search(search_key, ssid);
            if (msg_lists.empty())
            {
                response->set_success(true);
                return;
            }
            // 3. 组织所有消息的用户ID，从用户子服务获取用户信息
            unordered_set<std::string> user_id_lists;
            for (auto &msg : msg_lists)
            {
                user_id_lists.insert(msg.user_id());
            }
            unordered_map<std::string, UserInfo> user_lists;
            bool ret = _GetUser(rid, user_id_lists, user_lists);
            if (ret == false)
            {
                LOG_ERROR("{} 批量用户数据获取失败！", rid);
                return err_response("批量用户数据获取失败!");
            }
            // 4. 组织响应
            response->set_success(true);
            for (auto &msg : msg_lists)
            {
                auto message_info = response->add_msg_list();
                message_info->set_message_id(msg.message_id());
                message_info->set_chat_session_id(msg.session_id());
                message_info->set_timestamp(boost::posix_time::to_time_t(msg.create_time()));
                message_info->mutable_sender()->CopyFrom(user_lists[msg.user_id()]);
                message_info->mutable_message()->set_message_type(MessageType::STRING);
                message_info->mutable_message()->mutable_string_message()->set_content(msg.content());
            }
        }

        void onMessage(const char *body, size_t sz)
        {
            LOG_DEBUG("收到新消息，进行存储处理！");
            // 1. 取出序列化的消息内容，进行反序列化
            lbk::MessageInfo message;
            bool ret = message.ParseFromArray(body, sz);
            if (ret == false)
            {
                LOG_ERROR("对消费到的消息进行反序列化失败！");
                return;
            }
            // 2. 根据不同的消息类型进行不同的处理
            std::string file_id, file_name, content;
            int64_t file_size;
            switch (message.message().message_type())
            {
            //   2.1 如果是一个文本类型消息，取元信息存储到ES中
            case MessageType::STRING:
                content = message.message().string_message().content();
                ret = _es_message->appendData(message.sender().user_id(), message.message_id(),
                                              message.chat_session_id(), message.timestamp(), content);
                if (ret == false)
                {
                    LOG_ERROR("文本消息向存储引擎进行存储失败！");
                    return;
                }
                break;
                //   2.2 如果是一个图片/语音/文件消息，则取出数据存储到文件子服务中，并获取文件ID
            case MessageType::IMAGE:
            {

                const auto &msg = message.message().image_message();
                ret = _PutFile("", msg.image_content(), msg.image_content().size(), file_id);
                if (ret == false)
                {
                    LOG_ERROR("上传图片到文件子服务失败！");
                    return;
                }
            }
            break;
            case MessageType::FILE:
            {
                const auto &msg = message.message().file_message();
                file_name = msg.file_name();
                file_size = msg.file_size();
                ret = _PutFile(file_name, msg.file_contents(), file_size, file_id);
                if (ret == false)
                {
                    LOG_ERROR("上传文件到文件子服务失败！");
                    return;
                }
            }
            break;
            case MessageType::SPEECH:
            {
                const auto &msg = message.message().speech_message();
                ret = _PutFile("", msg.file_contents(), msg.file_contents().size(), file_id);
                if (ret == false)
                {
                    LOG_ERROR("上传语音到文件子服务失败！");
                    return;
                }
            }
            break;
            default:
                LOG_ERROR("消息类型错误！");
                return;
            }
            // 3. 提取消息的元信息，存储到mysql数据库中
            Message msg_table(message.message_id(), message.chat_session_id(), message.sender().user_id(),
                              message.message().message_type(), boost::posix_time::from_time_t(message.timestamp()));
            msg_table.file_id(file_id);
            msg_table.file_name(file_name);
            msg_table.file_size(file_size);
            msg_table.content(content);
            ret = _mysql_message->insert(msg_table);
            if (ret == false)
            {
                LOG_ERROR("向数据库插入新消息失败！");
                return;
            }
        }

    private:
        bool _PutFile(const std::string &name, const std::string &body, int64_t sz, std::string &fid)
        {
            auto channel = _mm_channels->choose(_file_service_name);
            if (!channel)
            {
                LOG_ERROR("{} 没有可供访问的文件子服务节点！", _file_service_name);
                return false;
            }
            PutSingleFileReq req;
            PutSingleFileRsp rsp;
            FileService_Stub stub(channel.get());
            req.mutable_file_data()->set_file_name(name);
            req.mutable_file_data()->set_file_content(body);
            req.mutable_file_data()->set_file_size(sz);
            brpc::Controller cntl;
            stub.PutSingleFile(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() == true || rsp.success() == false)
            {
                LOG_ERROR("文件子服务调用失败：{}！", cntl.ErrorText());
                return false;
            }
            fid = rsp.file_info().file_id();
            return true;
        }

        bool _GetFile(const std::string &rid, const unordered_set<std::string> &file_id_lists,
                      unordered_map<std::string, std::string> &file_data_lists)
        {
            auto channel = _mm_channels->choose(_file_service_name);
            if (!channel)
            {
                LOG_ERROR("{} 没有可供访问的文件子服务节点！", _file_service_name);
                return false;
            }
            GetMultiFileReq req;
            GetMultiFileRsp rsp;
            FileService_Stub stub(channel.get());
            req.set_request_id(rid);
            for (auto &id : file_id_lists)
            {
                req.add_file_id_list(id);
            }
            brpc::Controller cntl;
            stub.GetMultiFile(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() == true || rsp.success() == false)
            {
                LOG_ERROR("文件子服务调用失败：{}！", cntl.ErrorText());
                return false;
            }
            const auto &fmap = rsp.file_data();
            for (auto it = fmap.begin(); it != fmap.end(); it++)
            {
                file_data_lists[it->first] = it->second.file_content();
            }
            return true;
        }
        bool _GetUser(const std::string &rid, const unordered_set<std::string> &user_id_lists,
                      unordered_map<std::string, UserInfo> &file_data_lists)
        {
            auto channel = _mm_channels->choose(_user_service_name);
            if (!channel)
            {
                LOG_ERROR("{} 没有可供访问的用户子服务节点！", _user_service_name);
                return false;
            }
            GetMultiUserInfoReq req;
            GetMultiUserInfoRsp rsp;
            UserService_Stub stub(channel.get());
            req.set_request_id(rid);
            for (auto &id : user_id_lists)
            {
                req.add_users_id(id);
            }
            brpc::Controller cntl;
            stub.GetMultiUserInfo(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() == true || rsp.success() == false)
            {
                LOG_ERROR("用户子服务调用失败：{}！", cntl.ErrorText());
                return false;
            }
            const auto &umap = rsp.users_info();
            for (auto it = umap.begin(); it != umap.end(); it++)
            {
                file_data_lists[it->first] = it->second;
            }
            return true;
        }

    private:
        // 用户子服务和文件子服务调用相关信息
        std::string _user_service_name;
        std::string _file_service_name;
        ServiceManager::ptr _mm_channels;

        // 消息成员表的操作句柄
        ESMessage::ptr _es_message;
        MessageTable::ptr _mysql_message;
    };

    // 使用建造者模式实现MsgStorageServer
    class MsgStorageServer
    {
    public:
        using ptr = std::shared_ptr<MsgStorageServer>;
        MsgStorageServer(const std::shared_ptr<odb::core::database> &db, const std::shared_ptr<elasticlient::Client> &es,
                         const MQClient::ptr &mq_client, const Discovery::ptr &discovery_client,
                         const Registry::ptr &reg_client, const std::shared_ptr<brpc::Server> &rpc_server)
            : _db_client(db), _es_client(es), _mq_client(mq_client),
              _discovery_client(discovery_client), _registry_client(reg_client), _rpc_server(rpc_server)
        {
        }
        // 搭建RPC服务器，并启动服务器
        void start()
        {
            _rpc_server->RunUntilAskedToQuit();
        }

    private:
        std::shared_ptr<odb::core::database> _db_client;
        std::shared_ptr<elasticlient::Client> _es_client;
        MQClient::ptr _mq_client;

        Discovery::ptr _discovery_client;
        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };

    class MsgStorageServerBuilder
    {
    public:
        // 用于构造rabbitmq客户端对象
        void make_mq_object(const std::string &user, const std::string &password, const std::string &host,
                            const std::string &exchange, const std::string &queue, const std::string &routing_key)
        {
            _exchange_name = exchange;
            _routing_key = routing_key;
            _queue_name = queue;
            _mq_client = std::make_shared<MQClient>(user, password, host);
            // 创建并绑定交换机和队列
            _mq_client->declareComponents(exchange, queue, routing_key);
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
        // 构造es客户端对象
        void make_es_object(const std::vector<std::string> &host_list)
        {
            _es_client = ESClientFactory::create(host_list);
        }
        // 用于构造服务发现客户端&信道管理对象
        void make_discovery_object(const std::string &reg_host, const std::string &base_service_name,
                                   const std::string &user_service_name, const std::string &file_service_name)
        {
            _user_service_name = user_service_name;
            _file_service_name = file_service_name;
            _mm_channels = std::make_shared<ServiceManager>();
            _mm_channels->declared(user_service_name);
            _mm_channels->declared(file_service_name);
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
            if (!_es_client)
            {
                LOG_ERROR("还未初始化ES搜索引擎模块！");
                abort();
            }
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
            _rpc_server = std::make_shared<brpc::Server>();
            MsgStorageServiceImpl *msg_service = new MsgStorageServiceImpl(
                _mysql_client, _es_client, _mm_channels, _user_service_name, _file_service_name);
            int ret = _rpc_server->AddService(msg_service, brpc::ServiceOwnership::SERVER_OWNS_SERVICE);
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

            auto cb = std::bind(&MsgStorageServiceImpl::onMessage, msg_service, std::placeholders::_1, std::placeholders::_2);
            _mq_client->consume(_queue_name, cb);
        }
        MsgStorageServer::ptr build()
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

            MsgStorageServer::ptr server = std::make_shared<MsgStorageServer>(
                _mysql_client, _es_client, _mq_client, _discover_client, _registry_client, _rpc_server);
            return server;
        }

    private:
        // 用户子服务和文件子服务调用相关信息
        std::string _user_service_name;
        std::string _file_service_name;
        ServiceManager::ptr _mm_channels;
        Discovery::ptr _discover_client;

        // mysql数据库客户端
        std::shared_ptr<odb::core::database> _mysql_client;

        // es搜索引擎客户端
        std::shared_ptr<elasticlient::Client> _es_client;

        // 消息队列客户端句柄
        std::string _exchange_name;
        std::string _queue_name;
        std::string _routing_key;
        MQClient::ptr _mq_client;

        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };
}
