/****************************************************************************
** Meta object code from reading C++ file 'user.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../user.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk15UserRegisterReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserRegisterReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15UserRegisterReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserRegisterReq",
        "requestId",
        "nickname",
        "password",
        "verifyCodeId",
        "verifyCode"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'nickname'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'password'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCodeId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCode'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserRegisterReq, qt_meta_tag_ZN3lbk15UserRegisterReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::UserRegisterReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15UserRegisterReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15UserRegisterReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15UserRegisterReqE_t>.metaTypes,
    nullptr
} };

void lbk::UserRegisterReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<UserRegisterReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->password(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->verifyCodeId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setPassword(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setVerifyCode(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15UserRegisterRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserRegisterRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15UserRegisterRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserRegisterRsp",
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
    return QtMocHelpers::metaObjectData<UserRegisterRsp, qt_meta_tag_ZN3lbk15UserRegisterRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::UserRegisterRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15UserRegisterRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15UserRegisterRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15UserRegisterRspE_t>.metaTypes,
    nullptr
} };

void lbk::UserRegisterRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<UserRegisterRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk12UserLoginReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserLoginReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12UserLoginReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserLoginReq",
        "requestId",
        "nickname",
        "password",
        "verifyCodeId",
        "verifyCode"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'nickname'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'password'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCodeId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCode'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserLoginReq, qt_meta_tag_ZN3lbk12UserLoginReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::UserLoginReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12UserLoginReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12UserLoginReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12UserLoginReqE_t>.metaTypes,
    nullptr
} };

void lbk::UserLoginReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<UserLoginReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->password(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->verifyCodeId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setPassword(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setVerifyCode(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk12UserLoginRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserLoginRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12UserLoginRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserLoginRsp",
        "requestId",
        "success",
        "errmsg",
        "loginSessionId"
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
        // property 'loginSessionId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserLoginRsp, qt_meta_tag_ZN3lbk12UserLoginRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::UserLoginRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12UserLoginRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12UserLoginRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12UserLoginRspE_t>.metaTypes,
    nullptr
} };

void lbk::UserLoginRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<UserLoginRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->loginSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setLoginSessionId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneVerifyCodeReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneVerifyCodeReq",
        "requestId",
        "phoneNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phoneNumber'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PhoneVerifyCodeReq, qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneVerifyCodeReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeReqE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneVerifyCodeReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneVerifyCodeReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->phoneNumber(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneVerifyCodeRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneVerifyCodeRsp",
        "requestId",
        "success",
        "errmsg",
        "verifyCodeId"
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
        // property 'verifyCodeId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PhoneVerifyCodeRsp, qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneVerifyCodeRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk18PhoneVerifyCodeRspE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneVerifyCodeRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneVerifyCodeRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->verifyCodeId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneRegisterReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneRegisterReq",
        "requestId",
        "phoneNumber",
        "verifyCodeId",
        "verifyCode"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phoneNumber'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCodeId'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCode'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PhoneRegisterReq, qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneRegisterReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16PhoneRegisterReqE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneRegisterReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneRegisterReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->phoneNumber(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->verifyCodeId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setVerifyCode(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneRegisterRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneRegisterRsp",
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
    return QtMocHelpers::metaObjectData<PhoneRegisterRsp, qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneRegisterRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16PhoneRegisterRspE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneRegisterRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneRegisterRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk13PhoneLoginReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneLoginReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk13PhoneLoginReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneLoginReq",
        "requestId",
        "phoneNumber",
        "verifyCodeId",
        "verifyCode"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phoneNumber'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCodeId'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'verifyCode'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PhoneLoginReq, qt_meta_tag_ZN3lbk13PhoneLoginReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneLoginReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13PhoneLoginReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13PhoneLoginReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk13PhoneLoginReqE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneLoginReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneLoginReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->phoneNumber(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->verifyCodeId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->verifyCode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setPhoneNumber(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setVerifyCode(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk13PhoneLoginRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneLoginRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk13PhoneLoginRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneLoginRsp",
        "requestId",
        "success",
        "errmsg",
        "loginSessionId"
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
        // property 'loginSessionId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PhoneLoginRsp, qt_meta_tag_ZN3lbk13PhoneLoginRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PhoneLoginRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13PhoneLoginRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13PhoneLoginRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk13PhoneLoginRspE_t>.metaTypes,
    nullptr
} };

void lbk::PhoneLoginRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PhoneLoginRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->loginSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setLoginSessionId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk14GetUserInfoReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetUserInfoReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk14GetUserInfoReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetUserInfoReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId"
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
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetUserInfoReq, qt_meta_tag_ZN3lbk14GetUserInfoReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetUserInfoReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14GetUserInfoReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14GetUserInfoReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk14GetUserInfoReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetUserInfoReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetUserInfoReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk14GetUserInfoRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetUserInfoRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk14GetUserInfoRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetUserInfoRsp",
        "requestId",
        "success",
        "errmsg",
        "userInfo_p",
        "lbk::UserInfo*",
        "hasUserInfo"
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
        // property 'userInfo_p'
        QtMocHelpers::PropertyData<lbk::UserInfo*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasUserInfo'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetUserInfoRsp, qt_meta_tag_ZN3lbk14GetUserInfoRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetUserInfoRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14GetUserInfoRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14GetUserInfoRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk14GetUserInfoRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetUserInfoRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetUserInfoRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<lbk::UserInfo**>(_v) = _t->userInfo_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserInfo_p(*reinterpret_cast<lbk::UserInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserAvatarReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserAvatarReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "avatar"
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
        // property 'avatar'
        QtMocHelpers::PropertyData<QByteArray>(6, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SetUserAvatarReq, qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserAvatarReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16SetUserAvatarReqE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserAvatarReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserAvatarReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QByteArray*>(_v) = _t->avatar(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setAvatar(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserAvatarRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserAvatarRsp",
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
    return QtMocHelpers::metaObjectData<SetUserAvatarRsp, qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserAvatarRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16SetUserAvatarRspE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserAvatarRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserAvatarRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserNicknameReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserNicknameReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "nickname"
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
        // property 'nickname'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SetUserNicknameReq, qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserNicknameReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk18SetUserNicknameReqE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserNicknameReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserNicknameReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->nickname(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setNickname(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserNicknameRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserNicknameRsp",
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
    return QtMocHelpers::metaObjectData<SetUserNicknameRsp, qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserNicknameRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk18SetUserNicknameRspE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserNicknameRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserNicknameRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserDescriptionReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserDescriptionReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "description"
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
        // property 'description'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SetUserDescriptionReq, qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserDescriptionReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21SetUserDescriptionReqE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserDescriptionReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserDescriptionReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->description(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setDescription(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserDescriptionRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserDescriptionRsp",
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
    return QtMocHelpers::metaObjectData<SetUserDescriptionRsp, qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserDescriptionRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21SetUserDescriptionRspE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserDescriptionRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserDescriptionRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserPhoneNumberReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserPhoneNumberReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "phoneNumber",
        "phoneVerifyCodeId",
        "phoneVerifyCode"
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
        // property 'phoneNumber'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phoneVerifyCodeId'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phoneVerifyCode'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SetUserPhoneNumberReq, qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserPhoneNumberReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberReqE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserPhoneNumberReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserPhoneNumberReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->phoneNumber(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->phoneVerifyCodeId(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->phoneVerifyCode(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setPhoneNumber(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setPhoneVerifyCodeId(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setPhoneVerifyCode(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserPhoneNumberRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserPhoneNumberRsp",
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
    return QtMocHelpers::metaObjectData<SetUserPhoneNumberRsp, qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SetUserPhoneNumberRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21SetUserPhoneNumberRspE_t>.metaTypes,
    nullptr
} };

void lbk::SetUserPhoneNumberRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SetUserPhoneNumberRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk32UserRegisterReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserRegisterReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32UserRegisterReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserRegisterReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "NicknameProtoFieldNumber",
        "PasswordProtoFieldNumber",
        "VerifyCodeIdProtoFieldNumber",
        "VerifyCodeProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::NicknameProtoFieldNumber },
            {    4, QtProtobufFieldEnum::PasswordProtoFieldNumber },
            {    5, QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber },
            {    6, QtProtobufFieldEnum::VerifyCodeProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32UserRegisterReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE =
    lbk::UserRegisterReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32UserRegisterReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::UserRegisterReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32UserRegisterReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32UserRegisterRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserRegisterRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32UserRegisterRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserRegisterRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32UserRegisterRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE =
    lbk::UserRegisterRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32UserRegisterRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::UserRegisterRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32UserRegisterRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29UserLoginReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserLoginReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29UserLoginReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserLoginReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "NicknameProtoFieldNumber",
        "PasswordProtoFieldNumber",
        "VerifyCodeIdProtoFieldNumber",
        "VerifyCodeProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::NicknameProtoFieldNumber },
            {    4, QtProtobufFieldEnum::PasswordProtoFieldNumber },
            {    5, QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber },
            {    6, QtProtobufFieldEnum::VerifyCodeProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29UserLoginReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29UserLoginReq_QtProtobufNestedE =
    lbk::UserLoginReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29UserLoginReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29UserLoginReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29UserLoginReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29UserLoginReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::UserLoginReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29UserLoginReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29UserLoginRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserLoginRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29UserLoginRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserLoginRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "LoginSessionIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::LoginSessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29UserLoginRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE =
    lbk::UserLoginRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29UserLoginRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::UserLoginRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29UserLoginRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneVerifyCodeReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneVerifyCodeReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "PhoneNumberProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::PhoneNumberProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE =
    lbk::PhoneVerifyCodeReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneVerifyCodeReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk35PhoneVerifyCodeReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneVerifyCodeRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneVerifyCodeRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "VerifyCodeIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE =
    lbk::PhoneVerifyCodeRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneVerifyCodeRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk35PhoneVerifyCodeRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneRegisterReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneRegisterReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "PhoneNumberProtoFieldNumber",
        "VerifyCodeIdProtoFieldNumber",
        "VerifyCodeProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::PhoneNumberProtoFieldNumber },
            {    4, QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::VerifyCodeProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE =
    lbk::PhoneRegisterReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneRegisterReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33PhoneRegisterReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneRegisterRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneRegisterRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE =
    lbk::PhoneRegisterRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneRegisterRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33PhoneRegisterRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk30PhoneLoginReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneLoginReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30PhoneLoginReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneLoginReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "PhoneNumberProtoFieldNumber",
        "VerifyCodeIdProtoFieldNumber",
        "VerifyCodeProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::PhoneNumberProtoFieldNumber },
            {    4, QtProtobufFieldEnum::VerifyCodeIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::VerifyCodeProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk30PhoneLoginReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE =
    lbk::PhoneLoginReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30PhoneLoginReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneLoginReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk30PhoneLoginReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PhoneLoginRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PhoneLoginRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "LoginSessionIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::LoginSessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE =
    lbk::PhoneLoginRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PhoneLoginRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk30PhoneLoginRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk31GetUserInfoReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetUserInfoReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31GetUserInfoReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetUserInfoReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
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
            {    3, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk31GetUserInfoReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE =
    lbk::GetUserInfoReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31GetUserInfoReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetUserInfoReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk31GetUserInfoReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetUserInfoRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetUserInfoRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "UserInfoProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::UserInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE =
    lbk::GetUserInfoRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetUserInfoRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk31GetUserInfoRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserAvatarReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserAvatarReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "AvatarProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::AvatarProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE =
    lbk::SetUserAvatarReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserAvatarReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33SetUserAvatarReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserAvatarRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserAvatarRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE =
    lbk::SetUserAvatarRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserAvatarRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33SetUserAvatarRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserNicknameReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserNicknameReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "NicknameProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::NicknameProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE =
    lbk::SetUserNicknameReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserNicknameReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk35SetUserNicknameReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserNicknameRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserNicknameRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE =
    lbk::SetUserNicknameRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserNicknameRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk35SetUserNicknameRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserDescriptionReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserDescriptionReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "DescriptionProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::DescriptionProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE =
    lbk::SetUserDescriptionReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserDescriptionReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserDescriptionReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserDescriptionRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserDescriptionRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE =
    lbk::SetUserDescriptionRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserDescriptionRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserDescriptionRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserPhoneNumberReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserPhoneNumberReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "PhoneNumberProtoFieldNumber",
        "PhoneVerifyCodeIdProtoFieldNumber",
        "PhoneVerifyCodeProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::PhoneNumberProtoFieldNumber },
            {    6, QtProtobufFieldEnum::PhoneVerifyCodeIdProtoFieldNumber },
            {    7, QtProtobufFieldEnum::PhoneVerifyCodeProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE =
    lbk::SetUserPhoneNumberReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserPhoneNumberReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserPhoneNumberReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SetUserPhoneNumberRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SetUserPhoneNumberRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE =
    lbk::SetUserPhoneNumberRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SetUserPhoneNumberRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38SetUserPhoneNumberRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
