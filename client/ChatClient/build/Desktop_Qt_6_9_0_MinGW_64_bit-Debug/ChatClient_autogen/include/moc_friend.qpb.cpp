/****************************************************************************
** Meta object code from reading C++ file 'friend.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../friend.qpb.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'friend.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk16GetFriendListReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetFriendListReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetFriendListReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetFriendListReq",
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
    return QtMocHelpers::metaObjectData<GetFriendListReq, qt_meta_tag_ZN3lbk16GetFriendListReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetFriendListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetFriendListReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetFriendListReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetFriendListReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetFriendListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetFriendListReq *>(_o);
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
struct qt_meta_tag_ZN3lbk16GetFriendListRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetFriendListRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetFriendListRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetFriendListRsp",
        "requestId",
        "success",
        "errmsg",
        "friendListData",
        "QList<lbk::UserInfo>"
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
        // property 'friendListData'
        QtMocHelpers::PropertyData<QList<lbk::UserInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetFriendListRsp, qt_meta_tag_ZN3lbk16GetFriendListRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetFriendListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetFriendListRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetFriendListRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetFriendListRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetFriendListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetFriendListRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::UserInfo>*>(_v) = _t->friendList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFriendList(*reinterpret_cast<QList<lbk::UserInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15FriendRemoveReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendRemoveReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15FriendRemoveReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendRemoveReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "peerId"
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
        // property 'peerId'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendRemoveReq, qt_meta_tag_ZN3lbk15FriendRemoveReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendRemoveReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendRemoveReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendRemoveReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15FriendRemoveReqE_t>.metaTypes,
    nullptr
} };

void lbk::FriendRemoveReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendRemoveReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->peerId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setPeerId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15FriendRemoveRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendRemoveRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15FriendRemoveRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendRemoveRsp",
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
    return QtMocHelpers::metaObjectData<FriendRemoveRsp, qt_meta_tag_ZN3lbk15FriendRemoveRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendRemoveRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendRemoveRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendRemoveRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15FriendRemoveRspE_t>.metaTypes,
    nullptr
} };

void lbk::FriendRemoveRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendRemoveRsp *>(_o);
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
struct qt_meta_tag_ZN3lbk12FriendAddReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12FriendAddReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddReq",
        "requestId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId",
        "respondentId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'respondentId'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendAddReq, qt_meta_tag_ZN3lbk12FriendAddReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendAddReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12FriendAddReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12FriendAddReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12FriendAddReqE_t>.metaTypes,
    nullptr
} };

void lbk::FriendAddReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendAddReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->respondentId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setRespondentId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk12FriendAddRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12FriendAddRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddRsp",
        "requestId",
        "success",
        "errmsg",
        "notifyEventId"
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
        // property 'notifyEventId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendAddRsp, qt_meta_tag_ZN3lbk12FriendAddRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendAddRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12FriendAddRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12FriendAddRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12FriendAddRspE_t>.metaTypes,
    nullptr
} };

void lbk::FriendAddRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendAddRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->notifyEventId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setNotifyEventId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddProcessReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddProcessReq",
        "requestId",
        "notifyEventId",
        "agree",
        "applyUserId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'notifyEventId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'agree'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'applyUserId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendAddProcessReq, qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendAddProcessReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk19FriendAddProcessReqE_t>.metaTypes,
    nullptr
} };

void lbk::FriendAddProcessReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendAddProcessReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->notifyEventId(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->agree(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->applyUserId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setNotifyEventId(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setAgree(*reinterpret_cast<bool*>(_v)); break;
        case 3: _t->setApplyUserId(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddProcessRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddProcessRsp",
        "requestId",
        "success",
        "errmsg",
        "newSessionId",
        "hasNewSessionId"
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
        // property 'newSessionId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasNewSessionId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendAddProcessRsp, qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendAddProcessRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk19FriendAddProcessRspE_t>.metaTypes,
    nullptr
} };

void lbk::FriendAddProcessRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendAddProcessRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->newSessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasNewSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setNewSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetPendingFriendEventListReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetPendingFriendEventListReq",
        "requestId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetPendingFriendEventListReq, qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetPendingFriendEventListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetPendingFriendEventListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetPendingFriendEventListReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk11FriendEventE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendEvent::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk11FriendEventE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendEvent",
        "eventId",
        "sender_p",
        "lbk::UserInfo*",
        "hasSender"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'eventId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sender_p'
        QtMocHelpers::PropertyData<lbk::UserInfo*>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasSender'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendEvent, qt_meta_tag_ZN3lbk11FriendEventE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendEvent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk11FriendEventE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk11FriendEventE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk11FriendEventE_t>.metaTypes,
    nullptr
} };

void lbk::FriendEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendEvent *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->eventId(); break;
        case 1: *reinterpret_cast<lbk::UserInfo**>(_v) = _t->sender_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSender(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEventId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSender_p(*reinterpret_cast<lbk::UserInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetPendingFriendEventListRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetPendingFriendEventListRsp",
        "requestId",
        "success",
        "errmsg",
        "eventData",
        "QList<lbk::FriendEvent>"
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
        // property 'eventData'
        QtMocHelpers::PropertyData<QList<lbk::FriendEvent>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetPendingFriendEventListRsp, qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetPendingFriendEventListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk28GetPendingFriendEventListRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetPendingFriendEventListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetPendingFriendEventListRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::FriendEvent>*>(_v) = _t->event(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setEvent(*reinterpret_cast<QList<lbk::FriendEvent>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15FriendSearchReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendSearchReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15FriendSearchReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendSearchReq",
        "requestId",
        "searchKey",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'searchKey'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendSearchReq, qt_meta_tag_ZN3lbk15FriendSearchReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendSearchReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendSearchReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendSearchReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15FriendSearchReqE_t>.metaTypes,
    nullptr
} };

void lbk::FriendSearchReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendSearchReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->searchKey(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSearchKey(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15FriendSearchRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendSearchRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15FriendSearchRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendSearchRsp",
        "requestId",
        "success",
        "errmsg",
        "userInfoData",
        "QList<lbk::UserInfo>"
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
        // property 'userInfoData'
        QtMocHelpers::PropertyData<QList<lbk::UserInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FriendSearchRsp, qt_meta_tag_ZN3lbk15FriendSearchRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FriendSearchRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendSearchRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FriendSearchRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15FriendSearchRspE_t>.metaTypes,
    nullptr
} };

void lbk::FriendSearchRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FriendSearchRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::UserInfo>*>(_v) = _t->userInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserInfo(*reinterpret_cast<QList<lbk::UserInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionListReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionListReq",
        "requestId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetChatSessionListReq, qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetChatSessionListReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21GetChatSessionListReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetChatSessionListReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetChatSessionListReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionListRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionListRsp",
        "requestId",
        "success",
        "errmsg",
        "chatSessionInfoListData",
        "QList<lbk::ChatSessionInfo>"
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
        // property 'chatSessionInfoListData'
        QtMocHelpers::PropertyData<QList<lbk::ChatSessionInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetChatSessionListRsp, qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetChatSessionListRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk21GetChatSessionListRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetChatSessionListRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetChatSessionListRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::ChatSessionInfo>*>(_v) = _t->chatSessionInfoList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setChatSessionInfoList(*reinterpret_cast<QList<lbk::ChatSessionInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionCreateReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionCreateReq",
        "requestId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId",
        "chatSessionName",
        "memberIdList"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'chatSessionName'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'memberIdList'
        QtMocHelpers::PropertyData<QStringList>(7, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChatSessionCreateReq, qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ChatSessionCreateReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk20ChatSessionCreateReqE_t>.metaTypes,
    nullptr
} };

void lbk::ChatSessionCreateReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ChatSessionCreateReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->chatSessionName(); break;
        case 6: *reinterpret_cast<QStringList*>(_v) = _t->memberIdList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setChatSessionName(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setMemberIdList(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionCreateRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionCreateRsp",
        "requestId",
        "success",
        "errmsg",
        "chatSessionInfo_p",
        "lbk::ChatSessionInfo*",
        "hasChatSessionInfo"
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
        // property 'chatSessionInfo_p'
        QtMocHelpers::PropertyData<lbk::ChatSessionInfo*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasChatSessionInfo'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChatSessionCreateRsp, qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ChatSessionCreateRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk20ChatSessionCreateRspE_t>.metaTypes,
    nullptr
} };

void lbk::ChatSessionCreateRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ChatSessionCreateRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<lbk::ChatSessionInfo**>(_v) = _t->chatSessionInfo_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasChatSessionInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setChatSessionInfo_p(*reinterpret_cast<lbk::ChatSessionInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionMemberReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionMemberReq",
        "requestId",
        "sessionId",
        "hasSessionId",
        "userId",
        "hasUserId",
        "chatSessionId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetChatSessionMemberReq, qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetChatSessionMemberReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetChatSessionMemberReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetChatSessionMemberReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionMemberRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionMemberRsp",
        "requestId",
        "success",
        "errmsg",
        "memberInfoListData",
        "QList<lbk::UserInfo>"
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
        // property 'memberInfoListData'
        QtMocHelpers::PropertyData<QList<lbk::UserInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetChatSessionMemberRsp, qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetChatSessionMemberRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk23GetChatSessionMemberRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetChatSessionMemberRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetChatSessionMemberRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::UserInfo>*>(_v) = _t->memberInfoList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setMemberInfoList(*reinterpret_cast<QList<lbk::UserInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk33GetFriendListReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetFriendListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetFriendListReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetFriendListReq_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetFriendListReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE =
    lbk::GetFriendListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetFriendListReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetFriendListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetFriendListReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33GetFriendListRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetFriendListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetFriendListRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetFriendListRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "FriendListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FriendListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetFriendListRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE =
    lbk::GetFriendListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetFriendListRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetFriendListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetFriendListRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32FriendRemoveReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendRemoveReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendRemoveReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendRemoveReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "PeerIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::PeerIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32FriendRemoveReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE =
    lbk::FriendRemoveReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendRemoveReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendRemoveReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendRemoveReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendRemoveRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendRemoveRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE =
    lbk::FriendRemoveRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendRemoveRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendRemoveRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29FriendAddReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29FriendAddReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "RespondentIdProtoFieldNumber"
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
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::RespondentIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29FriendAddReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29FriendAddReq_QtProtobufNestedE =
    lbk::FriendAddReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29FriendAddReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29FriendAddReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29FriendAddReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29FriendAddReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendAddReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29FriendAddReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29FriendAddRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29FriendAddRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "NotifyEventIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29FriendAddRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE =
    lbk::FriendAddRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29FriendAddRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendAddRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29FriendAddRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddProcessReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddProcessReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "NotifyEventIdProtoFieldNumber",
        "AgreeProtoFieldNumber",
        "ApplyUserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::AgreeProtoFieldNumber },
            {    5, QtProtobufFieldEnum::ApplyUserIdProtoFieldNumber },
            {    6, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
            {    7, QtProtobufFieldEnum::UserIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE =
    lbk::FriendAddProcessReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendAddProcessReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk36FriendAddProcessReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendAddProcessRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendAddProcessRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "NewSessionIdProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::NewSessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE =
    lbk::FriendAddProcessRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendAddProcessRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk36FriendAddProcessRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetPendingFriendEventListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetPendingFriendEventListReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber"
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
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE =
    lbk::GetPendingFriendEventListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetPendingFriendEventListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk45GetPendingFriendEventListReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk28FriendEvent_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendEvent_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28FriendEvent_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendEvent_QtProtobufNested",
        "QtProtobufFieldEnum",
        "EventIdProtoFieldNumber",
        "SenderProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::EventIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SenderProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk28FriendEvent_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk28FriendEvent_QtProtobufNestedE =
    lbk::FriendEvent_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28FriendEvent_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk28FriendEvent_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk28FriendEvent_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk28FriendEvent_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk28FriendEvent_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendEvent_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk28FriendEvent_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk28FriendEvent_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk28FriendEvent_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetPendingFriendEventListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetPendingFriendEventListRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "EventProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::EventProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE =
    lbk::GetPendingFriendEventListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetPendingFriendEventListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk45GetPendingFriendEventListRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32FriendSearchReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendSearchReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendSearchReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendSearchReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SearchKeyProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::RequestIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::SearchKeyProtoFieldNumber },
            {    4, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::UserIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32FriendSearchReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE =
    lbk::FriendSearchReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendSearchReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendSearchReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendSearchReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32FriendSearchRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FriendSearchRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendSearchRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FriendSearchRsp_QtProtobufNested",
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
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32FriendSearchRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE =
    lbk::FriendSearchRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FriendSearchRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FriendSearchRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32FriendSearchRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionListReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber"
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
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE =
    lbk::GetChatSessionListReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetChatSessionListReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38GetChatSessionListReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionListRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "ChatSessionInfoListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::ChatSessionInfoListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE =
    lbk::GetChatSessionListRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetChatSessionListRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk38GetChatSessionListRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionCreateReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionCreateReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "ChatSessionNameProtoFieldNumber",
        "MemberIdListProtoFieldNumber"
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
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::ChatSessionNameProtoFieldNumber },
            {    6, QtProtobufFieldEnum::MemberIdListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE =
    lbk::ChatSessionCreateReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ChatSessionCreateReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk37ChatSessionCreateReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionCreateRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionCreateRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "ChatSessionInfoProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::ChatSessionInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE =
    lbk::ChatSessionCreateRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ChatSessionCreateRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk37ChatSessionCreateRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionMemberReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionMemberReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber"
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
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE =
    lbk::GetChatSessionMemberReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetChatSessionMemberReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk40GetChatSessionMemberReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetChatSessionMemberRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetChatSessionMemberRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "MemberInfoListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::MemberInfoListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE =
    lbk::GetChatSessionMemberRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetChatSessionMemberRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk40GetChatSessionMemberRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
