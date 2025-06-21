#pragma once
#include "mysql.hpp"
#include "chat_session.hxx"
#include "chat_session-odb.hxx"
#include "mysql_chat_session_member.hpp"
#include "logger.hpp"

namespace lbk
{
    class ChatSessionTable
    {
    public:
        using ptr = std::shared_ptr<ChatSessionTable>;
        ChatSessionTable(const std::shared_ptr<odb::core::database> db)
            : _db(db) {}
        bool insert(ChatSession &cs)
        {
            try
            {
                odb::transaction trans(_db->begin());
                _db->persist(cs);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增会话失败 {}:{}！", cs.chat_session_name(), e.what());
                return false;
            }
            return true;
        }
        bool remove(const std::string &ssid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<ChatSession> query;
                _db->erase_query<ChatSession>(query::chat_session_id == ssid);

                typedef odb::query<ChatSessionMember> mquery;
                _db->erase_query<ChatSessionMember>(mquery::session_id == ssid);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除会话失败 {}:{}！", ssid, e.what());
                return false;
            }
            return true;
        }
        // 单聊会话的删除，-- 根据单聊会话的两个成员
        bool remove(const std::string &uid, const std::string &pid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<SingleChatSession> query;
                auto r = _db->query_one<SingleChatSession>(query::css::chat_session_type == ChatSessionType::SINGLE &&
                                                           query::csm1::user_id == uid && query::csm2::user_id == pid);
                std::string ssid = r->chat_session_id;
                typedef odb::query<ChatSession> cquery;
                _db->erase_query<ChatSession>(cquery::chat_session_id == ssid);

                typedef odb::query<ChatSessionMember> mquery;
                _db->erase_query<ChatSessionMember>(mquery::session_id == ssid);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除会话失败 {}-{}:{}！", uid, pid, e.what());
                return false;
            }
            return true;
        }
        // 通过会话ID获取会话信息
        std::shared_ptr<ChatSession> select(const std::string &ssid)
        {
            std::shared_ptr<ChatSession> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<ChatSession> query;
                auto r = _db->query_one<ChatSession>(query::chat_session_id == ssid);
                ret.reset(r);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过会话ID获取会话信息失败 {}:{}！", ssid, e.what());
            }
            return ret;
        }
        // 通过用户ID获取单聊会话信息
        std::vector<SingleChatSession> singleChatSession(const std::string &uid)
        {
            std::vector<SingleChatSession> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<SingleChatSession> query;
                typedef odb::result<SingleChatSession> result;
                result r = _db->query<SingleChatSession>(query::css::chat_session_type == ChatSessionType::SINGLE &&
                                                         query::csm1::user_id == uid && query::csm2::user_id != uid);
                for (auto it = r.begin(); it != r.end(); it++)
                {
                    ret.push_back(*it);
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("获取用户 {} 的单聊会话失败:{}！", uid, e.what());
            }
            return ret;
        }

        // 通过用户ID获取群聊会话信息
        std::vector<GroupChatSession> groupChatSession(const std::string &uid)
        {
            std::vector<GroupChatSession> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<GroupChatSession> query;
                typedef odb::result<GroupChatSession> result;
                result r = _db->query<GroupChatSession>(query::css::chat_session_type == ChatSessionType::GROUP &&
                                                        query::csm::user_id == uid);
                for (auto it = r.begin(); it != r.end(); it++)
                {
                    ret.push_back(*it);
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("获取用户 {} 的群聊会话失败:{}！", uid, e.what());
            }
            return ret;
        }

    private:
        std::shared_ptr<odb::core::database> _db;
    };
}