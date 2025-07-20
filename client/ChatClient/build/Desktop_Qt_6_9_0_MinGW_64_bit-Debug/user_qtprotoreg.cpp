
#include "user.qpb.h"

#include <QtProtobuf/qprotobufregistration.h>

namespace lbk {
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarUserRegisterReq(qRegisterProtobufType<UserRegisterReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarUserRegisterRsp(qRegisterProtobufType<UserRegisterRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarUserLoginReq(qRegisterProtobufType<UserLoginReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarUserLoginRsp(qRegisterProtobufType<UserLoginRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneVerifyCodeReq(qRegisterProtobufType<PhoneVerifyCodeReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneVerifyCodeRsp(qRegisterProtobufType<PhoneVerifyCodeRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneRegisterReq(qRegisterProtobufType<PhoneRegisterReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneRegisterRsp(qRegisterProtobufType<PhoneRegisterRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneLoginReq(qRegisterProtobufType<PhoneLoginReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarPhoneLoginRsp(qRegisterProtobufType<PhoneLoginRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetUserInfoReq(qRegisterProtobufType<GetUserInfoReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarGetUserInfoRsp(qRegisterProtobufType<GetUserInfoRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserAvatarReq(qRegisterProtobufType<SetUserAvatarReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserAvatarRsp(qRegisterProtobufType<SetUserAvatarRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserNicknameReq(qRegisterProtobufType<SetUserNicknameReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserNicknameRsp(qRegisterProtobufType<SetUserNicknameRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserDescriptionReq(qRegisterProtobufType<SetUserDescriptionReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserDescriptionRsp(qRegisterProtobufType<SetUserDescriptionRsp>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserPhoneNumberReq(qRegisterProtobufType<SetUserPhoneNumberReq>);
static QtProtobuf::ProtoTypeRegistrar ProtoTypeRegistrarSetUserPhoneNumberRsp(qRegisterProtobufType<SetUserPhoneNumberRsp>);
static bool RegisterUserProtobufTypes = [](){ qRegisterProtobufTypes(); return true; }();
} // namespace lbk

