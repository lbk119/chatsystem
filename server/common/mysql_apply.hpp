#pragma once
#include "mysql.hpp"
#include "friend_apply.hxx"
#include "friend_apply-odb.hxx"
#include "logger.hpp"

namespace lbk
{
    class FriendApplyTable
    {
    public:
        using ptr = std::shared_ptr<FriendApplyTable>;
        FriendApplyTable(const std::shared_ptr<odb::core::database> db)
            : _db(db) {}
        bool insert(FriendApply &fa)
        {
            try
            {
                odb::transaction trans(_db->begin());
                _db->persist(fa);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增好友申请事件失败 {}-{}:{}！", fa.user_id(), fa.peer_id(), e.what());
                return false;
            }
            return true;
        }
        bool remove(const std::string &uid, const std::string &pid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<FriendApply> query;
                _db->erase_query<FriendApply>(query::user_id == uid && query::peer_id == pid);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除好友申请事件失败 {}-{}:{}！", uid, pid, e.what());
                return false;
            }
            return true;
        }
        bool exists(const std::string &uid, const std::string &pid)
        {
            bool ret = false;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<FriendApply> query;
                typedef odb::result<FriendApply> result;
                result r = _db->query<FriendApply>(query::user_id == uid && query::peer_id == pid);
                if (!r.empty())
                    ret = true;
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("获取好友申请事件失败:{}-{}-{}！", uid, pid, e.what());
            }
            return ret;
        }
        // 获取当前指定用户的所有好友申请者ID
        std::vector<std::string> applyUsers(const std::string &uid)
        {
            std::vector<std::string> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<FriendApply> query;
                typedef odb::result<FriendApply> result;
                // 当前的uid是被申请者的用户ID
                result r = _db->query<FriendApply>(query::peer_id == uid);
                for (auto it = r.begin(); it != r.end(); it++)
                {
                    ret.push_back(it->user_id());
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过用户{}的好友申请者失败:{}！", uid, e.what());
            }
            return ret;
        }

    private:
        std::shared_ptr<odb::core::database> _db;
    };
}