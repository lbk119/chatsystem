#include "mysql_user.hpp"
#include "user.hxx"
#include "user-odb.hxx"
#include "gflags/gflags.h"

DEFINE_bool(run_mode, false, "程序的运行模式，false-调试； true-发布；");
DEFINE_string(log_file, "", "发布模式下，用于指定日志的输出文件");
DEFINE_int32(log_level, 0, "发布模式下，用于指定日志输出等级");

void insert(lbk::UserTable &usertb)
{
    auto user1 = std::make_shared<lbk::User>("uid1", "昵称1", "112233");
    usertb.insert(user1);
    auto user2 = std::make_shared<lbk::User>("uid2", "445566");
    usertb.insert(user2);
}
void update_by_id(lbk::UserTable &user_tb)
{
    auto user = user_tb.select_by_id("uid1");
    user->description("我是一个风一样的男子！！");
    user_tb.update(user);
}
void update_by_phone(lbk::UserTable &user_tb)
{
    auto user = user_tb.select_by_phone("445566");
    user->password("888888888");
    user_tb.update(user);
}
void update_by_nickname(lbk::UserTable &user_tb)
{
    auto user = user_tb.select_by_nickname("uid2");
    user->nickname("昵称2");
    user_tb.update(user);
}
void select_users(lbk::UserTable &user_tb)
{
    std::vector<std::string> id_list = {"uid1", "uid2"};
    auto res = user_tb.select_multi_users(id_list);
    for (auto user : res)
    {
        std::cout << user.nickname() << std::endl;
    }
}
int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    lbk::init_logger(FLAGS_run_mode, FLAGS_log_file, FLAGS_log_level);

    auto db = lbk::ODBFactory::create("root", "2162627569", "127.0.0.1", "chat_system", "utf8", 0, 1);
    lbk::UserTable usertb(db);
    insert(usertb);
    update_by_id(usertb);
    update_by_phone(usertb);
    update_by_nickname(usertb);
    select_users(usertb);
    return 0;
}