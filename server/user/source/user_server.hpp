// 实现用户管理子服务
// 1. 实现文件rpc服务类 --- 实现rpc调用的业务处理接口
// 2. 实现用户管理子服务的服务器类
// 3. 实现用户管理子服务类的构造者
#include <brpc/server.h>
#include <butil/logging.h>

#include "etcd.hpp"    //服务注册模块封装
#include "logger.hpp"  //日志模块封装
#include "utils.hpp"   // 基础工具接口
#include "channel.hpp" // 信道管理模块封装
#include "mysql.hpp"
#include "mysql_user.hpp" // mysql数据管理客户端封装
#include "data_es.hpp"    // es数据管理客户端封装
#include "data_redis.hpp" // redis数据管理客户端封装

#include "user.hxx"
#include "user-odb.hxx"

#include "file.pb.h" //protobuf代码框架
#include "base.pb.h" //protobuf代码框架
#include "user.pb.h" //protobuf代码框架

namespace lbk
{
    // 继承实现UserService
    class UserServiceImpl : public lbk::UserService
    {
    public:
        UserServiceImpl(const std::shared_ptr<elasticlient::Client> &es_client,
                        const std::shared_ptr<odb::core::database> &mysql_client,
                        const std::shared_ptr<sw::redis::Redis> &redis_client,
                        const ServiceManager::ptr &mm_channels,
                        const std::string &file_service_name)
            : _es_user(std::make_shared<ESUser>(es_client)),
              _mysql_user(std::make_shared<UserTable>(mysql_client)),
              _redis_session(std::make_shared<Session>(redis_client)),
              _redis_status(std::make_shared<Status>(redis_client)),
              _mm_channels(mm_channels), _file_service_name(file_service_name)
        {
            // 创建好es客户端后立马创建索引，因为创建索引需要时间较长，如果后续立马查询可能因为索引没有创建好而查询不到
            _es_user->createIndex();
        }
        bool nickname_check(const std::string &nickname)
        {
            return nickname.size() >= 3 && nickname.size() <= 21;
        }
        bool password_check(const std::string &password)
        {
            if (password.size() < 6 || password.size() > 15)
            {
                LOG_ERROR("密码长度不合法：{}-{}", password, password.size());
                return false;
            }
            for (int i = 0; i < password.size(); i++)
            {
                if (!((password[i] > 'a' && password[i] < 'z') ||
                      (password[i] > 'A' && password[i] < 'Z') ||
                      (password[i] > '0' && password[i] < '9') ||
                      password[i] == '_' || password[i] == '-' || password[i] == '.'))
                {
                    LOG_ERROR("密码字符不合法：{}", password);
                    return false;
                }
            }
            return true;
        }
        virtual void UserRegister(::google::protobuf::RpcController *controller,
                                  const ::lbk::UserRegisterReq *request,
                                  ::lbk::UserRegisterRsp *response,
                                  ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户注册请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出昵称和密码
            const std::string nickname = request->nickname();
            const std::string password = request->password();
            // 2. 检查昵称是否合法（只能包含字母，数字，连字符-，下划线_，长度限制 3~21 之间）
            bool ret = nickname_check(nickname);
            if (ret == false)
            {
                LOG_ERROR("{} - 用户名长度不合法！", request->request_id());
                return err_response("用户名长度不合法！");
            }
            // 3. 检查密码是否合法（只能包含字母，数字，长度限制 6~15 之间）
            ret = password_check(password);
            if (ret == false)
            {
                LOG_ERROR("{} - 密码格式不合法！", request->request_id());
                return err_response("密码格式不合法！");
            }
            // 4. 根据昵称在数据库进行判断是否昵称已存在
            auto user = _mysql_user->select_by_nickname(nickname);
            if (user)
            {
                LOG_ERROR("{} - 用户名被占用 - {}！", request->request_id(), nickname);
                return err_response("用户名被占用!");
            }
            // 5. 向数据库新增数据
            std::string uid = uuid();
            user = std::make_shared<User>(uid, nickname, password);
            ret = _mysql_user->insert(user);
            if (ret == false)
            {
                LOG_ERROR("{} - Mysql数据库新增数据失败！", request->request_id());
                return err_response("Mysql数据库新增数据失败!");
            }
            // 6. 向 ES 服务器中新增用户信息
            ret = _es_user->appendData(uid, "", nickname, "", "");
            if (ret == false)
            {
                LOG_ERROR("{} - ES搜索引擎新增数据失败！", request->request_id());
                return err_response("ES搜索引擎新增数据失败！");
            }
            // 7. 组织响应，进行成功与否的响应即可
            response->set_success(true);
        }
        virtual void UserLogin(::google::protobuf::RpcController *controller,
                               const ::lbk::UserLoginReq *request,
                               ::lbk::UserLoginRsp *response,
                               ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户登录请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出昵称和密码
            const std::string nickname = request->nickname();
            const std::string password = request->password();
            // 2. 通过昵称获取用户信息，进行密码是否一致的判断
            auto user = _mysql_user->select_by_nickname(nickname);
            if (!user || password != user->password())
            {
                LOG_ERROR("{} - 用户名或密码错误 - {}-{}！", request->request_id(), nickname, password);
                return err_response("用户名或密码错误!");
            }
            // 3. 根据 redis 中的登录标记信息是否存在判断用户是否已经登录
            bool ret = _redis_status->exists(request->request_id());
            if (ret)
            {
                LOG_ERROR("{} - 用户已在其他地方登录 - {}！", request->request_id(), nickname);
                return err_response("用户已在其他地方登录!");
            }
            // 4. 构造会话 ID，生成会话键值对，向 redis 中添加会话信息以及登录标记信息
            std::string ssid = uuid();
            _redis_session->append(ssid, request->request_id());
            // 5. 添加用户登录信息
            _redis_status->append(request->request_id());
            // 6. 组织响应，返回生成的会话 ID
            response->set_success(true);
            response->set_login_session_id(ssid);
        }
        bool phone_check(const std::string &phone)
        {
            if (phone.size() != 11)
                return false;
            if (phone[0] != '1')
                return false;
            if (phone[1] < '3' || phone[1] > '9')
                return false;
            for (int i = 2; i < 11; i++)
            {
                if (phone[i] < '0' || phone[i] > '9')
                    return false;
            }
            return true;
        }
        //////////////验证码
        virtual void GetPhoneVerifyCode(::google::protobuf::RpcController *controller,
                                        const ::lbk::PhoneVerifyCodeReq *request,
                                        ::lbk::PhoneVerifyCodeRsp *response,
                                        ::google::protobuf::Closure *done)
        {
        }
        virtual void PhoneRegister(::google::protobuf::RpcController *controller,
                                   const ::lbk::PhoneRegisterReq *request,
                                   ::lbk::PhoneRegisterRsp *response,
                                   ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到手机号注册请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出手机号码和密码
            const std::string phone_number = request->phone_number();
            const std::string password = request->password();
            // 2. 检查注册手机号码是否合法
            bool ret = phone_check(phone_number);
            if (ret == false)
            {
                LOG_ERROR("{} - 手机号码格式错误 - {}！", request->request_id(), phone_number);
                return err_response("手机号码格式错误!");
            }
            // 3. 通过数据库查询判断手机号是否已经注册过
            auto user = _mysql_user->select_by_phone(phone_number);
            if (user)
            {
                LOG_ERROR("{} - 该手机号已注册过用户 - {}！", request->request_id(), phone_number);
                return err_response("该手机号已注册过用户!");
            }
            // 5. 向数据库新增用户信息
            std::string uid = uuid();
            user = std::make_shared<User>(uid, phone_number, password, uid);
            ret = _mysql_user->insert(user);
            if (ret == false)
            {
                LOG_ERROR("{} - 向数据库添加用户信息失败 - {}！", request->request_id(), phone_number);
                return err_response("向数据库添加用户信息失败!");
            }
            // 6. 向 ES 服务器中新增用户信息
            ret = _es_user->appendData(uid, phone_number, uid, "", "");
            if (ret == false)
            {
                LOG_ERROR("{} - ES搜索引擎新增数据失败！", request->request_id());
                return err_response("ES搜索引擎新增数据失败！");
            }
            // 7. 组织响应，进行成功与否的响应即可
            response->set_success(true);
        }
        virtual void PhoneLogin(::google::protobuf::RpcController *controller,
                                const ::lbk::PhoneLoginReq *request,
                                ::lbk::PhoneLoginRsp *response,
                                ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到手机号登录请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出手机号码和密码
            const std::string phone_number = request->phone_number();
            const std::string password = request->password();
            // 2. 检查注册手机号码是否合法
            bool ret = phone_check(phone_number);
            if (ret == false)
            {
                LOG_ERROR("{} - 手机号码格式错误 - {}！", request->request_id(), phone_number);
                return err_response("手机号码格式错误!");
            }
            // 3. 根据手机号从数据数据进行用户信息查询，判断用用户是否存在
            auto user = _mysql_user->select_by_phone(phone_number);
            if (!user || password != user->password())
            {
                LOG_ERROR("{} - 该手机号未注册用户或密码错误 - {}-{}！", request->request_id(), phone_number, password);
                return err_response("该手机号未注册用户或密码错误!");
            }
            // 4. 根据 redis 中的登录标记信息是否存在判断用户是否已经登录
            ret = _redis_status->exists(request->request_id());
            if (ret == true)
            {
                LOG_ERROR("{} - 用户已在其他地方登录 - {}！", request->request_id(), phone_number);
                return err_response("用户已在其他地方登录!");
            }
            // 5. 构造会话 ID，生成会话键值对，向 redis 中添加会话信息以及登录标记信息
            std::string ssid = uuid();
            _redis_session->append(ssid, request->request_id());
            // 6. 添加用户登录信息
            _redis_status->append(request->request_id());
            // 7. 组织响应，返回生成的会话 ID
            response->set_success(true);
            response->set_login_session_id(ssid);
        }
        // 从这一步开始，用户登录之后才会进行的操作
        virtual void GetUserInfo(::google::protobuf::RpcController *controller,
                                 const ::lbk::GetUserInfoReq *request,
                                 ::lbk::GetUserInfoRsp *response,
                                 ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到获取单个用户信息请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户 ID
            std::string uid = request->user_id();
            // 2. 通过用户 ID，从数据库中查询用户信息
            auto user = _mysql_user->select_by_id(uid);
            if (!user)
            {
                LOG_ERROR("{} - 未找到用户信息 - {}！", request->request_id(), uid);
                return err_response("未找到用户信息!");
            }
            // 3. 根据用户信息中的头像 ID，从文件服务器获取头像文件数据，组织完整用户信息
            auto user_info = response->mutable_user_info();
            user_info->set_user_id(uid);
            user_info->set_nickname(user->nickname());
            user_info->set_description(user->description());
            user_info->set_phone(user->phone());

            if (!user->avatar_id().empty())
            {
                auto channel = _mm_channels->choose(_file_service_name);
                if (!channel)
                {
                    LOG_ERROR("{} - 未找到文件管理子服务节点 - {}-{}！", request->request_id(), _file_service_name, uid);
                    return err_response("未找到文件管理子服务节点!");
                }
                FileService_Stub file_stub(channel.get());
                GetSingleFileReq req;
                GetSingleFileRsp rsp;
                req.set_request_id(request->request_id());
                req.set_file_id(user->avatar_id());
                brpc::Controller cntl;
                file_stub.GetSingleFile(&cntl, &req, &rsp, nullptr);
                if (cntl.Failed() || !rsp.success())
                {
                    LOG_ERROR("{} - 文件子服务调用失败：{}！", request->request_id(), cntl.ErrorText());
                    return err_response("文件子服务调用失败!");
                }
                user_info->set_avatar(rsp.file_data().file_content());
            }
            // 4. 组织响应，返回用户信息
            response->set_success(true);
        }
        virtual void GetMultiUserInfo(::google::protobuf::RpcController *controller,
                                      const ::lbk::GetMultiUserInfoReq *request,
                                      ::lbk::GetMultiUserInfoRsp *response,
                                      ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到批量用户信息获取请求!");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户ID --- 列表
            std::vector<std::string> uid_list;
            for (int i = 0; i < request->users_id_size(); i++)
            {
                uid_list.push_back(request->users_id(i));
            }
            // 2. 从数据库进行批量用户信息查询
            auto users = _mysql_user->select_multi_users(uid_list);
            if (users.size() != request->users_id_size())
            {
                LOG_ERROR("{} - 从数据库查找的用户信息数量不一致 {}-{}！", request->request_id(), request->users_id_size(), users.size());
                return err_response("从数据库查找的用户信息数量不一致!");
            }
            // 3. 批量从文件管理子服务进行文件下载
            auto channel = _mm_channels->choose(_file_service_name);
            if (!channel)
            {
                LOG_ERROR("{} - 未找到文件管理子服务节点 - {}！", request->request_id(), _file_service_name);
                return err_response("未找到文件管理子服务节点!");
            }
            FileService_Stub file_stub(channel.get());
            GetMultiFileReq req;
            GetMultiFileRsp rsp;
            req.set_request_id(request->request_id());
            for (auto &user : users)
            {
                if (!user.avatar_id().empty())
                    req.add_file_id_list(user.avatar_id());
            }
            brpc::Controller cntl;
            file_stub.GetMultiFile(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() || !rsp.success())
            {
                LOG_ERROR("{} - 文件子服务调用失败：{}！", request->request_id(), cntl.ErrorText());
                return err_response("文件子服务调用失败!");
            }
            // 4. 组织响应
            for (auto &user : users)
            {
                auto user_map = response->mutable_users_info(); ////本次请求要响应的用户信息map
                auto file_map = rsp.mutable_file_data();        // 这是批量文件请求响应中的map
                UserInfo user_info;
                user_info.set_user_id(user.user_id());
                user_info.set_nickname(user.nickname());
                user_info.set_description(user.description());
                user_info.set_phone(user.phone());
                user_info.set_avatar((*file_map)[user.avatar_id()].file_content());
                (*user_map)[user_info.user_id()] = user_info;
            }
            response->set_success(true);
        }

