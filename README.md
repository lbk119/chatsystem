# 即时通讯系统项目服务器功能设计

## 一、整体架构

本项目采用微服务架构，将整体业务拆分为多个独立可扩展的子服务，每个子服务职责单一、接口清晰，通过网关统一对外暴露 API。各子服务可独立部署、伸缩和维护，极大提升了系统的弹性和可维护性。

### 微服务架构设计要点

- **服务拆分**：每个子服务独立负责一类核心业务，具备独立生命周期和部署能力。
- **独立部署与扩展**：各服务可单独扩容缩容，互不影响。
- **多语言与多数据源**：不同服务可根据业务特性选用合适的开发语言与存储方案。
- **轻量通信**：服务间通过 HTTP/REST、gRPC 等协议通信。
- **去中心化治理与数据管理**：每个服务独立管理自己的数据和开发部署流程。
- **弹性、容错与服务发现**：支持自动扩缩容和故障恢复，支持动态服务发现。
- **自动化部署与监控**：CI/CD 持续集成，统一日志与监控系统。

## 二、核心子服务设计

### 1. 网关服务（Gateway）

- **功能**：作为系统唯一对外入口，统一接收客户端请求。负责用户鉴权、请求路由转发、响应回传。
- **通信协议**：
  - **HTTP**：大部分业务接口采用请求-响应模式，基于 HTTP 协议实现。
  - **WebSocket**：用于实时推送类通知（如好友申请、新消息等）。
- **鉴权机制**：登录后为用户分配会话 ID，所有请求需携带该 ID，否则仅允许访问注册/登录/验证码相关接口。

### 2. 用户管理子服务

- **功能**：负责用户账号、资料相关操作。
- **接口**：
  1. 用户注册（昵称/手机号）
  2. 用户登录（密码/短信验证码）
  3. 获取短信验证码
  4. 获取、修改用户信息（头像、昵称、签名、手机号）

### 3. 好友管理子服务

- **功能**：管理用户好友关系及相关操作。
- **接口**：
  1. 获取好友列表
  2. 搜索用户/申请好友
  3. 获取/处理好友申请（同意/拒绝）
  4. 删除好友
  5. 聊天会话管理（获取/创建会话、获取群成员列表）

### 4. 文件管理子服务

- **功能**：负责文件（头像、聊天文件、图片、语音等）上传、下载与存储。
- **接口**：
  1. 单/多文件上传（后台转发存储）
  2. 单/多文件下载（支持头像批量下载、消息文件下载）

### 5. 消息管理子服务

- **功能**：负责消息内容的存储、检索与搜索。
- **接口**：
  1. 获取历史消息（最近N条、指定时间段、关键词搜索）
  2. 聊天消息搜索

### 6. 转发管理子服务

- **功能**：负责消息的目标组织与分发，将消息投递到正确的用户/会话，并管理消息队列。
- **接口**：
  1. 组织消息转发目标
  2. 消息入队，由文件/消息子服务消费存储

### 7. 语音转换子服务

- **功能**：对用户语音消息进行语音转文字处理，调用第三方语音云平台。
- **接口**：
  1. 语音识别与文字转换

## 三、核心业务流程

1. **注册与登录**：支持昵称/手机号注册登录，手机号方式需短信验证码校验。
2. **用户信息管理**：支持个人信息、头像、昵称、签名、手机号的获取与修改。
3. **好友系统**：支持好友申请、列表管理、群聊创建及群成员管理。
4. **消息系统**：支持单/群消息发送、历史消息检索、消息搜索、消息推送与通知。
5. **文件处理**：支持各类聊天文件、图片、语音的上传、存储与下载。
6. **语音转文字**：集成第三方语音识别服务，实现语音消息的文字转换。
7. **通知机制**：通过 WebSocket 向客户端主动推送申请、消息等动态变更。

## 四、技术选型

- **C++**：主业务逻辑开发语言
- **CMake**：项目构建工具
- **gflags**：参数与配置解析
- **gtest**：单元测试
- **spdlog**：日志系统
- **protobuf**：通信数据序列化
- **brpc**：高性能 RPC 框架
- **cpp-httplib / websocketpp**：HTTP/WebSocket 服务
- **redis**：用户登录会话存储
- **mysql + ODB**：关系型数据存储与 ORM
- **etcd**：服务注册与发现
- **rabbitMQ**：消息队列持久化与分发
- **elasticsearch**：消息内容文档存储与搜索
- **第三方云平台**：语音识别（百度）
- **docker**：自动化部署工具

