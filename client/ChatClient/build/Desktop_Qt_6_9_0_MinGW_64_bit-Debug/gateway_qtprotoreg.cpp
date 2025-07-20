
#include "gateway.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace lbk {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarClientAuthenticationReq(qRegisterProtobufType<ClientAuthenticationReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarClientAuthenticationRsp(qRegisterProtobufType<ClientAuthenticationRsp>);
static bool RegisterGatewayProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace lbk

