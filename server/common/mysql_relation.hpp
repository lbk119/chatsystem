#pragma once
#include "mysql.hpp"
#include "relation.hxx"
#include "relation-odb.hxx"
#include "logger.hpp"

namespace lbk
{
    class RelationTable
    {
    public:
        using ptr = std::shared_ptr<RelationTable>;
        RelationTable(const std::shared_ptr<odb::core::database> db)
            : _db(db) {}
        // 新增关系信息
        bool insert(const std::string &uid, const std::string &pid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                Relation r1(uid, pid);
                Relation r2(pid, uid);
                _db->persist(r1);
                _db->persist(r2);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增用户好友关系信息失败 {}-{}:{}！", uid, pid, e.what());
                return false;
            }
            return true;
        }
        // 移除关系信息
        bool remove(const std::string &uid, const std::string &pid)
        {
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<Relation> query;
                _db->erase_query<Relation>(query::user_id == uid && query::peer_id == pid);
                _db->erase_query<Relation>(query::user_id == pid && query::peer_id == uid);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("删除好友关系信息失败 {}-{}:{}！", uid, pid, e.what());
                return false;
            }
            return true;
        }
        // 判断关系是否存在
        bool exists(const std::string &uid, const std::string &pid)
        {
            bool ret = false;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<Relation> query;
                typedef odb::result<Relation> result;
                result r = _db->query<Relation>(query::user_id == uid && query::peer_id == pid);
                if (!r.empty())
                    ret = true;
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("获取用户好友关系失败:{}-{}-{}！", uid, pid, e.what());
                return false;
            }
            return ret;
        }
        // 获取指定用户的好友ID
        std::unordered_set<std::string> friends(const std::string &uid)
        {
            std::unordered_set<std::string> ret;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<Relation> query;
                typedef odb::result<Relation> result;
                result r = _db->query<Relation>(query::user_id == uid);
                for (auto it = r.begin(); it != r.end(); it++)
                {
                    ret.insert(it->peer_id());
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过用户-{}的所有好友ID失败:{}！", uid, e.what());
            }
            return ret;
        }

    private:
        std::shared_ptr<odb::core::database> _db;
    };
}