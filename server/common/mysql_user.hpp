#pragma once
#include "mysql.hpp"
#include "user.hxx"
#include "user-odb.hxx"
#include "logger.hpp"

namespace lbk
{
    class UserTable
    {
    public:
        using ptr = std::shared_ptr<UserTable>;
        UserTable(const std::shared_ptr<odb::core::database> db)
            : _db(db) {}
        bool insert(const std::shared_ptr<User> &user)
        {
            try
            {
                odb::transaction trans(_db->begin());
                _db->persist(*user);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("新增用户失败{}:{}!", user->nickname(), e.what());
                return false;
            }
            return true;
        }
        bool update(const std::shared_ptr<User> &user)
        {
            try
            {
                odb::transaction trans(_db->begin());
                _db->update(*user);
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("更新用户失败{}:{}!", user->nickname(), e.what());
                return false;
            }
            return true;
        }
        std::shared_ptr<User> select_by_nickname(const std::string &nickname)
        {
            std::shared_ptr<User> res;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<User> query;
                res.reset(_db->query_one<User>(query::nickname == nickname));
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过昵称查询用户失败{}:{}!", nickname, e.what());
                return std::shared_ptr<User>();
            }
            return res;
        }
        std::shared_ptr<User> select_by_phone(const std::string &phone)
        {
            std::shared_ptr<User> res;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<User> query;
                res.reset(_db->query_one<User>(query::phone == phone));
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过手机号查询用户失败{}:{}!", phone, e.what());
                return std::shared_ptr<User>();
            }
            return res;
        }
        std::shared_ptr<User> select_by_id(const std::string &user_id)
        {
            std::shared_ptr<User> res;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<User> query;
                res.reset(_db->query_one<User>(query::user_id == user_id));
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过手机号查询用户失败{}:{}!", user_id, e.what());
                return std::shared_ptr<User>();
            }
            return res;
        }
        std::vector<User> select_multi_users(const std::vector<std::string> &id_list)
        {
            // select * from user where user_id in ('id1', 'id2', ...)
            if (id_list.empty())
                return std::vector<User>();
            std::vector<User> res;
            try
            {
                odb::transaction trans(_db->begin());
                typedef odb::query<User> query;
                typedef odb::result<User> result;
                std::stringstream ss;
                ss << "user_id in (";
                for (auto &e : id_list)
                    ss << "'" << e << "',";
                std::string condition = ss.str();
                condition.pop_back();
                condition += ")";
                result r(_db->query<User>(condition));
                for (result::iterator it = r.begin(); it != r.end(); it++)
                {
                    res.push_back(*it);
                }
                trans.commit();
            }
            catch (const std::exception &e)
            {
                LOG_ERROR("通过用户ID批量查询用户失败:{}！", e.what());
                return std::vector<User>();
            }
            return res;
        }

    private:
        std::shared_ptr<odb::core::database> _db;
    };
}