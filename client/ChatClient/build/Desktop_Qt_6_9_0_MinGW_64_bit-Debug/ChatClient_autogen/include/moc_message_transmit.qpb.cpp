/****************************************************************************
** Meta object code from reading C++ file 'message_transmit.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../message_transmit.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_transmit.qpb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN3lbk13NewMessageReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NewMessageReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk13NewMessageReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NewMessageReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "chatSessionId",
        "message_p",
        "lbk::MessageContent*",
        "hasMessage"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'message_p'
        QtMocHelpers::PropertyData<lbk::MessageContent*>(7, 0x80000000 | 8, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasMessage'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NewMessageReq, qt_meta_tag_ZN3lbk13NewMessageReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NewMessageReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NewMessageReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NewMessageReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk13NewMessageReqE_t>.metaTypes,
    nullptr
} };

void lbk::NewMessageReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NewMessageReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 6: *reinterpret_cast<lbk::MessageContent**>(_v) = _t->message_p(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasMessage(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setMessage_p(*reinterpret_cast<lbk::MessageContent**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk13NewMessageRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NewMessageRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk13NewMessageRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NewMessageRsp",
        "requestId",
        "success",
        "errmsg"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'success'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'errmsg'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NewMessageRsp, qt_meta_tag_ZN3lbk13NewMessageRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NewMessageRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NewMessageRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NewMessageRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk13NewMessageRspE_t>.metaTypes,
    nullptr
} };

void lbk::NewMessageRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NewMessageRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetTransmitTargetRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetTransmitTargetRsp",
        "requestId",
        "success",
        "errmsg",
        "message_p",
        "lbk::MessageInfo*",
        "hasMessage",
        "targetIdList"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'success'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'errmsg'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'message_p'
        QtMocHelpers::PropertyData<lbk::MessageInfo*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasMessage'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'targetIdList'
        QtMocHelpers::PropertyData<QStringList>(7, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetTransmitTargetRsp, qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetTransmitTargetRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk20GetTransmitTargetRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetTransmitTargetRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetTransmitTargetRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<lbk::MessageInfo**>(_v) = _t->message_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasMessage(); break;
        case 5: *reinterpret_cast<QStringList*>(_v) = _t->targetIdList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setMessage_p(*reinterpret_cast<lbk::MessageInfo**>(_v)); break;
        case 5: _t->setTargetIdList(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk30NewMessageReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NewMessageReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NewMessageReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NewMessageReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "MessageProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
            {    6, QtProtobufFieldEnum::MessageProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk30NewMessageReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk30NewMessageReq_QtProtobufNestedE =
    lbk::NewMessageReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NewMessageReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NewMessageReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk30NewMessageReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NewMessageReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NewMessageReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk30NewMessageReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk30NewMessageRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NewMessageRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NewMessageRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NewMessageRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SuccessProtoFieldNumber },
            {    4, QtProtobufFieldEnum::ErrmsgProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk30NewMessageRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE =
    lbk::NewMessageRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NewMessageRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NewMessageRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk30NewMessageRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetTransmitTargetRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetTransmitTargetRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "MessageProtoFieldNumber",
        "TargetIdListProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SuccessProtoFieldNumber },
            {    4, QtProtobufFieldEnum::ErrmsgProtoFieldNumber },
            {    5, QtProtobufFieldEnum::MessageProtoFieldNumber },
            {    6, QtProtobufFieldEnum::TargetIdListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE =
    lbk::GetTransmitTargetRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetTransmitTargetRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk37GetTransmitTargetRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
