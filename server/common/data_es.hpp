#include "icsearch.hpp"
#include "user.hxx"

namespace lbk
{
    class ESClientFactory
    {
    public:
        static std::shared_ptr<elasticlient::Client> create(const std::vector<std::string> &host_list)
        {
            return std::make_shared<elasticlient::Client>(host_list);
        }
    };
    class ESUser
    {
    public:
        using ptr = std::shared_ptr<ESUser>;
        ESUser(const std::shared_ptr<elasticlient::Client> &es_client)
            : _es_client(es_client) {}
        bool createIndex()
        {
            bool ret = ESIndex(_es_client, "user")
                           .append("user_id", "keyword", "standard", true)
                           .append("nickname")
                           .append("phone", "keyword", "standard", true)
                           .append("description", "text", "standard", false)
                           .append("avatar_id", "keyword", "standard", false)
                           .create();
            if (ret == false)
            {
                LOG_INFO("用户信息索引创建失败!");
                return false;
            }
            LOG_INFO("用户信息索引创建成功!");
            return true;
        }
        bool appendData(const std::string &uid, const std::string &phone, const std::string &nickname,
                        const std::string &description, const std::string &avatar_id)
        {
            bool ret = ESInsert(_es_client, "user")
                           .append("user_id", uid)
                           .append("phone", phone)
                           .append("nickname", nickname)
                           .append("description", description)
                           .append("avatar_id", avatar_id)
                           .insert(uid);
            if (ret == false)
            {
                LOG_ERROR("用户数据插入/更新失败!");
                return false;
            }
            LOG_INFO("用户数据新增/更新成功!");
            return true;
        }
        std::vector<User> search(const std::string &key, const std::vector<std::string> &uid_list)
        {
            std::vector<User> ret;
            auto json_user = ESSearch(_es_client, "user")
                                 .append_should_match("user_id.keyword", key)
                                 .append_should_match("phone.keyword", key)
                                 .append_should_match("nickname", key)
                                 .append_must_not_terms("user_id.keyword", uid_list)
                                 .search();
            if (json_user.isArray() == false)
            {
                LOG_DEBUG("检索结果不是数组类型！");
                return std::vector<User>();
            }
            LOG_DEBUG("检索结果的条目数量为{}", json_user.size());
            for(int i=0;i<json_user.size();i++)
            {
                User user;
                user.user_id(json_user[i]["_source"]["user_id"].asString());
                user.phone(json_user[i]["_source"]["phone"].asString());
                user.nickname(json_user[i]["_source"]["nickname"].asString());
                user.avatar_id(json_user[i]["_source"]["avatar_id"].asString());
                user.description(json_user[i]["_source"]["description"].asString());
                ret.push_back(user);
            }
            return ret;
        }

    private:
        std::shared_ptr<elasticlient::Client> _es_client;
    };
}