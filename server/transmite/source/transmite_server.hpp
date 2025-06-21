// 实现消息转发服务
#include <brpc/server.h>
#include <butil/logging.h>

#include "etcd.hpp"       //服务注册模块封装
#include "logger.hpp"     //日志模块封装
#include "base.pb.h"      //protobuf代码框架
#include "user.pb.h"      //protobuf代码框架
#include "transmite.pb.h" //protobuf代码框架
#include "channel.hpp"
#include "rabbitmq.hpp"
#include "mysql.hpp"
#include "mysql_chat_session_member.hpp"
#include "utils.hpp"

namespace lbk
{
    // 继承实现MsgTransmitService
    class TransmitServiceImpl : public lbk::MsgTransmitService
    {
    public:
        TransmitServiceImpl(const std::shared_ptr<odb::core::database> &db, const std::string &exchange_name,
                            const std::string &routing_key, const MQClient::ptr &mq_client,
                            const ServiceManager::ptr &mm_channels, const std::string &user_service_name)
            : _mysql_session_member_table(std::make_shared<ChatSessionMemberTable>(db)),
              _exchange_name(exchange_name), _routing_key(routing_key), _mq_client(mq_client),
              _mm_channels(mm_channels), _user_service_name(user_service_name)
        {
        }
        void GetTransmitTarget(google::protobuf::RpcController *controller,
                               const lbk::NewMessageReq *request,
                               lbk::GetTransmitTargetRsp *response,
                               google::protobuf::Closure *done)
        {
            LOG_DEBUG("收到消息转发请求！");
            brpc::ClosureGuard rpc_guard(done);
            response->set_request_id(request->request_id());
            // 定义一个错误处理函数，当出错时调用该函数
            auto err_response = [this, &response](const std::string &err_msg)
            {
                response->set_success(false);
                response->set_errmsg(err_msg);
            };

            // 从请求中获取关键信息：用户ID，所属会话ID，消息内容
            std::string uid = request->user_id();
            std::string chat_ssid = request->chat_session_id();
            MessageContent content = request->message();
            // 进行消息组织：发送者-用户子服务获取信息，所属会话，消息内容，产生时间，消息ID
            auto channel = _mm_channels->choose(_user_service_name);
            if (!channel)
            {
                LOG_ERROR("{}-{} 没有可供访问的用户子服务节点！", request->request_id(), _user_service_name);
                return err_response("没有可供访问的用户子服务节点！");
            }
            UserService_Stub stub(channel.get());
            GetUserInfoReq req;
            req.set_request_id(request->request_id());
            req.set_user_id(uid);
            GetUserInfoRsp rsp;
            brpc::Controller cntl;
            stub.GetUserInfo(&cntl, &req, &rsp, nullptr);
            if (cntl.Failed() == true || rsp.success() == false)
            {
                LOG_ERROR("{} - 用户子服务调用失败：{}！", request->request_id(), cntl.ErrorText());
                return err_response("用户子服务调用失败!");
            }

            MessageInfo message;
            message.set_message_id(uuid());
            message.set_chat_session_id(chat_ssid);
            message.set_timestamp(time(nullptr));
            message.mutable_sender()->CopyFrom(rsp.user_info());
            message.mutable_message()->CopyFrom(content);
            // 将封装完毕的消息，发布到消息队列，待消息存储子服务进行消息持久化
            bool ret = _mq_client->publish(_exchange_name, message.SerializeAsString(), _routing_key);
            if (!ret)
            {
                LOG_ERROR("{} - 持久化消息发布失败：{}！", request->request_id(), cntl.ErrorText());
                return err_response("持久化消息发布失败：!");
            }
            // 获取消息转发客户端用户列表
            std::vector<std::string> target = _mysql_session_member_table->members(chat_ssid);
            // 组织响应
            response->set_success(true);
            response->mutable_message()->CopyFrom(message);
            for (auto &id : target)
            {
                response->add_target_id_list(id);
            }
        }

    private:
        // 用户子服务调用相关信息
        std::string _user_service_name;
        ServiceManager::ptr _mm_channels;

        // 聊天会话成员表的操作句柄
        ChatSessionMemberTable::ptr _mysql_session_member_table;

        // 消息队列客户端句柄
        std::string _exchange_name;
        std::string _routing_key;
        MQClient::ptr _mq_client;
    };

    // 使用建造者模式实现TransmiteServer
    class TransmiteServer
    {
    public:
        using ptr = std::shared_ptr<TransmiteServer>;
        TransmiteServer(const std::shared_ptr<odb::core::database> &db,
                        const Discovery::ptr &discovery_client,
                        const Registry::ptr &reg_client,
                        const std::shared_ptr<brpc::Server> &rpc_server)
            : _db(db), _discovery_client(discovery_client), _registry_client(reg_client), _rpc_server(rpc_server)
        {
        }
        // 搭建RPC服务器，并启动服务器
        void start()
        {
            _rpc_server->RunUntilAskedToQuit();
        }

    private:
        std::shared_ptr<odb::core::database> _db;
        Discovery::ptr _discovery_client;
        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };

    class TransmiteServerBuilder
    {
    public:
        // 用于构造rabbitmq客户端对象
        void make_mq_object(const std::string &user, const std::string &password, const std::string &host,
                            const std::string &exchange, const std::string &queue, const std::string &routing_key)
        {
            _exchange_name = exchange;
            _routing_key = routing_key;
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
        // 用于构造服务发现客户端&信道管理对象
        void make_discovery_object(const std::string &reg_host, const std::string &base_service_name, const std::string &user_service_name)
        {
            _user_service_name = user_service_name;
            _mm_channels = std::make_shared<ServiceManager>();
            _mm_channels->declared(user_service_name);
            LOG_DEBUG("设置用户子服务为需添加管理的子服务：{}", user_service_name);
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
            if (!_mq_client)
            {
                LOG_ERROR("还未初始化消息队列客户端模块！");
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
            TransmitServiceImpl *transmite_service = new TransmitServiceImpl(
                _mysql_client, _exchange_name, _routing_key, _mq_client, _mm_channels, _user_service_name);
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
        TransmiteServer::ptr build()
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
            TransmiteServer::ptr server = std::make_shared<TransmiteServer>(
                _mysql_client, _discover_client, _registry_client, _rpc_server);
            return server;
        }

    private:
        // 用户子服务调用相关信息
        std::string _user_service_name;
        ServiceManager::ptr _mm_channels;
        Discovery::ptr _discover_client;

        // mysql数据库客户端
        std::shared_ptr<odb::core::database> _mysql_client;

        // 消息队列客户端句柄
        std::string _exchange_name;
        std::string _routing_key;
        MQClient::ptr _mq_client;

        Registry::ptr _registry_client;
        std::shared_ptr<brpc::Server> _rpc_server;
    };
}
