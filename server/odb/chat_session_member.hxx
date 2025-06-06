// 聊天会话成员表映射对象
#pragma once
#include <iostream>
#include <odb/core.hxx>
#include <string>

namespace lbk
{
#pragma db object table("chat_session_member")
    class ChatSessionMember
    {
    public:
        ChatSessionMember() {}
        ChatSessionMember(const std::string &ssid, const std::string &uid)
            : _session_id(ssid), _user_id(uid)
        {
        }
        std::string session_id() const
        {
            return _session_id;
        }
        void session_id(const std::string &ssid)
        {
            _session_id = ssid;
        }

        std::string user_id() const
        {
            return _user_id;
        }
        void user_id(const std::string &uid)
        {
            _user_id = uid;
        }

    private:
        friend class odb::access;
#pragma db id auto
        unsigned long _id;
#pragma db type("varchar(64)") index
        std::string _session_id;
#pragma db type("varchar(64)")
        std::string _user_id;
    };
}