## 五、数据库与消息队列

- **用户、好友、会话等结构化数据**：MySQL
- **用户会话管理**：Redis
- **消息/文件分发与持久化**：RabbitMQ + Elasticsearch + 文件存储

## 六、系统特性

- **高并发处理能力**
- **分布式服务治理**
- **可扩展、易维护**
- **安全认证与数据加密传输**
- **自动化部署与健康监控**

---
## 七、开发环境配置说明

### 基础工具安装

#### 编辑器安装
```bash
sudo apt-get install vim
```

#### 编译器安装
```bash
sudo apt-get install gcc g++
```

#### 调试器安装
```bash
sudo apt-get install gdb
```

#### 项目构建工具安装
```bash
sudo apt-get install make cmake
```

#### 文件传输工具安装
```bash
sudo apt-get install lrzsz
```

#### 版本管理工具安装
```bash
sudo apt-get install git
```

---

### 常用 C++ 框架安装

#### gflags 框架
```bash
sudo apt-get install libgflags-dev
```

#### gtest 框架
```bash
sudo apt-get install libgtest-dev
```

#### spdlog 框架
```bash
sudo apt-get install libspdlog-dev
```

#### brpc 框架
先安装依赖：
```bash
sudo apt-get install -y git g++ make libssl-dev libprotobuf-dev libprotoc-dev protobuf-compiler libleveldb-dev
```
安装 brpc：
```bash
git clone https://github.com/apache/brpc.git
cd brpc/
mkdir build && cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
cmake --build . -j6
make && sudo make install
```

#### etcd 框架
安装 etcd 服务端：
```bash
sudo apt-get install etcd
sudo systemctl start etcd
sudo systemctl enable etcd
```
安装 etcd-cpp-apiv3 客户端：
```bash
sudo apt-get install libboost-all-dev
sudo apt-get install protobuf-compiler-grpc
sudo apt-get install libgrpc-dev libgrpc++-dev
sudo apt-get install libcpprest-dev
git clone https://github.com/etcd-cpp-apiv3/etcd-cpp-apiv3.git
cd etcd-cpp-apiv3
mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr
make -j$(nproc) && sudo make install
```

#### elasticsearch 框架
安装 elasticsearch：
```bash
curl -s https://artifacts.elastic.co/GPG-KEY-elasticsearch | sudo gpg --no-default-keyring --keyring gnupg-ring:/etc/apt/trusted.gpg.d/icsearch.gpg --import
echo "deb https://artifacts.elastic.co/packages/7.x/apt stable main" | sudo tee /etc/apt/sources.list.d/elasticsearch.list
sudo apt update
sudo apt-get install elasticsearch=7.17.21
```
安装中文分词插件：
```bash
sudo /usr/share/elasticsearch/bin/elasticsearch-plugin install https://get.infini.cloud/elasticsearch/analysis-ik/7.17.21
```
修改 elasticsearch 配置监听地址，启用外部访问：
```
sudo vim /etc/elasticsearch/elasticsearch.yml
# 设置 network.host: 0.0.0.0
# 设置 http.port: 9200
```
启动并设置开机启动：
```bash
sudo systemctl restart elasticsearch
sudo systemctl enable elasticsearch
sudo systemctl status elasticsearch
```
安装 kibana（页面工具）：
```bash
sudo apt install kibana
sudo vim /etc/kibana/kibana.yml
# server.port: 5601
# server.host: "0.0.0.0"
# elasticsearch.hosts: ["http://localhost:9200"]
sudo systemctl start kibana
sudo systemctl enable kibana
sudo systemctl status kibana
```
通过 kibana 访问并测试索引创建：http://<服务器IP>:5601/

安装 elasticsearch 客户端 API：
```bash
sudo apt-get install libmicrohttpd-dev
git clone https://github.com/seznam/elasticlient.git
cd elasticlient
git submodule update --init --recursive
mkdir build && cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
make && sudo make install
```

