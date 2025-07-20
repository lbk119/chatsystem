
#include "message_transmit.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace lbk {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarNewMessageReq(qRegisterProtobufType<NewMessageReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarNewMessageRsp(qRegisterProtobufType<NewMessageRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetTransmitTargetRsp(qRegisterProtobufType<GetTransmitTargetRsp>);
static bool RegisterMessage_transmitProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace lbk

