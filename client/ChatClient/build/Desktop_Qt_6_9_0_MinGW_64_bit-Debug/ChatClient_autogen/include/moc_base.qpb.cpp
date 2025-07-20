/****************************************************************************
** Meta object code from reading C++ file 'base.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../base.qpb.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'base.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk8UserInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk8UserInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserInfo",
        "userId",
        "nickname",
        "description",
        "phone",
        "avatar"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'nickname'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'description'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'phone'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'avatar'
        QtMocHelpers::PropertyData<QByteArray>(5, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<UserInfo, qt_meta_tag_ZN3lbk8UserInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::UserInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk8UserInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk8UserInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk8UserInfoE_t>.metaTypes,
    nullptr
} };

void lbk::UserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<UserInfo *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->userId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->nickname(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->phone(); break;
        case 4: *reinterpret_cast<QByteArray*>(_v) = _t->avatar(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setNickname(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setPhone(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setAvatar(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15ChatSessionInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15ChatSessionInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionInfo",
        "singleChatFriendId",
        "hasSingleChatFriendId",
        "chatSessionId",
        "chatSessionName",
        "prevMessage_p",
        "lbk::MessageInfo*",
        "hasPrevMessage",
        "avatar",
        "hasAvatar"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'singleChatFriendId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSingleChatFriendId'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'chatSessionName'
        QtMocHelpers::PropertyData<QString>(4, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'prevMessage_p'
        QtMocHelpers::PropertyData<lbk::MessageInfo*>(5, 0x80000000 | 6, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasPrevMessage'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'avatar'
        QtMocHelpers::PropertyData<QByteArray>(8, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasAvatar'
        QtMocHelpers::PropertyData<bool>(9, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChatSessionInfo, qt_meta_tag_ZN3lbk15ChatSessionInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ChatSessionInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15ChatSessionInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15ChatSessionInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15ChatSessionInfoE_t>.metaTypes,
    nullptr
} };

void lbk::ChatSessionInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ChatSessionInfo *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->singleChatFriendId_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasSingleChatFriendId(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->chatSessionName(); break;
        case 4: *reinterpret_cast<lbk::MessageInfo**>(_v) = _t->prevMessage_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasPrevMessage(); break;
        case 6: *reinterpret_cast<QByteArray*>(_v) = _t->avatar_p(); break;
        case 7: *reinterpret_cast<bool*>(_v) = _t->hasAvatar(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSingleChatFriendId_p(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setChatSessionName(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setPrevMessage_p(*reinterpret_cast<lbk::MessageInfo**>(_v)); break;
        case 6: _t->setAvatar_p(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk17StringMessageInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::StringMessageInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk17StringMessageInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::StringMessageInfo",
        "content"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'content'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<StringMessageInfo, qt_meta_tag_ZN3lbk17StringMessageInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::StringMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk17StringMessageInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk17StringMessageInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk17StringMessageInfoE_t>.metaTypes,
    nullptr
} };

void lbk::StringMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<StringMessageInfo *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->content(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setContent(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16ImageMessageInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ImageMessageInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16ImageMessageInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ImageMessageInfo",
        "fileId",
        "hasFileId",
        "imageContent",
        "hasImageContent"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasFileId'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'imageContent'
        QtMocHelpers::PropertyData<QByteArray>(3, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasImageContent'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ImageMessageInfo, qt_meta_tag_ZN3lbk16ImageMessageInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::ImageMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16ImageMessageInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16ImageMessageInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16ImageMessageInfoE_t>.metaTypes,
    nullptr
} };

void lbk::ImageMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<ImageMessageInfo *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast<QByteArray*>(_v) = _t->imageContent_p(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasImageContent(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setImageContent_p(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15FileMessageInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileMessageInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15FileMessageInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileMessageInfo",
        "fileId",
        "hasFileId",
        "fileSize",
        "QtProtobuf::int64",
        "fileName",
        "fileContents",
        "hasFileContents"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasFileId'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'fileSize'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(3, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'fileContents'
        QtMocHelpers::PropertyData<QByteArray>(6, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasFileContents'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileMessageInfo, qt_meta_tag_ZN3lbk15FileMessageInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk15FileMessageInfoE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::FileMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FileMessageInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15FileMessageInfoE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk15FileMessageInfoE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15FileMessageInfoE_t>.metaTypes,
    nullptr
} };

void lbk::FileMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FileMessageInfo *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->fileSize(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 4: *reinterpret_cast<QByteArray*>(_v) = _t->fileContents_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasFileContents(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setFileSize(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 3: _t->setFileName(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setFileContents_p(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SpeechMessageInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SpeechMessageInfo",
        "fileId",
        "hasFileId",
        "fileContents",
        "hasFileContents"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasFileId'
        QtMocHelpers::PropertyData<bool>(2, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'fileContents'
        QtMocHelpers::PropertyData<QByteArray>(3, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasFileContents'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SpeechMessageInfo, qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::SpeechMessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk17SpeechMessageInfoE_t>.metaTypes,
    nullptr
} };

void lbk::SpeechMessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<SpeechMessageInfo *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileId_p(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->hasFileId(); break;
        case 2: *reinterpret_cast<QByteArray*>(_v) = _t->fileContents_p(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasFileContents(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId_p(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setFileContents_p(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk14MessageContentE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MessageContent::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk14MessageContentE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MessageContent",
        "messageType",
        "lbk::MessageTypeGadget::MessageType",
        "stringMessage_p",
        "lbk::StringMessageInfo*",
        "hasStringMessage",
        "fileMessage_p",
        "lbk::FileMessageInfo*",
        "hasFileMessage",
        "speechMessage_p",
        "lbk::SpeechMessageInfo*",
        "hasSpeechMessage",
        "imageMessage_p",
        "lbk::ImageMessageInfo*",
        "hasImageMessage"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'messageType'
        QtMocHelpers::PropertyData<lbk::MessageTypeGadget::MessageType>(1, 0x80000000 | 2, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'stringMessage_p'
        QtMocHelpers::PropertyData<lbk::StringMessageInfo*>(3, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasStringMessage'
        QtMocHelpers::PropertyData<bool>(5, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'fileMessage_p'
        QtMocHelpers::PropertyData<lbk::FileMessageInfo*>(6, 0x80000000 | 7, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFileMessage'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'speechMessage_p'
        QtMocHelpers::PropertyData<lbk::SpeechMessageInfo*>(9, 0x80000000 | 10, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasSpeechMessage'
        QtMocHelpers::PropertyData<bool>(11, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'imageMessage_p'
        QtMocHelpers::PropertyData<lbk::ImageMessageInfo*>(12, 0x80000000 | 13, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasImageMessage'
        QtMocHelpers::PropertyData<bool>(14, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MessageContent, qt_meta_tag_ZN3lbk14MessageContentE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk14MessageContentE[] = {
    QMetaObject::SuperData::link<lbk::MessageTypeGadget::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::MessageContent::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14MessageContentE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14MessageContentE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk14MessageContentE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk14MessageContentE_t>.metaTypes,
    nullptr
} };

void lbk::MessageContent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<MessageContent *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<lbk::MessageTypeGadget::MessageType*>(_v) = _t->messageType(); break;
        case 1: *reinterpret_cast<lbk::StringMessageInfo**>(_v) = _t->stringMessage_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasStringMessage(); break;
        case 3: *reinterpret_cast<lbk::FileMessageInfo**>(_v) = _t->fileMessage_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasFileMessage(); break;
        case 5: *reinterpret_cast<lbk::SpeechMessageInfo**>(_v) = _t->speechMessage_p(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasSpeechMessage(); break;
        case 7: *reinterpret_cast<lbk::ImageMessageInfo**>(_v) = _t->imageMessage_p(); break;
        case 8: *reinterpret_cast<bool*>(_v) = _t->hasImageMessage(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageType(*reinterpret_cast<lbk::MessageTypeGadget::MessageType*>(_v)); break;
        case 1: _t->setStringMessage_p(*reinterpret_cast<lbk::StringMessageInfo**>(_v)); break;
        case 3: _t->setFileMessage_p(*reinterpret_cast<lbk::FileMessageInfo**>(_v)); break;
        case 5: _t->setSpeechMessage_p(*reinterpret_cast<lbk::SpeechMessageInfo**>(_v)); break;
        case 7: _t->setImageMessage_p(*reinterpret_cast<lbk::ImageMessageInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk11MessageInfoE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MessageInfo::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk11MessageInfoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MessageInfo",
        "messageId",
        "chatSessionId",
        "timestamp",
        "QtProtobuf::int64",
        "sender_p",
        "lbk::UserInfo*",
        "hasSender",
        "message_p",
        "lbk::MessageContent*",
        "hasMessage"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'messageId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'chatSessionId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'timestamp'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(3, 0x80000000 | 4, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'sender_p'
        QtMocHelpers::PropertyData<lbk::UserInfo*>(5, 0x80000000 | 6, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasSender'
        QtMocHelpers::PropertyData<bool>(7, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'message_p'
        QtMocHelpers::PropertyData<lbk::MessageContent*>(8, 0x80000000 | 9, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasMessage'
        QtMocHelpers::PropertyData<bool>(10, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MessageInfo, qt_meta_tag_ZN3lbk11MessageInfoE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk11MessageInfoE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::MessageInfo::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk11MessageInfoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk11MessageInfoE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk11MessageInfoE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk11MessageInfoE_t>.metaTypes,
    nullptr
} };

void lbk::MessageInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<MessageInfo *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->messageId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->chatSessionId(); break;
        case 2: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->timestamp(); break;
        case 3: *reinterpret_cast<lbk::UserInfo**>(_v) = _t->sender_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSender(); break;
        case 5: *reinterpret_cast<lbk::MessageContent**>(_v) = _t->message_p(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasMessage(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMessageId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setChatSessionId(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setTimestamp(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 3: _t->setSender_p(*reinterpret_cast<lbk::UserInfo**>(_v)); break;
        case 5: _t->setMessage_p(*reinterpret_cast<lbk::MessageContent**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk7MessageE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::Message::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk7MessageE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::Message",
        "requestId",
        "message_p",
        "lbk::MessageInfo*",
        "hasMessage"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'requestId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'message_p'
        QtMocHelpers::PropertyData<lbk::MessageInfo*>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasMessage'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Message, qt_meta_tag_ZN3lbk7MessageE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::Message::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk7MessageE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk7MessageE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk7MessageE_t>.metaTypes,
    nullptr
} };

void lbk::Message::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<Message *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<lbk::MessageInfo**>(_v) = _t->message_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasMessage(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setMessage_p(*reinterpret_cast<lbk::MessageInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16FileDownloadDataE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileDownloadData::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16FileDownloadDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileDownloadData",
        "fileId",
        "fileContent"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileId'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'fileContent'
        QtMocHelpers::PropertyData<QByteArray>(2, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileDownloadData, qt_meta_tag_ZN3lbk16FileDownloadDataE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::FileDownloadData::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16FileDownloadDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16FileDownloadDataE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16FileDownloadDataE_t>.metaTypes,
    nullptr
} };

void lbk::FileDownloadData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FileDownloadData *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileId(); break;
        case 1: *reinterpret_cast<QByteArray*>(_v) = _t->fileContent(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setFileContent(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk14FileUploadDataE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileUploadData::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk14FileUploadDataE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileUploadData",
        "fileName",
        "fileSize",
        "QtProtobuf::int64",
        "fileContent"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
        // property 'fileName'
        QtMocHelpers::PropertyData<QString>(1, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'fileSize'
        QtMocHelpers::PropertyData<QtProtobuf::int64>(2, 0x80000000 | 3, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'fileContent'
        QtMocHelpers::PropertyData<QByteArray>(4, QMetaType::QByteArray, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<FileUploadData, qt_meta_tag_ZN3lbk14FileUploadDataE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_ZN3lbk14FileUploadDataE[] = {
    QMetaObject::SuperData::link<QtProtobuf::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject lbk::FileUploadData::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14FileUploadDataE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk14FileUploadDataE_t>.data,
    qt_static_metacall,
    qt_meta_extradata_ZN3lbk14FileUploadDataE,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk14FileUploadDataE_t>.metaTypes,
    nullptr
} };

void lbk::FileUploadData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<FileUploadData *>(_o);
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtProtobuf::int64 >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast<QtProtobuf::int64*>(_v) = _t->fileSize(); break;
        case 2: *reinterpret_cast<QByteArray*>(_v) = _t->fileContent(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setFileSize(*reinterpret_cast<QtProtobuf::int64*>(_v)); break;
        case 2: _t->setFileContent(*reinterpret_cast<QByteArray*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk17MessageTypeGadgetE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MessageTypeGadget::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk17MessageTypeGadgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MessageTypeGadget",
        "MessageType",
        "STRING",
        "IMAGE",
        "FILE",
        "SPEECH"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'MessageType'
        QtMocHelpers::EnumData<MessageType>(1, 1, QMC::EnumIsScoped).add({
            {    2, MessageType::STRING },
            {    3, MessageType::IMAGE },
            {    4, MessageType::FILE },
            {    5, MessageType::SPEECH },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk17MessageTypeGadgetE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk17MessageTypeGadgetE =
    lbk::MessageTypeGadget::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk17MessageTypeGadgetE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk17MessageTypeGadgetE =
    qt_staticMetaObjectContent_ZN3lbk17MessageTypeGadgetE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk17MessageTypeGadgetE =
    qt_staticMetaObjectContent_ZN3lbk17MessageTypeGadgetE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::MessageTypeGadget::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk17MessageTypeGadgetE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk17MessageTypeGadgetE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk17MessageTypeGadgetE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk25UserInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::UserInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk25UserInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::UserInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "UserIdProtoFieldNumber",
        "NicknameProtoFieldNumber",
        "DescriptionProtoFieldNumber",
        "PhoneProtoFieldNumber",
        "AvatarProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::NicknameProtoFieldNumber },
            {    4, QtProtobufFieldEnum::DescriptionProtoFieldNumber },
            {    5, QtProtobufFieldEnum::PhoneProtoFieldNumber },
            {    6, QtProtobufFieldEnum::AvatarProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk25UserInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk25UserInfo_QtProtobufNestedE =
    lbk::UserInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk25UserInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk25UserInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk25UserInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk25UserInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk25UserInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::UserInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk25UserInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk25UserInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk25UserInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32ChatSessionInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ChatSessionInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32ChatSessionInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ChatSessionInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "SingleChatFriendIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "ChatSessionNameProtoFieldNumber",
        "PrevMessageProtoFieldNumber",
        "AvatarProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::SingleChatFriendIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::ChatSessionNameProtoFieldNumber },
            {    5, QtProtobufFieldEnum::PrevMessageProtoFieldNumber },
            {    6, QtProtobufFieldEnum::AvatarProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32ChatSessionInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE =
    lbk::ChatSessionInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32ChatSessionInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ChatSessionInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32ChatSessionInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk34StringMessageInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::StringMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk34StringMessageInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::StringMessageInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "ContentProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::ContentProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk34StringMessageInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE =
    lbk::StringMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk34StringMessageInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::StringMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk34StringMessageInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33ImageMessageInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::ImageMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33ImageMessageInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::ImageMessageInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "FileIdProtoFieldNumber",
        "ImageContentProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::FileIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::ImageContentProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33ImageMessageInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE =
    lbk::ImageMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33ImageMessageInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::ImageMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33ImageMessageInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32FileMessageInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FileMessageInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileMessageInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "FileIdProtoFieldNumber",
        "FileSizeProtoFieldNumber",
        "FileNameProtoFieldNumber",
        "FileContentsProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::FileIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::FileSizeProtoFieldNumber },
            {    4, QtProtobufFieldEnum::FileNameProtoFieldNumber },
            {    5, QtProtobufFieldEnum::FileContentsProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32FileMessageInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE =
    lbk::FileMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32FileMessageInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FileMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32FileMessageInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::SpeechMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::SpeechMessageInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "FileIdProtoFieldNumber",
        "FileContentsProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::FileIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::FileContentsProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE =
    lbk::SpeechMessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::SpeechMessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk34SpeechMessageInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk31MessageContent_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MessageContent_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31MessageContent_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MessageContent_QtProtobufNested",
        "QtProtobufFieldEnum",
        "MessageTypeProtoFieldNumber",
        "StringMessageProtoFieldNumber",
        "FileMessageProtoFieldNumber",
        "SpeechMessageProtoFieldNumber",
        "ImageMessageProtoFieldNumber",
        "Msg_contentFields",
        "UninitializedField",
        "StringMessage",
        "FileMessage",
        "SpeechMessage",
        "ImageMessage"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::MessageTypeProtoFieldNumber },
            {    3, QtProtobufFieldEnum::StringMessageProtoFieldNumber },
            {    4, QtProtobufFieldEnum::FileMessageProtoFieldNumber },
            {    5, QtProtobufFieldEnum::SpeechMessageProtoFieldNumber },
            {    6, QtProtobufFieldEnum::ImageMessageProtoFieldNumber },
        }),
        // enum 'Msg_contentFields'
        QtMocHelpers::EnumData<Msg_contentFields>(7, 7, QMC::EnumIsScoped).add({
            {    8, Msg_contentFields::UninitializedField },
            {    9, Msg_contentFields::StringMessage },
            {   10, Msg_contentFields::FileMessage },
            {   11, Msg_contentFields::SpeechMessage },
            {   12, Msg_contentFields::ImageMessage },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk31MessageContent_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk31MessageContent_QtProtobufNestedE =
    lbk::MessageContent_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31MessageContent_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk31MessageContent_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31MessageContent_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk31MessageContent_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31MessageContent_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::MessageContent_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk31MessageContent_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk31MessageContent_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk31MessageContent_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk28MessageInfo_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::MessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28MessageInfo_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::MessageInfo_QtProtobufNested",
        "QtProtobufFieldEnum",
        "MessageIdProtoFieldNumber",
        "ChatSessionIdProtoFieldNumber",
        "TimestampProtoFieldNumber",
        "SenderProtoFieldNumber",
        "MessageProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::MessageIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::ChatSessionIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::TimestampProtoFieldNumber },
            {    5, QtProtobufFieldEnum::SenderProtoFieldNumber },
            {    6, QtProtobufFieldEnum::MessageProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk28MessageInfo_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk28MessageInfo_QtProtobufNestedE =
    lbk::MessageInfo_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk28MessageInfo_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk28MessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk28MessageInfo_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk28MessageInfo_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk28MessageInfo_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::MessageInfo_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk28MessageInfo_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk28MessageInfo_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk28MessageInfo_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk24Message_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::Message_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk24Message_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::Message_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
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
            {    3, QtProtobufFieldEnum::MessageProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk24Message_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk24Message_QtProtobufNestedE =
    lbk::Message_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk24Message_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk24Message_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk24Message_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk24Message_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk24Message_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::Message_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk24Message_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk24Message_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk24Message_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33FileDownloadData_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileDownloadData_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33FileDownloadData_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileDownloadData_QtProtobufNested",
        "QtProtobufFieldEnum",
        "FileIdProtoFieldNumber",
        "FileContentProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::FileIdProtoFieldNumber },
            {    3, QtProtobufFieldEnum::FileContentProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33FileDownloadData_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33FileDownloadData_QtProtobufNestedE =
    lbk::FileDownloadData_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33FileDownloadData_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33FileDownloadData_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33FileDownloadData_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33FileDownloadData_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33FileDownloadData_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FileDownloadData_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33FileDownloadData_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33FileDownloadData_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33FileDownloadData_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk31FileUploadData_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::FileUploadData_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31FileUploadData_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::FileUploadData_QtProtobufNested",
        "QtProtobufFieldEnum",
        "FileNameProtoFieldNumber",
        "FileSizeProtoFieldNumber",
        "FileContentProtoFieldNumber"
    };

    QtMocHelpers::UintData qt_methods {
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'QtProtobufFieldEnum'
        QtMocHelpers::EnumData<QtProtobufFieldEnum>(1, 1, QMC::EnumIsScoped).add({
            {    2, QtProtobufFieldEnum::FileNameProtoFieldNumber },
            {    3, QtProtobufFieldEnum::FileSizeProtoFieldNumber },
            {    4, QtProtobufFieldEnum::FileContentProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk31FileUploadData_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk31FileUploadData_QtProtobufNestedE =
    lbk::FileUploadData_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk31FileUploadData_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk31FileUploadData_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31FileUploadData_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk31FileUploadData_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk31FileUploadData_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::FileUploadData_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk31FileUploadData_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk31FileUploadData_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk31FileUploadData_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
