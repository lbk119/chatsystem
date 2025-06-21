#include "mysql_apply.hpp"
#include "mysql_relation.hpp"
#include "mysql_chat_session.hpp"
#include "mysql_chat_session_member.hpp"
// 用户关系表的测试
void r_insert_test(lbk::RelationTable &rtb)
{
    rtb.insert("用户ID1", "用户ID2");
    rtb.insert("用户ID1", "用户ID3");
}
void r_friends_test(lbk::RelationTable &rtb)
{
    auto ret = rtb.friends("用户ID1");
    for (auto &s : ret)
        std::cout << s << std::endl;
}
void r_remove_test(lbk::RelationTable &rtb)
{
    rtb.remove("用户ID1", "用户ID2");
}
void r_exists_test(lbk::RelationTable &rtb)
{
    std::cout << "用户1和用户2是否为好友关系：" << rtb.exists("用户ID1", "用户ID2") << std::endl;
    std::cout << "用户1和用户3是否为好友关系：" << rtb.exists("用户ID1", "用户ID3") << std::endl;
}

// 用户申请表的测试
void fa_insert_test(lbk::FriendApplyTable &fatb)
{
    lbk::FriendApply fa1("用户ID1", "用户ID2");
    fatb.insert(fa1);
    lbk::FriendApply fa2("用户ID1", "用户ID3");
    fatb.insert(fa2);
    lbk::FriendApply fa3("用户ID2", "用户ID3");
    fatb.insert(fa3);
}
void fa_applyUsers_test(lbk::FriendApplyTable &fatb)
{
    lbk::FriendApply fa("用户ID3", "用户ID2");
    fatb.insert(fa);
    auto ret = fatb.applyUsers("用户ID2");
    for (auto &s : ret)
        std::cout << s << std::endl;
}
void fa_remove_test(lbk::FriendApplyTable &fatb)
{
    fatb.remove("用户ID2", "用户ID3");
    fatb.remove("用户ID3", "用户ID2");
}
void fa_exists_test(lbk::FriendApplyTable &fatb)
{
    std::cout << "用户1向用户2申请好友关系：" << fatb.exists("用户ID1", "用户ID2") << std::endl;
    std::cout << "用户2向用户3申请好友关系：" << fatb.exists("用户ID2", "用户ID3") << std::endl;
}

// 会话信息表的测试
void cs_insert_test(lbk::ChatSessionTable &cstb)
{
    lbk::ChatSession cs1("会话ID1", "会话名称1", lbk::ChatSessionType::SINGLE);
    cstb.insert(cs1);
    lbk::ChatSession cs2("会话ID2", "会话名称2", lbk::ChatSessionType::GROUP);
    cstb.insert(cs2);
    lbk::ChatSession cs3("会话ID3", "会话名称3", lbk::ChatSessionType::SINGLE);
    cstb.insert(cs3);
}
void cs_select_test(lbk::ChatSessionTable &cstb)
{
    auto ret = cstb.select("会话ID1");
    std::cout << ret->chat_session_id() << std::endl;
    std::cout << ret->chat_session_name() << std::endl;
    std::cout << (int)ret->chat_session_type() << std::endl;
}
void cs_singleChatSession_test(lbk::ChatSessionTable &cstb,lbk::ChatSessionMemberTable& csmtb)
{
    lbk::ChatSessionMember csm1("会话ID3", "用户ID1");
    lbk::ChatSessionMember csm2("会话ID3", "用户ID3");
    csmtb.append(csm1);
    csmtb.append(csm2);

    auto ret = cstb.singleChatSession("用户ID1");
    for (auto &info : ret)
    {
        std::cout << info.chat_session_id << std::endl;
        std::cout << info.friend_id << std::endl;
    }
}
void cs_groupChatSession_test(lbk::ChatSessionTable &cstb,lbk::ChatSessionMemberTable& csmtb)
{
    std::vector<lbk::ChatSessionMember> csms;
    csms.push_back({"会话ID2", "用户ID1"});
    csms.push_back({"会话ID2", "用户ID2"});
    csms.push_back({"会话ID2", "用户ID3"});
    csmtb.append(csms);

    auto ret = cstb.groupChatSession("用户ID1");
    for (auto &info : ret)
    {
        std::cout << info.chat_session_id << std::endl;
        std::cout << info.chat_session_name << std::endl;
    }
}
void cs_remove_test(lbk::ChatSessionTable &cstb)
{
    cstb.remove("会话ID3");
}
void cs_remove_test2(lbk::ChatSessionTable &cstb)
{
    cstb.remove("用户ID1", "用户ID2");
}
int main(int argc, char *argv[])
{
    auto db = lbk::ODBFactory::create("root", "2162627569", "127.0.0.1", "chat_system", "utf8", 0, 1);

    lbk::FriendApplyTable fatb(db);
    lbk::ChatSessionTable cstb(db);
    lbk::RelationTable rtb(db);
    lbk::ChatSessionMemberTable csmtb(db);

    // r_insert_test(rtb);
    // r_friends_test(rtb);
    // r_remove_test(rtb);
    // r_exists_test(rtb);

    // fa_insert_test(fatb);
    // fa_applyUsers_test(fatb);
    // fa_remove_test(fatb);
    // fa_exists_test(fatb);

    // cs_insert_test(cstb);
    // cs_select_test(cstb);
    // cs_singleChatSession_test(cstb,csmtb);
    cs_groupChatSession_test(cstb,csmtb);
    cs_remove_test(cstb);
    cs_remove_test2(cstb);

    return 0;
}