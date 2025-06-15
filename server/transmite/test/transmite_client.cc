#include "etcd.hpp"
#include "channel.hpp"
#include "utils.hpp"
#include <gflags/gflags.h>
#include <gtest/gtest.h>
#include <thread>
#include "transmite.pb.h"

DEFINE_bool(run_mode, false, "程序的运行模式，false-调试； true-发布；");
DEFINE_string(log_file, "", "发布模式下，用于指定日志的输出文件");
DEFINE_int32(log_level, 0, "发布模式下，用于指定日志输出等级");

DEFINE_string(etcd_host, "http://127.0.0.1:2379", "服务注册中心地址");
DEFINE_string(base_service, "/service", "服务监控根目录");
DEFINE_string(transmite_service, "/service/transmite_service", "服务监控根目录");

std::shared_ptr<lbk::ServiceManager> sm;

void string_message(const std::string &uid, const std::string &chat_ssid, const std::string &msg)
{
    auto channel = sm->choose(FLAGS_transmite_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }

    lbk::NewMessageReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_chat_session_id(chat_ssid);
    req.mutable_message()->set_message_type(lbk::MessageType::STRING);
    req.mutable_message()->mutable_string_message()->set_content(msg);
    lbk::MsgTransmitService_Stub stub(channel.get());
    lbk::GetTransmitTargetRsp rsp;
    brpc::Controller cntl;
    stub.GetTransmitTarget(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}

void image_message(const std::string &uid, const std::string &chat_ssid, const std::string &msg)
{
    auto channel = sm->choose(FLAGS_transmite_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }

    lbk::NewMessageReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_chat_session_id(chat_ssid);
    req.mutable_message()->set_message_type(lbk::MessageType::IMAGE);
    req.mutable_message()->mutable_image_message()->set_image_content(msg);
    lbk::MsgTransmitService_Stub stub(channel.get());
    lbk::GetTransmitTargetRsp rsp;
    brpc::Controller cntl;
    stub.GetTransmitTarget(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}

void speech_message(const std::string &uid, const std::string &chat_ssid, const std::string &msg)
{
    auto channel = sm->choose(FLAGS_transmite_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }

    lbk::NewMessageReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_chat_session_id(chat_ssid);
    req.mutable_message()->set_message_type(lbk::MessageType::SPEECH);
    req.mutable_message()->mutable_speech_message()->set_file_contents(msg);
    lbk::MsgTransmitService_Stub stub(channel.get());
    lbk::GetTransmitTargetRsp rsp;
    brpc::Controller cntl;
    stub.GetTransmitTarget(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}

void file_message(const std::string &uid, const std::string &chat_ssid, const std::string &file_name,const std::string &content)
{
    auto channel = sm->choose(FLAGS_transmite_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }

    lbk::NewMessageReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_chat_session_id(chat_ssid);
    req.mutable_message()->set_message_type(lbk::MessageType::FILE);
    req.mutable_message()->mutable_file_message()->set_file_contents(content);
    req.mutable_message()->mutable_file_message()->set_file_name(file_name);
    req.mutable_message()->mutable_file_message()->set_file_size(content.size());
    lbk::MsgTransmitService_Stub stub(channel.get());
    lbk::GetTransmitTargetRsp rsp;
    brpc::Controller cntl;
    stub.GetTransmitTarget(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    lbk::init_logger(FLAGS_run_mode, FLAGS_log_file, FLAGS_log_level);

    sm = std::make_shared<lbk::ServiceManager>();
    sm->declared(FLAGS_transmite_service);
    auto put_cb = std::bind(&lbk::ServiceManager::onServiceOnline, sm.get(), std::placeholders::_1, std::placeholders::_2);
    auto del_cb = std::bind(&lbk::ServiceManager::onServiceOffline, sm.get(), std::placeholders::_1, std::placeholders::_2);

    lbk::Discovery::ptr dclient = std::make_shared<lbk::Discovery>(FLAGS_etcd_host, FLAGS_base_service, put_cb, del_cb);
    string_message("用户ID1","会话ID1","今天吃饭了吗？");
    string_message("用户ID2","会话ID1","吃了广式烧腊！！");
    image_message("用户ID1","会话ID1","调皮的柴犬图片数据");
    speech_message("用户ID1","会话ID1","哼哼的猪叫声数据");
    file_message("用户ID1","会话ID1","乔治的文件名称","乔治的文件数据");
    return 0;
}