        virtual void SetUserAvatar(::google::protobuf::RpcController *controller,
                                   const ::lbk::SetUserAvatarReq *request,
                                   ::lbk::SetUserAvatarRsp *response,
                                   ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户头像设置请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户 ID
            std::string uid = request->user_id();
            // 2. 从数据库通过用户 ID 进行用户信息查询，判断用户是否存在
            auto user = _mysql_user->select_by_id(uid);
            if (!user)
            {
                LOG_ERROR("{} - 未找到用户信息 - {}！", request->request_id(), uid);
                return err_response("未找到用户信息!");
            }
            // 3. 上传头像文件到文件子服务
            auto channel = _mm_channels->choose(_file_service_name);
            if (!channel)
            {
                LOG_ERROR("{} - 未找到文件管理子服务节点 - {}！", request->request_id(), _file_service_name);
                return err_response("未找到文件管理子服务节点!");
            }
            FileService_Stub file_stub(channel.get());
            PutSingleFileReq req;
            PutSingleFileRsp rsp;
            req.set_request_id(request->request_id());
            req.mutable_file_data()->set_file_name("");
            req.mutable_file_data()->set_file_size(request->avatar().size());
            req.mutable_file_data()->set_file_content(request->avatar());
            brpc::Controller cntl;
            file_stub.PutSingleFile(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() || !rsp.success())
            {
                LOG_ERROR("{} - 文件子服务调用失败：{}！", request->request_id(), cntl.ErrorText());
                return err_response("文件子服务调用失败!");
            }
            // 4. 将返回的头像文件 ID 更新到数据库中
            user->avatar_id(rsp.file_info().file_id());
            _mysql_user->update(user);
            // 5. 更新 ES 服务器中用户信息
            bool ret = _es_user->appendData(user->user_id(), user->phone(), user->nickname(),
                                            user->description(), user->avatar_id());
            if (ret == false)
            {
                LOG_ERROR("{} - 更新搜索引擎用户头像ID失败 ：{}！", request->request_id(), user->avatar_id());
                return err_response("更新搜索引擎用户头像ID失败!");
            }
            // 6. 组织响应，返回更新成功与否
            response->set_success(true);
        }
        virtual void SetUserNickname(::google::protobuf::RpcController *controller,
                                     const ::lbk::SetUserNicknameReq *request,
                                     ::lbk::SetUserNicknameRsp *response,
                                     ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户昵称设置请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户 ID 与新的昵称
            std::string uid = request->user_id();
            std::string new_nickname = request->nickname();
            // 2. 判断昵称格式是否正确
            bool ret = nickname_check(new_nickname);
            if (ret == false)
            {
                LOG_ERROR("{} - 用户名长度不合法！", request->request_id());
                return err_response("用户名长度不合法！");
            }
            // 3. 从数据库通过用户 ID 进行用户信息查询，判断用户是否存在
            auto user = _mysql_user->select_by_id(uid);
            if (!user)
            {
                LOG_ERROR("{} - 未找到用户信息 - {}！", request->request_id(), uid);
                return err_response("未找到用户信息!");
            }
            // 4. 将新的昵称更新到数据库中
            user->nickname(new_nickname);
            ret = _mysql_user->update(user);
            if (ret == false)
            {
                LOG_ERROR("{} - 更新数据库用户昵称失败 ：{}！", request->request_id(), new_nickname);
                return err_response("更新数据库用户昵称失败!");
            }
            // 5. 更新 ES 服务器中用户信息
            ret = _es_user->appendData(user->user_id(), user->phone(), user->nickname(),
                                       user->description(), user->avatar_id());
            if (ret == false)
            {
                LOG_ERROR("{} - 更新搜索引擎用户昵称失败 ：{}！", request->request_id(), new_nickname);
                return err_response("更新搜索引擎用户昵称失败!");
            }
            // 6. 组织响应，返回更新成功与否
            response->set_success(true);
        }
        virtual void SetUserDescription(::google::protobuf::RpcController *controller,
                                        const ::lbk::SetUserDescriptionReq *request,
                                        ::lbk::SetUserDescriptionRsp *response,
                                        ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户签名设置请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户 ID 与新的签名
            std::string uid = request->user_id();
            std::string new_description = request->description();
            // 2. 从数据库通过用户 ID 进行用户信息查询，判断用户是否存在
            auto user = _mysql_user->select_by_id(uid);
            if (!user)
            {
                LOG_ERROR("{} - 未找到用户信息 - {}！", request->request_id(), uid);
                return err_response("未找到用户信息!");
            }
            // 3. 将新的昵称更新到数据库中
            user->description(new_description);
            bool ret = _mysql_user->update(user);
            if (ret == false)
            {
                LOG_ERROR("{} - 更新数据库用户签名失败 ：{}！", request->request_id(), new_description);
                return err_response("更新数据库用户签名失败!");
            }
            // 4. 更新 ES 服务器中用户信息
            ret = _es_user->appendData(user->user_id(), user->phone(), user->nickname(),
                                       user->description(), user->avatar_id());
            if (ret == false)
            {
                LOG_ERROR("{} - 更新搜索引擎用户签名失败 ：{}！", request->request_id(), new_description);
                return err_response("更新搜索引擎用户签名失败!");
            }
            // 5. 组织响应，返回更新成功与否
            response->set_success(true);
        }
        virtual void SetUserPhoneNumber(::google::protobuf::RpcController *controller,
                                        const ::lbk::SetUserPhoneNumberReq *request,
                                        ::lbk::SetUserPhoneNumberRsp *response,
                                        ::google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到用户手机号设置请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };
            // 1. 从请求中取出用户 ID 与手机号
            std::string uid = request->user_id();
            std::string new_phone_number = request->phone_number();
            // 2. 从数据库通过用户 ID 进行用户信息查询，判断用户是否存在
            auto user = _mysql_user->select_by_id(uid);
            if (!user)
            {
                LOG_ERROR("{} - 未找到用户信息 - {}！", request->request_id(), uid);
                return err_response("未找到用户信息!");
            }
            // 4. 将新的手机号更新到数据库中
            user->phone(new_phone_number);
            bool ret = _mysql_user->update(user);
            if (ret == false)
            {
                LOG_ERROR("{} - 更新数据库用户手机号失败 ：{}！", request->request_id(), new_phone_number);
                return err_response("更新数据库用户手机号失败!");
            }
            // 5. 更新 ES 服务器中用户信息
            ret = _es_user->appendData(user->user_id(), user->phone(), user->nickname(),
                                       user->description(), user->avatar_id());
            if (ret == false)
            {
                LOG_ERROR("{} - 更新搜索引擎用户手机号失败 ：{}！", request->request_id(), new_phone_number);
                return err_response("更新搜索引擎用户手机号失败!");
            }
            // 6. 组织响应，返回更新成功与否
            response->set_success(true);
        }

