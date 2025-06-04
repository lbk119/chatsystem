#include "../../../common/data_redis.hpp"
#include <gflags/gflags.h>
#include <thread>

DEFINE_string(ip, "127.0.0.1", "这是服务器的IP地址，格式：127.0.0.1");
DEFINE_int32(port, 6379, "这是服务器的端口, 格式: 6379");
DEFINE_int32(db, 0, "库的编号：默认0号");
DEFINE_bool(keep_alive, true, "是否进行长连接保活");

void session_test(const std::shared_ptr<sw::redis::Redis> &client) {
    lbk::Session ss(client);
    ss.append("会话ID1", "用户ID1");
    ss.append("会话ID2", "用户ID2");
    ss.append("会话ID3", "用户ID3");
    ss.append("会话ID4", "用户ID4");

    ss.remove("会话ID2");
    ss.remove("会话ID3");

    auto res1 = ss.uid("会话ID1");
    if (res1) std::cout << *res1 << std::endl;
    auto res2 = ss.uid("会话ID2");
    if (res2) std::cout << *res2 << std::endl;
    auto res3 = ss.uid("会话ID3");
    if (res3) std::cout << *res3 << std::endl;
    auto res4 = ss.uid("会话ID4");
    if (res4) std::cout << *res4 << std::endl;
}

void status_test(const std::shared_ptr<sw::redis::Redis> &client) {
    lbk::Status status(client);
    status.append("用户ID1");
    status.append("用户ID2");
    status.append("用户ID3");
    
    status.remove("用户ID2");

    if (status.exists("用户ID1")) std::cout << "用户1在线！" << std::endl;
    if (status.exists("用户ID2")) std::cout << "用户2在线！" << std::endl;
    if (status.exists("用户ID3")) std::cout << "用户3在线！" << std::endl;
}

void code_test(const std::shared_ptr<sw::redis::Redis> &client) {
    lbk::Codes codes(client);
    codes.append("验证码ID1", "验证码1");
    codes.append("验证码ID2", "验证码2");
    codes.append("验证码ID3", "验证码3");
    
    codes.remove("验证码ID2");

    auto y1 = codes.code("验证码ID1");
    auto y2 = codes.code("验证码ID2");
    auto y3 = codes.code("验证码ID3");
    if (y1) std::cout << *y1 << std::endl;
    if (y2) std::cout << *y2 << std::endl;
    if (y3) std::cout << *y3 << std::endl;

    std::this_thread::sleep_for(std::chrono::seconds(4));
    auto y4 = codes.code("验证码ID1");
    auto y5 = codes.code("验证码ID2");
    auto y6 = codes.code("验证码ID3");
    if (!y4) std::cout << "验证码ID1不存在" << std::endl;
    if (!y5) std::cout << "验证码ID2不存在" << std::endl;
    if (!y6) std::cout << "验证码ID3不存在" << std::endl;
}

int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);

    auto client = lbk::RedisClientFactory::create(FLAGS_ip, FLAGS_port, FLAGS_db, FLAGS_keep_alive);

    session_test(client);
    status_test(client);
    code_test(client);
    return 0;
}
