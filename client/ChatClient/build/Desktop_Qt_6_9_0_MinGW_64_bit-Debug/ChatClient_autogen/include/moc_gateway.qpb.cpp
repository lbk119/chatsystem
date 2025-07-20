/****************************************************************************
** Meta object code from reading C++ file 'gateway.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../gateway.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gateway.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ClientAuthenticationReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ClientAuthenticationReq",
        "requestId",
        "sessionId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ClientAuthenticationReq, qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ClientAuthenticationReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk23ClientAuthenticationReqE_t>.metaTypes,
    nullptr
} };

void lbk::ClientAuthenticationReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ClientAuthenticationReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ClientAuthenticationRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ClientAuthenticationRsp",
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
    return QtMocHelpers::metaObjectData<ClientAuthenticationRsp, qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ClientAuthenticationRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk23ClientAuthenticationRspE_t>.metaTypes,
    nullptr
} };

void lbk::ClientAuthenticationRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ClientAuthenticationRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ClientAuthenticationReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ClientAuthenticationReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE =
    lbk::ClientAuthenticationReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ClientAuthenticationReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk40ClientAuthenticationReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ClientAuthenticationRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ClientAuthenticationRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE =
    lbk::ClientAuthenticationRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ClientAuthenticationRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk40ClientAuthenticationRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