    private:
        ESUser::ptr _es_user;
        UserTable::ptr _mysql_user;
        Session::ptr _redis_session;
        Status::ptr _redis_status;
        // rpc调用文件存储子服务相关对象
        ServiceManager::ptr _mm_channels;
        std::string _file_service_name;
    };

    // 使用建造者模式实现UserServer
    class UserServer
    {
    public:
        using ptr = std::shared_ptr<UserServer>;
        UserServer(
            const Discovery::ptr &discover_client,
            const Registry::ptr &registry_client,
            const std::shared_ptr<odb::core::database> &mysql_client,
            const std::shared_ptr<sw::redis::Redis> &redis_client,
            const std::shared_ptr<elasticlient::Client> &es_client,
            const std::shared_ptr<brpc::Server> &rpc_server)
            : _discover_client(discover_client), _registry_client(_registry_client),
              _mysql_client(mysql_client), _redis_client(redis_client), _es_client(es_client),
              _rpc_server(rpc_server)
        {
        }
        // 搭建RPC服务器，并启动服务器
        void start()
        {
            _rpc_server->RunUntilAskedToQuit();
        }

    private:
        Discovery::ptr _discover_client;
        Registry::ptr _registry_client;
        std::shared_ptr<odb::core::database> _mysql_client;
        std::shared_ptr<sw::redis::Redis> _redis_client;
        std::shared_ptr<elasticlient::Client> _es_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };

    class UserServerBuilder
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
        // 构造redis客户端对象
        void make_redis_object(const std::string &host, int port, int db, bool keep_alive)
        {
            _redis_client = RedisClientFactory::create(host, port, db, keep_alive);
        }
        // 用于构造服务发现客户端&信道管理对象
        void make_discovery_object(const std::string &reg_host, const std::string &base_service_name, const std::string &file_service_name)
        {
            _file_service_name = file_service_name;
            _mm_channels = std::make_shared<ServiceManager>();
            _mm_channels->declared(file_service_name);
            LOG_DEBUG("设置文件子服务为需添加管理的子服务：{}", file_service_name);
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
            if (!_mysql_client)
            {
                LOG_ERROR("还未初始化Mysql数据库模块！");
                abort();
            }
            if (!_redis_client)
            {
                LOG_ERROR("还未初始化Redis数据库模块！");
                abort();
            }
            if (!_mm_channels)
            {
                LOG_ERROR("还未初始化信道管理模块！");
                abort();
            }
            _rpc_server = std::make_shared<brpc::Server>();
            UserServiceImpl *user_service = new UserServiceImpl(_es_client, _mysql_client, _redis_client, _mm_channels, _file_service_name);
            int ret = _rpc_server->AddService(user_service, brpc::ServiceOwnership::SERVER_OWNS_SERVICE);
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
        UserServer::ptr build()
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
            UserServer::ptr server = std::make_shared<UserServer>(_discover_client, _registry_client,
                                                                  _mysql_client, _redis_client, _es_client, _rpc_server);
            return server;
        }

    private:
        std::string _file_service_name;
        ServiceManager::ptr _mm_channels;
        Discovery::ptr _discover_client;

        Registry::ptr _registry_client;
        std::shared_ptr<odb::core::database> _mysql_client;
        std::shared_ptr<sw::redis::Redis> _redis_client;
        std::shared_ptr<elasticlient::Client> _es_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };
}