
#include "base.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace lbk {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarUserInfo(qRegisterProtobufType<UserInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarChatSessionInfo(qRegisterProtobufType<ChatSessionInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarStringMessageInfo(qRegisterProtobufType<StringMessageInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarImageMessageInfo(qRegisterProtobufType<ImageMessageInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarFileMessageInfo(qRegisterProtobufType<FileMessageInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSpeechMessageInfo(qRegisterProtobufType<SpeechMessageInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarMessageContent(qRegisterProtobufType<MessageContent>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarMessageInfo(qRegisterProtobufType<MessageInfo>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarMessage(qRegisterProtobufType<Message>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarFileDownloadData(qRegisterProtobufType<FileDownloadData>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarFileUploadData(qRegisterProtobufType<FileUploadData>);
static bool RegisterBaseProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace lbk

