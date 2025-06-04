#include "etcd.hpp"
#include "channel.hpp"
#include "utils.hpp"
#include <gflags/gflags.h>
#include <gtest/gtest.h>
#include <thread>
#include "user.pb.h"
#include "base.pb.h"

DEFINE_bool(run_mode, false, "程序的运行模式，false-调试，true-发布");
DEFINE_string(log_file, "", "发布模式下，用于指定日志的输出文件");
DEFINE_int32(log_level, 0, "发布模式下，用于指定日志输出等级");

DEFINE_string(etcd_host, "http://127.0.0.1:2379", "服务注册中心地址");
DEFINE_string(base_service, "/service", "服务监控根目录");
DEFINE_string(user_service, "/service/user_service", "监控的服务");

lbk::ServiceManager::ptr _user_channels;
lbk::UserInfo _user_info;
std::string _login_session_id;
std::string _new_nickname = "美丽的猪妈妈";

// TEST(用户子服务测试, 用户注册测试)
// {
//     auto channel = _user_channels->choose(FLAGS_user_service);
//     ASSERT_TRUE(channel);

//     lbk::UserRegisterReq req;
//     _user_info.set_user_id(lbk::uuid());
//     req.set_request_id(_user_info.user_id());
//     req.set_nickname(_user_info.nickname());
//     req.set_password("123456");
//     lbk::UserRegisterRsp rsp;
//     lbk::UserService_Stub stub(channel.get());
//     brpc::Controller cntl;
//     stub.UserRegister(&cntl, &req, &rsp, nullptr);
//     ASSERT_FALSE(cntl.Failed());
//     ASSERT_TRUE(rsp.success());
// }
TEST(用户子服务测试, 用户登录测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::UserLoginReq req;
    req.set_request_id(lbk::uuid());
    req.set_nickname(_user_info.nickname());
    req.set_password("123456");
    lbk::UserLoginRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.UserLogin(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
    _login_session_id = rsp.login_session_id();
}
TEST(用户子服务测试, 用户头像设置测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::SetUserAvatarReq req;
    req.set_request_id(lbk::uuid());
    req.set_avatar(_user_info.avatar());
    req.set_user_id(_user_info.user_id());
    req.set_session_id(_login_session_id);
    lbk::SetUserAvatarRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.SetUserAvatar(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
TEST(用户子服务测试, 用户签名设置测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::SetUserDescriptionReq req;
    req.set_request_id(lbk::uuid());
    req.set_description(_user_info.description());
    req.set_user_id(_user_info.user_id());
    req.set_session_id(_login_session_id);
    lbk::SetUserDescriptionRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.SetUserDescription(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
TEST(用户子服务测试, 用户昵称设置测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::SetUserNicknameReq req;
    req.set_request_id(lbk::uuid());
    req.set_nickname(_new_nickname);
    _user_info.set_nickname(_new_nickname);
    req.set_user_id(_user_info.user_id());
    req.set_session_id(_login_session_id);
    lbk::SetUserNicknameRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.SetUserNickname(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
TEST(用户子服务测试, 用户信息获取测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::GetUserInfoReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(_user_info.user_id());
    req.set_session_id(_login_session_id);
    lbk::GetUserInfoRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.GetUserInfo(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());

    ASSERT_EQ(rsp.user_info().user_id(), _user_info.user_id());
    ASSERT_EQ(rsp.user_info().nickname(), _user_info.nickname());
    ASSERT_EQ(rsp.user_info().description(), _user_info.description());
    ASSERT_EQ(rsp.user_info().avatar(), _user_info.avatar());
}
void user_register(const std::string &nickname)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::UserRegisterReq req;
    req.set_request_id(lbk::uuid());
    req.set_nickname(nickname);
    req.set_password("123456");
    lbk::UserRegisterRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.UserRegister(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
TEST(用户子服务测试, 批量用户信息获取测试)
{
    // user_register("小猪乔治");
    // user_register("小猪佩奇");
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::GetMultiUserInfoReq req;
    req.set_request_id(lbk::uuid());
    req.add_users_id("用户ID1");
    req.add_users_id("用户ID2");
    lbk::GetMultiUserInfoRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.GetMultiUserInfo(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());

    auto users_map = rsp.mutable_users_info();
    lbk::UserInfo quser = (*users_map)["用户ID1"];
    ASSERT_EQ(quser.user_id(), "用户ID1");
    ASSERT_EQ(quser.nickname(), "小猪乔治");

    lbk::UserInfo puser = (*users_map)["用户ID2"];
    ASSERT_EQ(puser.user_id(), "用户ID2");
    ASSERT_EQ(puser.nickname(), "小猪佩奇");
}
std::string phone = "13333334444";
TEST(用户子服务测试, 手机号注册测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::PhoneRegisterReq req;
    req.set_request_id(lbk::uuid());
    req.set_phone_number(phone);
    req.set_password("123456");
    lbk::PhoneRegisterRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.PhoneRegister(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
TEST(用户子服务测试, 手机号登录测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service);
    ASSERT_TRUE(channel);

    lbk::PhoneLoginReq req;
    req.set_request_id(lbk::uuid());
    req.set_phone_number(phone);
    req.set_password("123456");
    lbk::PhoneLoginRsp rsp;
    lbk::UserService_Stub stub(channel.get());
    brpc::Controller cntl;
    stub.PhoneLogin(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}

TEST(用户子服务测试, 手机号设置测试)
{
    auto channel = _user_channels->choose(FLAGS_user_service); // 获取通信信道
    ASSERT_TRUE(channel);

    lbk::SetUserPhoneNumberReq req;
    req.set_request_id(lbk::uuid());
    req.set_user_id(_user_info.user_id());
    req.set_phone_number("18888888888");
    lbk::SetUserPhoneNumberRsp rsp;
    brpc::Controller cntl;
    lbk::UserService_Stub stub(channel.get());
    stub.SetUserPhoneNumber(&cntl, &req, &rsp, nullptr);
    ASSERT_FALSE(cntl.Failed());
    ASSERT_TRUE(rsp.success());
}
int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    lbk::init_logger(FLAGS_run_mode, FLAGS_log_file, FLAGS_log_level);
    testing::InitGoogleTest(&argc, argv);

    // 1. 先构造Rpc信道管理对象
    _user_channels = std::make_shared<lbk::ServiceManager>();
    _user_channels->declared(FLAGS_user_service);
    auto put_cb = std::bind(&lbk::ServiceManager::onServiceOnline, _user_channels.get(), std::placeholders::_1, std::placeholders::_2);
    auto del_cb = std::bind(&lbk::ServiceManager::onServiceOffline, _user_channels.get(), std::placeholders::_1, std::placeholders::_2);
    // 2. 构造服务发现对象
    lbk::Discovery::ptr dclient = std::make_shared<lbk::Discovery>(FLAGS_etcd_host, FLAGS_base_service, put_cb, del_cb);

    _user_info.set_user_id("ceeb-92f16f97-0005");
    _user_info.set_nickname("猪妈妈");
    _user_info.set_description("这是一个美丽的猪妈妈!");
    _user_info.set_phone("15577778888");
    _user_info.set_avatar("猪妈妈头像数据");
    return RUN_ALL_TESTS();
}
