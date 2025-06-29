#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>
#include "logger.hpp"

namespace lbk
{
    typedef websocketpp::server<websocketpp::config::asio> server_t;
    // 连接的类型： server_t::connection_ptr
    struct ClientInfo
    {
        ClientInfo()
        {
        }
        ClientInfo(const std::string &u, const std::string &s)
            : uid(u), ssid(s)
        {
        }
        std::string uid, ssid;
    };
    class Connection
    {
    public:
        using ptr = std::shared_ptr<Connection>;
        void insert(const server_t::connection_ptr &conn, const std::string &uid, const std::string &ssid)
        {
            std::unique_lock<std::mutex> lock(_mutex);
            _uid_connections[uid] = conn;
            // _conn_clientinfos[conn] = ClientInfo(uid, ssid);
            _conn_clientinfos.insert(make_pair(conn, ClientInfo(uid, ssid)));
            LOG_DEBUG("新增长连接用户信息：{}-{}-{}", (size_t)conn.get(), uid, ssid);
        }
        void remove(const server_t::connection_ptr &conn)
        {
            std::unique_lock<std::mutex> lock(_mutex);
            auto it = _conn_clientinfos.find(conn);
            if (it == _conn_clientinfos.end())
            {
                LOG_ERROR("删除-未找到长连接 {} 对应的客户端信息！", (size_t)conn.get());
                return;
            }
            _uid_connections.erase(it->second.uid);
            _conn_clientinfos.erase(it);
        }
        server_t::connection_ptr connection(const std::string &uid)
        {
            std::unique_lock<std::mutex> lock(_mutex);
            auto it = _uid_connections.find(uid);
            if (it == _uid_connections.end())
            {
                LOG_ERROR("未找到 {} 客户端的长连接！", uid);
                return server_t::connection_ptr();
            }
            return it->second;
        }
        bool clientInfo(const server_t::connection_ptr &conn, std::string &uid, std::string &ssid)
        {
            std::unique_lock<std::mutex> lock(_mutex);
            auto it = _conn_clientinfos.find(conn);
            if (it == _conn_clientinfos.end())
            {
                LOG_ERROR("未找到长连接 {} 对应的客户端信息！", (size_t)conn.get());
                return false;
            }
            uid = it->second.uid;
            ssid = it->second.ssid;
            return true;
        }

    private:
        std::mutex _mutex;
        std::unordered_map<std::string, server_t::connection_ptr> _uid_connections;
        std::unordered_map<server_t::connection_ptr, ClientInfo> _conn_clientinfos;
    };
}