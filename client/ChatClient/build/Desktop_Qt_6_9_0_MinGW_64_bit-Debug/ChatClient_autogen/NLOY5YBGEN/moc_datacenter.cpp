/****************************************************************************
** Meta object code from reading C++ file 'datacenter.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../model/datacenter.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datacenter.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5model10DataCenterE_t {};
} // unnamed namespace

template <> constexpr inline auto model::DataCenter::qt_create_metaobjectdata<qt_meta_tag_ZN5model10DataCenterE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "model::DataCenter",
        "getMyselfDone",
        "",
        "getFriendListDone",
        "getChatSessionListDone",
        "getApplyListDone",
        "getRecentMessageListDone",
        "chatSessionId",
        "getRecentMessageListDoneNoUI",
        "sendMessageDone",
        "MessageType",
        "messageType",
        "content",
        "extraInfo",
        "updateLastMessage",
        "receiveMessageDone",
        "Message",
        "lastMessage",
        "changeNicknameDone",
        "changeDescriptionDone",
        "getVerifyCodeDone",
        "changePhoneDone",
        "changeAvatarDone",
        "deleteFriendDone",
        "clearCurrentSession",
        "addFriendApplyDone",
        "receiveFriendApplyDone",
        "acceptFriendApplyDone",
        "rejectFriendApplyDone",
        "receiveFriendProcessDone",
        "nickname",
        "agree",
        "createGroupChatSessionDone",
        "receiveSessionCreateDone",
        "getMemberListDone",
        "searchUserDone",
        "searchMessageDone",
        "userLoginDone",
        "ok",
        "reason",
        "userRegisterDone",
        "phoneLoginDone",
        "phoneRegisterDone",
        "getSingleFileDone",
        "fileId",
        "fileContent",
        "speechConvertTextDone",
        "text"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'getMyselfDone'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getFriendListDone'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getChatSessionListDone'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getApplyListDone'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getRecentMessageListDone'
        QtMocHelpers::SignalData<void(const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'getRecentMessageListDoneNoUI'
        QtMocHelpers::SignalData<void(const QString &)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'sendMessageDone'
        QtMocHelpers::SignalData<void(MessageType, const QByteArray &, const QString &)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 10, 11 }, { QMetaType::QByteArray, 12 }, { QMetaType::QString, 13 },
        }}),
        // Signal 'updateLastMessage'
        QtMocHelpers::SignalData<void(const QString &)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'receiveMessageDone'
        QtMocHelpers::SignalData<void(const Message &)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 16, 17 },
        }}),
        // Signal 'changeNicknameDone'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changeDescriptionDone'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getVerifyCodeDone'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changePhoneDone'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changeAvatarDone'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'deleteFriendDone'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'clearCurrentSession'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'addFriendApplyDone'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'receiveFriendApplyDone'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'acceptFriendApplyDone'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'rejectFriendApplyDone'
        QtMocHelpers::SignalData<void()>(28, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'receiveFriendProcessDone'
        QtMocHelpers::SignalData<void(const QString &, bool)>(29, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 30 }, { QMetaType::Bool, 31 },
        }}),
        // Signal 'createGroupChatSessionDone'
        QtMocHelpers::SignalData<void()>(32, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'receiveSessionCreateDone'
        QtMocHelpers::SignalData<void()>(33, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'getMemberListDone'
        QtMocHelpers::SignalData<void(const QString &)>(34, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 7 },
        }}),
        // Signal 'searchUserDone'
        QtMocHelpers::SignalData<void()>(35, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'searchMessageDone'
        QtMocHelpers::SignalData<void()>(36, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'userLoginDone'
        QtMocHelpers::SignalData<void(bool, const QString &)>(37, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 }, { QMetaType::QString, 39 },
        }}),
        // Signal 'userRegisterDone'
        QtMocHelpers::SignalData<void(bool, const QString &)>(40, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 }, { QMetaType::QString, 39 },
        }}),
        // Signal 'phoneLoginDone'
        QtMocHelpers::SignalData<void(bool, const QString &)>(41, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 }, { QMetaType::QString, 39 },
        }}),
        // Signal 'phoneRegisterDone'
        QtMocHelpers::SignalData<void(bool, const QString &)>(42, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 38 }, { QMetaType::QString, 39 },
        }}),
        // Signal 'getSingleFileDone'
        QtMocHelpers::SignalData<void(const QString &, const QByteArray &)>(43, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 44 }, { QMetaType::QByteArray, 45 },
        }}),
        // Signal 'speechConvertTextDone'
        QtMocHelpers::SignalData<void(const QString &, const QString &)>(46, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 44 }, { QMetaType::QString, 47 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<DataCenter, qt_meta_tag_ZN5model10DataCenterE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject model::DataCenter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5model10DataCenterE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5model10DataCenterE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN5model10DataCenterE_t>.metaTypes,
    nullptr
} };

void model::DataCenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<DataCenter *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->getMyselfDone(); break;
        case 1: _t->getFriendListDone(); break;
        case 2: _t->getChatSessionListDone(); break;
        case 3: _t->getApplyListDone(); break;
        case 4: _t->getRecentMessageListDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->getRecentMessageListDoneNoUI((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->sendMessageDone((*reinterpret_cast< std::add_pointer_t<MessageType>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 7: _t->updateLastMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->receiveMessageDone((*reinterpret_cast< std::add_pointer_t<Message>>(_a[1]))); break;
        case 9: _t->changeNicknameDone(); break;
        case 10: _t->changeDescriptionDone(); break;
        case 11: _t->getVerifyCodeDone(); break;
        case 12: _t->changePhoneDone(); break;
        case 13: _t->changeAvatarDone(); break;
        case 14: _t->deleteFriendDone(); break;
        case 15: _t->clearCurrentSession(); break;
        case 16: _t->addFriendApplyDone(); break;
        case 17: _t->receiveFriendApplyDone(); break;
        case 18: _t->acceptFriendApplyDone(); break;
        case 19: _t->rejectFriendApplyDone(); break;
        case 20: _t->receiveFriendProcessDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 21: _t->createGroupChatSessionDone(); break;
        case 22: _t->receiveSessionCreateDone(); break;
        case 23: _t->getMemberListDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->searchUserDone(); break;
        case 25: _t->searchMessageDone(); break;
        case 26: _t->userLoginDone((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 27: _t->userRegisterDone((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->phoneLoginDone((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 29: _t->phoneRegisterDone((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 30: _t->getSingleFileDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 31: _t->speechConvertTextDone((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::getMyselfDone, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::getFriendListDone, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::getChatSessionListDone, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::getApplyListDone, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & )>(_a, &DataCenter::getRecentMessageListDone, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & )>(_a, &DataCenter::getRecentMessageListDoneNoUI, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(MessageType , const QByteArray & , const QString & )>(_a, &DataCenter::sendMessageDone, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & )>(_a, &DataCenter::updateLastMessage, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const Message & )>(_a, &DataCenter::receiveMessageDone, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::changeNicknameDone, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::changeDescriptionDone, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::getVerifyCodeDone, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::changePhoneDone, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::changeAvatarDone, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::deleteFriendDone, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::clearCurrentSession, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::addFriendApplyDone, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::receiveFriendApplyDone, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::acceptFriendApplyDone, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::rejectFriendApplyDone, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & , bool )>(_a, &DataCenter::receiveFriendProcessDone, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::createGroupChatSessionDone, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::receiveSessionCreateDone, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & )>(_a, &DataCenter::getMemberListDone, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::searchUserDone, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)()>(_a, &DataCenter::searchMessageDone, 25))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(bool , const QString & )>(_a, &DataCenter::userLoginDone, 26))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(bool , const QString & )>(_a, &DataCenter::userRegisterDone, 27))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(bool , const QString & )>(_a, &DataCenter::phoneLoginDone, 28))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(bool , const QString & )>(_a, &DataCenter::phoneRegisterDone, 29))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & , const QByteArray & )>(_a, &DataCenter::getSingleFileDone, 30))
            return;
        if (QtMocHelpers::indexOfMethod<void (DataCenter::*)(const QString & , const QString & )>(_a, &DataCenter::speechConvertTextDone, 31))
            return;
    }
}

const QMetaObject *model::DataCenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *model::DataCenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN5model10DataCenterE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int model::DataCenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void model::DataCenter::getMyselfDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void model::DataCenter::getFriendListDone()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void model::DataCenter::getChatSessionListDone()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void model::DataCenter::getApplyListDone()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void model::DataCenter::getRecentMessageListDone(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1);
}

// SIGNAL 5
void model::DataCenter::getRecentMessageListDoneNoUI(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void model::DataCenter::sendMessageDone(MessageType _t1, const QByteArray & _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2, _t3);
}

// SIGNAL 7
void model::DataCenter::updateLastMessage(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}

// SIGNAL 8
void model::DataCenter::receiveMessageDone(const Message & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void model::DataCenter::changeNicknameDone()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void model::DataCenter::changeDescriptionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void model::DataCenter::getVerifyCodeDone()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void model::DataCenter::changePhoneDone()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void model::DataCenter::changeAvatarDone()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void model::DataCenter::deleteFriendDone()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void model::DataCenter::clearCurrentSession()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void model::DataCenter::addFriendApplyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void model::DataCenter::receiveFriendApplyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void model::DataCenter::acceptFriendApplyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void model::DataCenter::rejectFriendApplyDone()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void model::DataCenter::receiveFriendProcessDone(const QString & _t1, bool _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 20, nullptr, _t1, _t2);
}

// SIGNAL 21
void model::DataCenter::createGroupChatSessionDone()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void model::DataCenter::receiveSessionCreateDone()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void model::DataCenter::getMemberListDone(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 23, nullptr, _t1);
}

// SIGNAL 24
void model::DataCenter::searchUserDone()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void model::DataCenter::searchMessageDone()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void model::DataCenter::userLoginDone(bool _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 26, nullptr, _t1, _t2);
}

// SIGNAL 27
void model::DataCenter::userRegisterDone(bool _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 27, nullptr, _t1, _t2);
}

// SIGNAL 28
void model::DataCenter::phoneLoginDone(bool _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 28, nullptr, _t1, _t2);
}

// SIGNAL 29
void model::DataCenter::phoneRegisterDone(bool _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 29, nullptr, _t1, _t2);
}

// SIGNAL 30
void model::DataCenter::getSingleFileDone(const QString & _t1, const QByteArray & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 30, nullptr, _t1, _t2);
}

// SIGNAL 31
void model::DataCenter::speechConvertTextDone(const QString & _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 31, nullptr, _t1, _t2);
}
QT_WARNING_POP
