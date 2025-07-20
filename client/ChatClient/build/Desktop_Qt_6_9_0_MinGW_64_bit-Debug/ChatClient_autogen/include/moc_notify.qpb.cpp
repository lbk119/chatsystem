/****************************************************************************
** Meta object code from reading C++ file 'notify.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../notify.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'notify.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendAddApply::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendAddApply",
        "userInfo_p",
        "lbk::UserInfo*",
        "hasUserInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'userInfo_p'
        QtMocHelpers::PropertyData<lbk::UserInfo*>(1, 0x80000000 | 2, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasUserInfo'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyFriendAddApply, qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NotifyFriendAddApply::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk20NotifyFriendAddApplyE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyFriendAddApply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyFriendAddApply *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<lbk::UserInfo**>(_v) = _t->userInfo_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasUserInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserInfo_p(*reinterpret_cast<lbk::UserInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendAddProcess::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendAddProcess",
        "agree",
        "userInfo_p",
        "lbk::UserInfo*",
        "hasUserInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'agree'
        QtMocHelpers::PropertyData<bool>(1, QMetaType::Bool, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'userInfo_p'
        QtMocHelpers::PropertyData<lbk::UserInfo*>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasUserInfo'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyFriendAddProcess, qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NotifyFriendAddProcess::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk22NotifyFriendAddProcessE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyFriendAddProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyFriendAddProcess *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<bool*>(_v) = _t->agree(); break;
        case 1: *reinterpret_cast<lbk::UserInfo**>(_v) = _t->userInfo_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAgree(*reinterpret_cast<bool*>(_v)); break;
        case 1: _t->setUserInfo_p(*reinterpret_cast<lbk::UserInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendRemove::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendRemove",
        "userId"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyFriendRemove, qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NotifyFriendRemove::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk18NotifyFriendRemoveE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyFriendRemove::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyFriendRemove *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->userId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserId(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyNewChatSession::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyNewChatSession",
        "chatSessionInfo_p",
        "lbk::ChatSessionInfo*",
        "hasChatSessionInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'chatSessionInfo_p'
        QtMocHelpers::PropertyData<lbk::ChatSessionInfo*>(1, 0x80000000 | 2, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasChatSessionInfo'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyNewChatSession, qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NotifyNewChatSession::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk20NotifyNewChatSessionE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyNewChatSession::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyNewChatSession *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<lbk::ChatSessionInfo**>(_v) = _t->chatSessionInfo_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasChatSessionInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setChatSessionInfo_p(*reinterpret_cast<lbk::ChatSessionInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16NotifyNewMessageE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyNewMessage::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16NotifyNewMessageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyNewMessage",
        "messageInfo_p",
        "lbk::MessageInfo*",
        "hasMessageInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'messageInfo_p'
        QtMocHelpers::PropertyData<lbk::MessageInfo*>(1, 0x80000000 | 2, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasMessageInfo'
        QtMocHelpers::PropertyData<bool>(3, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyNewMessage, qt_meta_tag_ZN3lbk16NotifyNewMessageE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::NotifyNewMessage::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16NotifyNewMessageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16NotifyNewMessageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16NotifyNewMessageE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyNewMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyNewMessage *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<lbk::MessageInfo**>(_v) = _t->messageInfo_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasMessageInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageInfo_p(*reinterpret_cast<lbk::MessageInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk13NotifyMessageE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyMessage::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk13NotifyMessageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyMessage",
        "notifyEventId",
        "hasNotifyEventId",
        "notifyType",
        "lbk::NotifyTypeGadget::NotifyType",
        "friendAddApply_p",
        "lbk::NotifyFriendAddApply*",
        "hasFriendAddApply",
        "friendProcessResult_p",
        "lbk::NotifyFriendAddProcess*",
        "hasFriendProcessResult",
        "friendRemove_p",
        "lbk::NotifyFriendRemove*",
        "hasFriendRemove",
        "newChatSessionInfo_p",
        "lbk::NotifyNewChatSession*",
        "hasNewChatSessionInfo",
        "newMessageInfo_p",
        "lbk::NotifyNewMessage*",
        "hasNewMessageInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'notifyEventId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasNotifyEventId'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'notifyType'
        QtMocHelpers::PropertyData<lbk::NotifyTypeGadget::NotifyType>(3, 0x80000000 | 4, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'friendAddApply_p'
        QtMocHelpers::PropertyData<lbk::NotifyFriendAddApply*>(5, 0x80000000 | 6, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFriendAddApply'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'friendProcessResult_p'
        QtMocHelpers::PropertyData<lbk::NotifyFriendAddProcess*>(8, 0x80000000 | 9, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFriendProcessResult'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'friendRemove_p'
        QtMocHelpers::PropertyData<lbk::NotifyFriendRemove*>(11, 0x80000000 | 12, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFriendRemove'
        QtMocHelpers::PropertyData<bool>(13, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'newChatSessionInfo_p'
        QtMocHelpers::PropertyData<lbk::NotifyNewChatSession*>(14, 0x80000000 | 15, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasNewChatSessionInfo'
        QtMocHelpers::PropertyData<bool>(16, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'newMessageInfo_p'
        QtMocHelpers::PropertyData<lbk::NotifyNewMessage*>(17, 0x80000000 | 18, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasNewMessageInfo'
        QtMocHelpers::PropertyData<bool>(19, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<NotifyMessage, qt_meta_tag_ZN3lbk13NotifyMessageE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk13NotifyMessageE[] = {
    QMetaObject::SuperData::link<lbk::NotifyTypeGadget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::NotifyMessage::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NotifyMessageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk13NotifyMessageE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk13NotifyMessageE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk13NotifyMessageE_t>.metaTypes,
    nullptr
} };

void lbk::NotifyMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<NotifyMessage *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->notifyEventId_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasNotifyEventId(); break;
        case 2: *reinterpret_cast<lbk::NotifyTypeGadget::NotifyType*>(_v) = _t->notifyType(); break;
        case 3: *reinterpret_cast<lbk::NotifyFriendAddApply**>(_v) = _t->friendAddApply_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasFriendAddApply(); break;
        case 5: *reinterpret_cast<lbk::NotifyFriendAddProcess**>(_v) = _t->friendProcessResult_p(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasFriendProcessResult(); break;
        case 7: *reinterpret_cast<lbk::NotifyFriendRemove**>(_v) = _t->friendRemove_p(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->hasFriendRemove(); break;
        case 9: *reinterpret_cast<lbk::NotifyNewChatSession**>(_v) = _t->newChatSessionInfo_p(); break;
        case 10: *reinterpret_cast<bool*>(_v) = _t->hasNewChatSessionInfo(); break;
        case 11: *reinterpret_cast<lbk::NotifyNewMessage**>(_v) = _t->newMessageInfo_p(); break;
        case 12: *reinterpret_cast<bool*>(_v) = _t->hasNewMessageInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNotifyEventId_p(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setNotifyType(*reinterpret_cast<lbk::NotifyTypeGadget::NotifyType*>(_v)); break;
        case 3: _t->setFriendAddApply_p(*reinterpret_cast<lbk::NotifyFriendAddApply**>(_v)); break;
        case 5: _t->setFriendProcessResult_p(*reinterpret_cast<lbk::NotifyFriendAddProcess**>(_v)); break;
        case 7: _t->setFriendRemove_p(*reinterpret_cast<lbk::NotifyFriendRemove**>(_v)); break;
        case 9: _t->setNewChatSessionInfo_p(*reinterpret_cast<lbk::NotifyNewChatSession**>(_v)); break;
        case 11: _t->setNewMessageInfo_p(*reinterpret_cast<lbk::NotifyNewMessage**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16NotifyTypeGadgetE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyTypeGadget::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16NotifyTypeGadgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyTypeGadget",
        "NotifyType",
        "FRIEND_ADD_APPLY_NOTIFY",
        "FRIEND_ADD_PROCESS_NOTIFY",
        "CHAT_SESSION_CREATE_NOTIFY",
        "CHAT_MESSAGE_NOTIFY",
        "FRIEND_REMOVE_NOTIFY"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'NotifyType'
        QtMocHelpers::EnumData<NotifyType>(1, 1, QMC::EnumIsScoped).add({
            {    2, NotifyType::FRIEND_ADD_APPLY_NOTIFY },
            {    3, NotifyType::FRIEND_ADD_PROCESS_NOTIFY },
            {    4, NotifyType::CHAT_SESSION_CREATE_NOTIFY },
            {    5, NotifyType::CHAT_MESSAGE_NOTIFY },
            {    6, NotifyType::FRIEND_REMOVE_NOTIFY },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk16NotifyTypeGadgetE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk16NotifyTypeGadgetE =
    lbk::NotifyTypeGadget::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16NotifyTypeGadgetE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk16NotifyTypeGadgetE =
    qt_staticMetaObjectContent_ZN3lbk16NotifyTypeGadgetE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk16NotifyTypeGadgetE =
    qt_staticMetaObjectContent_ZN3lbk16NotifyTypeGadgetE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyTypeGadget::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk16NotifyTypeGadgetE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk16NotifyTypeGadgetE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk16NotifyTypeGadgetE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendAddApply_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendAddApply_QtProtobufNested",
        "QtProtobufFieldEnum",
        "UserInfoProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::UserInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE =
    lbk::NotifyFriendAddApply_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyFriendAddApply_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk37NotifyFriendAddApply_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendAddProcess_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendAddProcess_QtProtobufNested",
        "QtProtobufFieldEnum",
        "AgreeProtoFieldNumber",
        "UserInfoProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::AgreeProtoFieldNumber },
            {    3, QtProtobufFieldEnum::UserInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE =
    lbk::NotifyFriendAddProcess_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyFriendAddProcess_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk39NotifyFriendAddProcess_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyFriendRemove_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyFriendRemove_QtProtobufNested",
        "QtProtobufFieldEnum",
        "UserIdProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::UserIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE =
    lbk::NotifyFriendRemove_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyFriendRemove_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk35NotifyFriendRemove_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyNewChatSession_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyNewChatSession_QtProtobufNested",
        "QtProtobufFieldEnum",
        "ChatSessionInfoProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::ChatSessionInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE =
    lbk::NotifyNewChatSession_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyNewChatSession_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk37NotifyNewChatSession_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33NotifyNewMessage_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyNewMessage_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33NotifyNewMessage_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyNewMessage_QtProtobufNested",
        "QtProtobufFieldEnum",
        "MessageInfoProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::MessageInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33NotifyNewMessage_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE =
    lbk::NotifyNewMessage_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33NotifyNewMessage_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyNewMessage_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33NotifyNewMessage_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk30NotifyMessage_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::NotifyMessage_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NotifyMessage_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::NotifyMessage_QtProtobufNested",
        "QtProtobufFieldEnum",
        "NotifyEventIdProtoFieldNumber",
        "NotifyTypeProtoFieldNumber",
        "FriendAddApplyProtoFieldNumber",
        "FriendProcessResultProtoFieldNumber",
        "FriendRemoveProtoFieldNumber",
        "NewChatSessionInfoProtoFieldNumber",
        "NewMessageInfoProtoFieldNumber",
        "Notify_remarksFields",
        "UninitializedField",
        "FriendAddApply",
        "FriendProcessResult",
        "FriendRemove",
        "NewChatSessionInfo",
        "NewMessageInfo"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::NotifyEventIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::NotifyTypeProtoFieldNumber },
            {    4, QtProtobufFieldEnum::FriendAddApplyProtoFieldNumber },
            {    5, QtProtobufFieldEnum::FriendProcessResultProtoFieldNumber },
            {    6, QtProtobufFieldEnum::FriendRemoveProtoFieldNumber },
            {    7, QtProtobufFieldEnum::NewChatSessionInfoProtoFieldNumber },
            {    8, QtProtobufFieldEnum::NewMessageInfoProtoFieldNumber },
        }),
        // enum 'Notify_remarksFields'
        QtMocHelpers::EnumData<Notify_remarksFields>(9, 9, QMC::EnumIsScoped).add({
            {   10, Notify_remarksFields::UninitializedField },
            {   11, Notify_remarksFields::FriendAddApply },
            {   12, Notify_remarksFields::FriendProcessResult },
            {   13, Notify_remarksFields::FriendRemove },
            {   14, Notify_remarksFields::NewChatSessionInfo },
            {   15, Notify_remarksFields::NewMessageInfo },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk30NotifyMessage_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk30NotifyMessage_QtProtobufNestedE =
    lbk::NotifyMessage_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk30NotifyMessage_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk30NotifyMessage_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NotifyMessage_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk30NotifyMessage_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk30NotifyMessage_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::NotifyMessage_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk30NotifyMessage_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk30NotifyMessage_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk30NotifyMessage_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
