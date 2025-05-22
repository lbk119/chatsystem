#pragma once
#include <ev.h>
#include <amqpcpp.h>
#include <amqpcpp/libev.h>
#include <openssl/ssl.h>
#include <openssl/opensslv.h>
#include <iostream>
#include <functional>
#include "logger.hpp"

class MQClient
{
public:
    using ptr = std::shared_ptr<MQClient>;
    using MessageCallback = std::function<void(const char *, size_t)>;
    MQClient(const std::string &user, const std::string &password, const std::string &host)
    {
        // 1.实例化底层网络通信框架的IO事件监控句柄
        _loop = EV_DEFAULT;
        // 2.实例化LibEvHandler句柄，将AMQP框架与事件监控关联起来
        _handler = std::make_unique<AMQP::LibEvHandler>(_loop);
        // 3.实例化连接对象
        // amqp://root:2162627569@127.0.0.1:5672/
        std::string url = "amqp://" + user + ":" + password + "@" + host + "/";
        AMQP::Address address(url);
        _connection = std::make_unique<AMQP::TcpConnection>(_handler.get(), address);
        // 4.实例化信道对象
        _channel = std::make_unique<AMQP::TcpChannel>(_connection.get());
        // 5.启动底层网络通信框架，开启IO
        _loop_thread = std::thread([this]()
                                   { ev_run(_loop, 0); });
    }
    ~MQClient()
    {
        ev_async_init(&_async_watcher, watcher_callback);
        ev_async_start(_loop, &_async_watcher);
        ev_async_send(_loop, &_async_watcher);
        _loop_thread.join();
        _loop = nullptr;
    }
    void declareComponents(const std::string &exchange, const std::string &queue,
                           const std::string &routing_key = "routing_key", AMQP::ExchangeType exchange_type = AMQP::ExchangeType::direct)
    {
        // 声明交换机
        _channel->declareExchange(exchange, exchange_type)
            .onError([&exchange](const char *msg)
                     {
        LOG_ERROR("{}交换机创建失败：{}",exchange,msg);
        exit(1); })
            .onSuccess([&exchange]()
                       { LOG_INFO("{}交换机创建成功！", exchange); });
        // 声明队列
        _channel->declareQueue(queue)
            .onError([&queue](const char *msg)
                     {
        LOG_ERROR("{}队列创建失败：{}",queue,msg);
        exit(1); })
            .onSuccess([&queue]()
                       { LOG_INFO("{}队列创建成功！", queue); });
        // 6.绑定交换机和队列
        _channel->bindQueue(exchange, queue, routing_key)
            .onError([&exchange, &queue](const char *msg)
                     {
        LOG_ERROR("{} - {}绑定失败：{}",exchange,queue,msg);
        exit(1); })
            .onSuccess([&exchange, &queue]()
                       { LOG_INFO("{} - {}绑定成功！", exchange, queue); });
    }
    bool publish(const std::string &exchange, const std::string &msg, const std::string &routing_key = "routing_key")
    {
        LOG_DEBUG("向交换机 {}-{} 发布消息！", exchange, routing_key);
        bool ret = _channel->publish(exchange, routing_key, msg);
        if (ret == false)
        {
            LOG_ERROR("{} 发布消息失败：", exchange);
            return false;
        }
        return true;
    }
   void consume(const std::string &queue, const MessageCallback &cb)
    {
        LOG_DEBUG("开始订阅 {} 队列消息！", queue);
        _channel->consume(queue, "consume-tags")
            .onReceived([this, &cb](const AMQP::Message &message, uint32_t deliveryTag, bool redelivered)
                        {
            cb(message.body(),message.bodySize());
            _channel->ack(deliveryTag); })
            .onError([&queue](const char *message)
                     {
                    LOG_ERROR("订阅 {} 队列消息失败: {}", queue, message);
                    exit(1); });
    }

private:
    static void watcher_callback(struct ev_loop *loop, ev_async *watcher, int32_t revents)
    {
        ev_break(loop, EVBREAK_ALL);
    }

private:
    struct ev_async _async_watcher;
    struct ev_loop *_loop;
    std::unique_ptr<AMQP::LibEvHandler> _handler;
    std::unique_ptr<AMQP::TcpConnection> _connection;
    std::unique_ptr<AMQP::TcpChannel> _channel;
    std::thread _loop_thread;
};