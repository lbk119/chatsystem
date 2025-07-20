/****************************************************************************
** Meta object code from reading C++ file 'message_storage.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../message_storage.qpb.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'message_storage.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetHistoryMsgReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetHistoryMsgReq",
        "requestId",
        "chatSessionId",
        "startTime",
        "QtProtobuf::int64",
        "overTime",
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
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'startTime'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(3, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'overTime'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(5, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(6, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(8, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetHistoryMsgReq, qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk16GetHistoryMsgReqE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::GetHistoryMsgReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk16GetHistoryMsgReqE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetHistoryMsgReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetHistoryMsgReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetHistoryMsgReq *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->startTime(); break;
        case 3: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->overTime(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setStartTime(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 3: _t->setOverTime(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 4: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 6: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetHistoryMsgRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetHistoryMsgRsp",
        "requestId",
        "success",
        "errmsg",
        "msgListData",
        "QList<lbk::MessageInfo>"
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
        // property 'msgListData'
        QtMocHelpers::PropertyData<QList<lbk::MessageInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetHistoryMsgRsp, qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetHistoryMsgRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetHistoryMsgRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetHistoryMsgRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetHistoryMsgRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::MessageInfo>*>(_v) = _t->msgList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast<QList<lbk::MessageInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetRecentMsgReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetRecentMsgReq",
        "requestId",
        "chatSessionId",
        "msgCount",
        "QtProtobuf::int64",
        "curTime",
        "hasCurTime",
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
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'msgCount'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(3, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'curTime'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(5, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
        // property 'hasCurTime'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(9, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetRecentMsgReq, qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk15GetRecentMsgReqE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::GetRecentMsgReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk15GetRecentMsgReqE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15GetRecentMsgReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetRecentMsgReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetRecentMsgReq *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->msgCount(); break;
        case 3: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->curTime_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasCurTime(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 7: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setMsgCount(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 3: _t->setCurTime_p(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 5: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 7: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetRecentMsgRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetRecentMsgRsp",
        "requestId",
        "success",
        "errmsg",
        "msgListData",
        "QList<lbk::MessageInfo>"
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
        // property 'msgListData'
        QtMocHelpers::PropertyData<QList<lbk::MessageInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetRecentMsgRsp, qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetRecentMsgRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15GetRecentMsgRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetRecentMsgRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetRecentMsgRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::MessageInfo>*>(_v) = _t->msgList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast<QList<lbk::MessageInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk12MsgSearchReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MsgSearchReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12MsgSearchReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MsgSearchReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "chatSessionId",
        "searchKey"
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
        // property 'searchKey'
        QtMocHelpers::PropertyData<QString>(7, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MsgSearchReq, qt_meta_tag_ZN3lbk12MsgSearchReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::MsgSearchReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12MsgSearchReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12MsgSearchReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12MsgSearchReqE_t>.metaTypes,
    nullptr
} };

void lbk::MsgSearchReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<MsgSearchReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 6: *reinterpret_cast<QString*>(_v) = _t->searchKey(); break;
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
        case 6: _t->setSearchKey(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk12MsgSearchRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MsgSearchRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk12MsgSearchRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MsgSearchRsp",
        "requestId",
        "success",
        "errmsg",
        "msgListData",
        "QList<lbk::MessageInfo>"
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
        // property 'msgListData'
        QtMocHelpers::PropertyData<QList<lbk::MessageInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MsgSearchRsp, qt_meta_tag_ZN3lbk12MsgSearchRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::MsgSearchRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12MsgSearchRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk12MsgSearchRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk12MsgSearchRspE_t>.metaTypes,
    nullptr
} };

void lbk::MsgSearchRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<MsgSearchRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::MessageInfo>*>(_v) = _t->msgList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setMsgList(*reinterpret_cast<QList<lbk::MessageInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetHistoryMsgReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetHistoryMsgReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "StartTimeProtoFieldNumber",
        "OverTimeProtoFieldNumber",
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
            {    3, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::StartTimeProtoFieldNumber },
            {    5, QtProtobufFieldEnum::OverTimeProtoFieldNumber },
            {    6, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    7, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE =
    lbk::GetHistoryMsgReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetHistoryMsgReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetHistoryMsgReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetHistoryMsgRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetHistoryMsgRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "MsgListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::MsgListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE =
    lbk::GetHistoryMsgRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetHistoryMsgRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetHistoryMsgRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetRecentMsgReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetRecentMsgReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "MsgCountProtoFieldNumber",
        "CurTimeProtoFieldNumber",
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
            {    3, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::MsgCountProtoFieldNumber },
            {    5, QtProtobufFieldEnum::CurTimeProtoFieldNumber },
            {    6, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    7, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE =
    lbk::GetRecentMsgReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetRecentMsgReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32GetRecentMsgReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetRecentMsgRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetRecentMsgRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "MsgListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::MsgListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE =
    lbk::GetRecentMsgRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetRecentMsgRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32GetRecentMsgRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29MsgSearchReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MsgSearchReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29MsgSearchReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MsgSearchReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "SearchKeyProtoFieldNumber"
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
            {    6, QtProtobufFieldEnum::SearchKeyProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29MsgSearchReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE =
    lbk::MsgSearchReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29MsgSearchReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::MsgSearchReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29MsgSearchReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk29MsgSearchRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MsgSearchRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29MsgSearchRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MsgSearchRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "MsgListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::MsgListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk29MsgSearchRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE =
    lbk::MsgSearchRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk29MsgSearchRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::MsgSearchRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk29MsgSearchRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
