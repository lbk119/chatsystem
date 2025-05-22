#pragma once
#include <iostream>
#include <etcd/Client.hpp>
#include <etcd/KeepAlive.hpp>
#include <etcd/Response.hpp>
#include <etcd/Watcher.hpp>
#include <etcd/Value.hpp>
#include <functional>
// 服务注册客户端
class Registry
{
public:
    using ptr = std::shared_ptr<Registry>;
    Registry(const std::string &host)
        : _client(std::make_shared<etcd::Client>(host)),
          _keep_alive(_client->leasekeepalive(3).get()),
          _lease_id(_keep_alive->Lease())
    {
    }
    ~Registry()
    {
        _keep_alive->Cancel();
    }
    bool registry(const std::string &key, const std::string &val)
    {
        auto rsp = _client->put(key, val, _lease_id).get();
        if (rsp.is_ok() == false)
        {
            std::cout << "服务注册失败：" << rsp.error_message() << std::endl;
            return false;
        }
        std::cout << "服务注册成功：" << key << "-" << val << std::endl;
        return true;
    }

private:
    std::shared_ptr<etcd::Client> _client;
    std::shared_ptr<etcd::KeepAlive> _keep_alive;
    uint64_t _lease_id; // 注意租约id的类型必须是uint64_t
};
// 服务发现客户端
class Discovery
{
public:
    using ptr = std::shared_ptr<Discovery>;
    using NotifyCallback = function<void(std::string, std::string)>;
    Discovery(const std::string &host, const std::string &basedir,
              const NotifyCallback &put_cb, const NotifyCallback &del_cb)
        : _client(std::make_shared<etcd::Client>(host)),
          _put_cb(put_cb), _del_cb(del_cb)
    {
        // 先进行服务发现，获取当前已有的数据
        auto rsp = _client->ls(basedir).get();
        if (rsp.is_ok() == false)
        {
            std::cout << "获取服务信息失败：" << rsp.error_message() << std::endl;
        }
        int sz = rsp.keys().size();
        for (int i = 0; i < sz; i++)
        {
            if (_put_cb)
                _put_cb(rsp.key(i), rsp.value(i).as_string());
        }
        // 然后进行事件监控，监控数据的变化并调用回调函数进行处理
        _watcher = std::make_shared<etcd::Watcher>(*_client.get(), basedir,
                                                   std::bind(&Discovery::callback, this, std::placeholders::_1), true);
    }
    void wait()
    {
        _watcher->Wait();
    }
    ~Discovery()
    {
        _watcher->Cancel();
    }

private:
    void callback(const etcd::Response &rsp)
    {
        if (rsp.is_ok() == false)
        {
            std::cout << "收到一个错误的事件通知" << std::endl;
            return;
        }
        for (auto &ev : rsp.events())
        {
            if (ev.event_type() == etcd::Event::EventType::PUT)
            {
                if (_put_cb)
                    _put_cb(ev.kv().key(), ev.kv().as_string());
                cout << "新增服务" << ev.kv().key() << "-" << ev.kv().as_string() << std::endl;
            }
            else if (ev.event_type() == etcd::Event::EventType::DELETE_)
            {
                if (_del_cb)
                    _del_cb(ev.prev_kv().key(), ev.prev_kv().as_string());
                cout << "下线服务" << ev.prev_kv().key() << "-" << ev.prev_kv().as_string() << std::endl;
            }
        }
    }

private:
    NotifyCallback _put_cb;
    NotifyCallback _del_cb;
    std::shared_ptr<etcd::Client> _client;
    std::shared_ptr<etcd::Watcher> _watcher;
};