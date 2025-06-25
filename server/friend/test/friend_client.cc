#include "etcd.hpp"
#include "channel.hpp"
#include "utils.hpp"
#include <gflags/gflags.h>
#include <gtest/gtest.h>
#include "friend.pb.h"

DEFINE_bool(run_mode, false, "程序的运行模式，false-调试； true-发布；");
DEFINE_string(log_file, "", "发布模式下，用于指定日志的输出文件");
DEFINE_int32(log_level, 0, "发布模式下，用于指定日志输出等级");

DEFINE_string(etcd_host, "http://127.0.0.1:2379", "服务注册中心地址");
DEFINE_string(base_service, "/service", "服务监控根目录");
DEFINE_string(friend_service, "/service/friend_service", "服务监控目录");

std::shared_ptr<lbk::ServiceManager> sm;

void FriendAdd_test(const std::string &uid, const std::string &pid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::FriendAddReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_respondent_id(pid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::FriendAddRsp rsp;
    brpc::Controller cntl;
    stub.FriendAdd(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
void GetPendingFriendEventList_test(const std::string &uid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::GetPendingFriendEventListReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::GetPendingFriendEventListRsp rsp;
    brpc::Controller cntl;
    stub.GetPendingFriendEventList(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    for (int i = 0; i < rsp.event_size(); i++)
    {
        std::cout << "---------------\n";
        std::cout << rsp.event(i).sender().user_id() << std::endl;
        std::cout << rsp.event(i).sender().nickname() << std::endl;
        std::cout << rsp.event(i).sender().avatar() << std::endl;
    }
}

void FriendAddProcess_test(const std::string &uid, const std::string &pid, bool agree)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::FriendAddProcessReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_apply_user_id(pid);
    req.set_agree(agree);
    lbk::FriendService_Stub stub(channel.get());
    lbk::FriendAddProcessRsp rsp;
    brpc::Controller cntl;
    stub.FriendAddProcess(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    if (agree)
    {
        std::cout << rsp.new_session_id() << std::endl;
    }
}

void FriendSearch_test(const std::string &uid, const std::string &search_key)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::FriendSearchReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_search_key(search_key);
    lbk::FriendService_Stub stub(channel.get());
    lbk::FriendSearchRsp rsp;
    brpc::Controller cntl;
    stub.FriendSearch(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    for (int i = 0; i < rsp.user_info_size(); i++)
    {
        std::cout << "-------------------\n";
        std::cout << rsp.user_info(i).user_id() << std::endl;
        std::cout << rsp.user_info(i).nickname() << std::endl;
        std::cout << rsp.user_info(i).avatar() << std::endl;
    }
}

void GetFriendList_test(const std::string &uid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::GetFriendListReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::GetFriendListRsp rsp;
    brpc::Controller cntl;
    stub.GetFriendList(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    for (int i = 0; i < rsp.friend_list_size(); i++)
    {
        std::cout << "-------------------\n";
        std::cout << rsp.friend_list(i).user_id() << std::endl;
        std::cout << rsp.friend_list(i).nickname() << std::endl;
        std::cout << rsp.friend_list(i).avatar() << std::endl;
    }
}

void FriendRemove_test(const std::string &uid, const std::string &pid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::FriendRemoveReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_peer_id(pid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::FriendRemoveRsp rsp;
    brpc::Controller cntl;
    stub.FriendRemove(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}

void ChatSessionCreate_test(const std::string &uid, const std::vector<std::string> &pid_list)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::ChatSessionCreateReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    req.set_chat_session_name("快乐一家人");
    for (auto &pid : pid_list)
    {
        req.add_member_id_list(pid);
    }
    lbk::FriendService_Stub stub(channel.get());
    lbk::ChatSessionCreateRsp rsp;
    brpc::Controller cntl;
    stub.ChatSessionCreate(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    std::cout << rsp.chat_session_info().chat_session_id() << std::endl;
    std::cout << rsp.chat_session_info().chat_session_name() << std::endl;
}

void GetChatSessionMember_test(const std::string &cssid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::GetChatSessionMemberReq req;
    req.set_request_id(lbk::uuid());
    req.set_chat_session_id(cssid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::GetChatSessionMemberRsp rsp;
    brpc::Controller cntl;
    stub.GetChatSessionMember(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    for (int i = 0; i < rsp.member_info_list_size(); i++)
    {
        std::cout << "-------------------\n";
        std::cout << rsp.member_info_list(i).user_id() << std::endl;
        std::cout << rsp.member_info_list(i).nickname() << std::endl;
        std::cout << rsp.member_info_list(i).avatar() << std::endl;
    }
}

void GetChatSessionList_test(const std::string &uid)
{
    auto channel = sm->choose(FLAGS_friend_service);
    if (!channel)
    {
        std::cout << "获取通信信道失败！" << std::endl;
        return;
    }
    lbk::GetChatSessionListReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(uid);
    lbk::FriendService_Stub stub(channel.get());
    lbk::GetChatSessionListRsp rsp;
    brpc::Controller cntl;
    stub.GetChatSessionList(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    std::cout<<rsp.chat_session_info_list_size()<<std::endl;
    for (int i = 0; i < rsp.chat_session_info_list_size(); i++)
    {
        std::cout << "-------------------\n";
        std::cout << rsp.chat_session_info_list(i).single_chat_friend_id() << std::endl;
        std::cout << rsp.chat_session_info_list(i).chat_session_id() << std::endl;
        std::cout << rsp.chat_session_info_list(i).chat_session_name() << std::endl;
        std::cout << rsp.chat_session_info_list(i).avatar() << std::endl;
        std::cout << "消息内容：\n";
        std::cout << rsp.chat_session_info_list(i).prev_message().message_id() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().chat_session_id() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().timestamp() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().sender().user_id() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().sender().nickname() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().sender().avatar() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().message().file_message().file_name() << std::endl;
        std::cout << rsp.chat_session_info_list(i).prev_message().message().file_message().file_contents() << std::endl;
    }
}
int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    lbk::init_logger(FLAGS_run_mode, FLAGS_log_file, FLAGS_log_level);

    sm = std::make_shared<lbk::ServiceManager>();
    sm->declared(FLAGS_friend_service);
    auto put_cb = std::bind(&lbk::ServiceManager::onServiceOnline, sm.get(), std::placeholders::_1, std::placeholders::_2);
    auto del_cb = std::bind(&lbk::ServiceManager::onServiceOffline, sm.get(), std::placeholders::_1, std::placeholders::_2);

    lbk::Discovery::ptr dclient = std::make_shared<lbk::Discovery>(FLAGS_etcd_host, FLAGS_base_service, put_cb, del_cb);
    // FriendAdd_test("8ab0-fedce86b-0002","902c-75a583f5-0000");
    // FriendAdd_test("6ba1-18c6fe84-0004","902c-75a583f5-0000");
    // FriendAdd_test("fae6-e4a892a6-0005","902c-75a583f5-0000");

    // std::cout<<"获取猪妈妈的好友申请列表\n";
    // GetPendingFriendEventList_test("902c-75a583f5-0000");
    // FriendAddProcess_test("902c-75a583f5-0000","8ab0-fedce86b-0002",true);
    // FriendAddProcess_test("902c-75a583f5-0000","6ba1-18c6fe84-0004",true);
    // FriendAddProcess_test("902c-75a583f5-0000","fae6-e4a892a6-0005",false);

    // std::cout<<"猪妈妈进行好友搜索\n";
    // FriendSearch_test("902c-75a583f5-0000","猪");
    // std::cout<<"小猪乔治进行好友搜索\n";
    // FriendSearch_test("fae6-e4a892a6-0005","猪");

    // std::cout<<"获取猪妈妈的好友列表\n";
    // GetFriendList_test("902c-75a583f5-0000");

    // FriendRemove_test("902c-75a583f5-0000", "6ba1-18c6fe84-0004");
    // std::vector<std::string> pid_list = {"902c-75a583f5-0000", "fae6-e4a892a6-0005", "8ab0-fedce86b-0002", "6ba1-18c6fe84-0004"};
    // ChatSessionCreate_test("902c-75a583f5-0000", pid_list);

    // std::cout << "获取群聊的成员列表\n";
    // GetChatSessionMember_test("56b3-6f5ce3bd-0000");
    std::cout << "获取猪妈妈的会话列表\n";
    GetChatSessionList_test("902c-75a583f5-0000");
    return 0;
}