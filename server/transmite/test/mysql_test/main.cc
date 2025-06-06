#include "../../../common/mysql.hpp"
#include "../../../common/mysql_chat_session_member.hpp"
#include "chat_session_member-odb.hxx"
#include <gflags/gflags.h>

DEFINE_bool(run_mode, false, "程序的运行模式，false-调试； true-发布；");
DEFINE_string(log_file, "", "发布模式下，用于指定日志的输出文件");
DEFINE_int32(log_level, 0, "发布模式下，用于指定日志输出等级");

void append_test(lbk::ChatSessionMemberTable &tb) {
    lbk::ChatSessionMember csm1("会话ID1", "用户ID1");
    tb.append(csm1);
    lbk::ChatSessionMember csm2("会话ID1", "用户ID2");
    tb.append(csm2);
    lbk::ChatSessionMember csm3("会话ID2", "用户ID3");
    tb.append(csm3);
}

void multi_append_test(lbk::ChatSessionMemberTable &tb) {
    lbk::ChatSessionMember csm1("会话ID3", "用户ID1");
    lbk::ChatSessionMember csm2("会话ID3", "用户ID2");
    lbk::ChatSessionMember csm3("会话ID3", "用户ID3");
    std::vector<lbk::ChatSessionMember> list = {csm1, csm2, csm3};
    tb.append(list);
}

void remove_test(lbk::ChatSessionMemberTable &tb) {
    lbk::ChatSessionMember csm3("会话ID2", "用户ID3");
    tb.remove(csm3);
}

void ss_members(lbk::ChatSessionMemberTable &tb) {
    auto res = tb.members("会话ID1");
    for (auto &id : res) {
        std::cout << id << std::endl;
    }
}
void remove_all(lbk::ChatSessionMemberTable &tb) {
    tb.remove("会话ID3");
}


int main(int argc, char *argv[])
{
    google::ParseCommandLineFlags(&argc, &argv, true);
    lbk::init_logger(FLAGS_run_mode, FLAGS_log_file, FLAGS_log_level);

    auto db = lbk::ODBFactory::create("root", "2162627569", "127.0.0.1", "chat_system", "utf8", 0, 1);
    
    lbk::ChatSessionMemberTable csmt(db);
    // append_test(csmt);
    // multi_append_test(csmt);
    // remove_test(csmt);
    // ss_members(csmt);
    remove_all(csmt);
    return 0;
}