---

#### cpp-httplib 框架
```bash
git clone https://github.com/yhirose/cpp-httplib.git
```

#### websocketpp 框架
查看是否已安装：
```bash
ls /usr/include/websocketpp/
```
如未安装：
```bash
sudo apt-get install libwebsocketpp-dev
```

---

#### Redis 安装与配置
安装 Redis：
```bash
sudo apt install redis -y
```
修改 /etc/redis/redis.conf，支持远程连接：
- 注释掉 `bind 127.0.0.1`
- 添加 `bind 0.0.0.0`
- 修改 `protected-mode yes` 为 `protected-mode no`
启动并设置开机启动：
```bash
sudo systemctl start redis-server
sudo systemctl enable redis-server
```
安装客户端 SDK：
```bash
sudo apt install libhiredis-dev
git clone https://github.com/sewenew/redis-plus-plus.git
cd redis-plus-plus
mkdir build && cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
make && sudo make install
```

---

#### ODB 安装
安装 build2（耗时较长）：
```bash
curl -sSfO https://download.build2.org/0.17.0/build2-install-0.17.0.sh
sh build2-install-0.17.0.sh
```
安装 odb-compiler 及相关库（gcc 版本需与实际环境一致）：
```bash
sudo apt-get install gcc-11-plugin-dev
mkdir odb-build && cd odb-build
bpkg create -d odb-gcc-N cc config.cxx=g++ config.cc.coptions=-O3 config.bin.rpath=/usr/lib config.install.root=/usr/ config.install.sudo=sudo
cd odb-gcc-N
bpkg build odb@https://pkg.cppget.org/1/beta
bpkg test odb
bpkg install odb
# 若 odb 未找到，添加路径
sudo echo 'export PATH=${PATH}:/usr/local/bin' >> ~/.bashrc
export PATH=${PATH}:/usr/local/bin
odb --version
```
安装 ODB 运行时库：
```bash
cd ..
bpkg create -d libodb-gcc-N cc config.cxx=g++ config.cc.coptions=-O3 config.install.root=/usr/ config.install.sudo=sudo
cd libodb-gcc-N
bpkg add https://pkg.cppget.org/1/beta
bpkg fetch
bpkg build libodb
bpkg build libodb-mysql
bpkg build libodb-boost
bpkg install --all --recursive
```

---

#### MySQL 安装与配置
安装 MySQL 及开发包：
```bash
sudo apt install mysql-server
sudo apt install -y libmysqlclient-dev
```
配置字符集与远程访问：
编辑 `/etc/my.cnf` 或 `/etc/mysql/my.cnf`，添加：
```
[client]
default-character-set=utf8
[mysql]
default-character-set=utf8
[mysqld]
character-set-server=utf8
bind-address = 0.0.0.0
```
修改 root 密码：
```bash
sudo cat /etc/mysql/debian.cnf
sudo mysql -u debian-sys-maint -p
# 输入上一步看到的密码
ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'xxxxxx';
FLUSH PRIVILEGES;
quit
```
重启并设置开机启动：
```bash
sudo systemctl restart mysql
sudo systemctl enable mysql
```

---

#### RabbitMQ 安装与配置
安装 RabbitMQ：
```bash
sudo apt install rabbitmq-server
sudo systemctl start rabbitmq-server
sudo systemctl status rabbitmq-server
```
创建管理员用户（远程登录及消息发布订阅）：
```bash
sudo rabbitmqctl add_user root 123456
sudo rabbitmqctl set_user_tags root administrator
sudo rabbitmqctl set_permissions -p / root "." "." ".*"
sudo rabbitmq-plugins enable rabbitmq_management
```
访问 Web 管理界面，默认端口为 15672。

安装客户端 SDK：
```bash
sudo apt-get install librabbitmq-dev
git clone https://github.com/CopernicaMarketingSoftware/AMQP-CPP.git
cd AMQP-CPP/
mkdir build && cd build
cmake -DCMAKE_INSTALL_PREFIX=/usr ..
make && sudo make install
sudo apt install libev-dev
```
如需更详细的接口说明、数据库结构设计或具体技术实现细节，可参见项目源码或联系开发团队。
