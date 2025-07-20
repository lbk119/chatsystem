
#include "file.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace lbk {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetSingleFileReq(qRegisterProtobufType<GetSingleFileReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetSingleFileRsp(qRegisterProtobufType<GetSingleFileRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetMultiFileReq(qRegisterProtobufType<GetMultiFileReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetMultiFileRsp(qRegisterProtobufType<GetMultiFileRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPutSingleFileReq(qRegisterProtobufType<PutSingleFileReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPutSingleFileRsp(qRegisterProtobufType<PutSingleFileRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPutMultiFileReq(qRegisterProtobufType<PutMultiFileReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPutMultiFileRsp(qRegisterProtobufType<PutMultiFileRsp>);
static bool RegisterFileProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace lbk

