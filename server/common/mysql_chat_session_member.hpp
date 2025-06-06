#pragma once
#include "mysql.hpp"
#include "chat_session_member.hxx"
#include "chat_session_member-odb.hxx"
#include "logger.hpp"

namespace lbk
{
    class ChatSessionMemberTable
    {
    public:
        using ptr = std::shared_ptr<ChatSessionMemberTable>;
        ChatSessionMemberTable(const std::shared_ptr<odb::core::database> &db)
            : _db(db) {}
        // 单个会话成员的新增 --- ssid & uid
        bool append(ChatSessionMember &csm)
        {
            try
            {
                odb::transaction trans(_db->begin());
                _db->persist(csm);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增单会话成员失败 {}-{}:{}！", csm.session_id(), csm.user_id(), e.what());
                return false;
            }
            return true;
        }
        bool append(std::vector<ChatSessionMember> &csm_list)
        {
            try
            {
                odb::transaction trans(_db->begin());
                for (auto &csm : csm_list)
                    _db->persist(csm);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增单会话成员失败 {}-{}:{}！", csm_list[0].session_id(), csm_list.size(), e.what());
                return false;
            }
            return true;
        }

        // 删除指定会话中的指定成员 -- ssid & uid
        bool remove(ChatSessionMember &csm)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<ChatSessionMember> query;
                _db->erase_query<ChatSessionMember>(query::session_id == csm.session_id() && query::user_id == csm.user_id());
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除单会话成员失败 {}-{}:{}！", csm.session_id(), csm.user_id(), e.what());
                return false;
            }
            return true;
        }
        // 删除会话的所有成员信息
        bool remove(const std::string &ssid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<ChatSessionMember> query;
                _db->erase_query<ChatSessionMember>(query::session_id == ssid);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除会话所有成员失败 {}:{}！", ssid, e.what());
                return false;
            }
            return true;
        }
        // 获取对应 session_id 下的 user_id
        std::vector<std::string> members(const std::string &ssid)
        {
            std::vector<std::string> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<ChatSessionMember> query;
                typedef odb::result<ChatSessionMember> result;
                result res = _db->query<ChatSessionMember>(query::session_id == ssid);
                for (auto it = res.begin(); it != res.end(); it++)
                {
                    ret.push_back(it->user_id());
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("获取会话成员失败:{}-{}！", ssid, e.what());
                return ret;
            }
            return ret;
        }

    private:
        std::shared_ptr<odb::core::database> _db;
    };
}