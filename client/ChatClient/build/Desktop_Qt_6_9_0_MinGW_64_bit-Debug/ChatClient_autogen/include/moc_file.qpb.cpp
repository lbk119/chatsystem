/****************************************************************************
** Meta object code from reading C++ file 'file.qpb.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../file.qpb.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file.qpb.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN3lbk16GetSingleFileReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetSingleFileReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetSingleFileReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetSingleFileReq",
        "requestId",
        "fileId",
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
        // property 'fileId'
        QtMocHelpers::PropertyData<QString>(2, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
        // property 'userId'
        QtMocHelpers::PropertyData<QString>(3, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasUserId'
        QtMocHelpers::PropertyData<bool>(4, QMetaType::Bool, QMC::DefaultPropertyFlags),
        // property 'sessionId'
        QtMocHelpers::PropertyData<QString>(5, QMetaType::QString, QMC::DefaultPropertyFlags | QMC::Writable),
        // property 'hasSessionId'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetSingleFileReq, qt_meta_tag_ZN3lbk16GetSingleFileReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetSingleFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetSingleFileReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetSingleFileReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetSingleFileReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetSingleFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetSingleFileReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->fileId(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 3: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 4: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 5: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setFileId(*reinterpret_cast<QString*>(_v)); break;
        case 2: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 4: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16GetSingleFileRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetSingleFileRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16GetSingleFileRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetSingleFileRsp",
        "requestId",
        "success",
        "errmsg",
        "fileData_p",
        "lbk::FileDownloadData*",
        "hasFileData"
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
        // property 'fileData_p'
        QtMocHelpers::PropertyData<lbk::FileDownloadData*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFileData'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetSingleFileRsp, qt_meta_tag_ZN3lbk16GetSingleFileRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetSingleFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetSingleFileRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16GetSingleFileRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16GetSingleFileRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetSingleFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetSingleFileRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<lbk::FileDownloadData**>(_v) = _t->fileData_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasFileData(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFileData_p(*reinterpret_cast<lbk::FileDownloadData**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15GetMultiFileReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetMultiFileReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15GetMultiFileReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetMultiFileReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "fileIdList"
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
        // property 'fileIdList'
        QtMocHelpers::PropertyData<QStringList>(6, QMetaType::QStringList, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetMultiFileReq, qt_meta_tag_ZN3lbk15GetMultiFileReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetMultiFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetMultiFileReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetMultiFileReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15GetMultiFileReqE_t>.metaTypes,
    nullptr
} };

void lbk::GetMultiFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetMultiFileReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QStringList*>(_v) = _t->fileIdList(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setFileIdList(*reinterpret_cast<QStringList*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15GetMultiFileRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetMultiFileRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15GetMultiFileRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetMultiFileRsp",
        "requestId",
        "success",
        "errmsg",
        "fileDataData",
        "QList<lbk::FileDownloadData>"
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
        // property 'fileDataData'
        QtMocHelpers::PropertyData<QList<lbk::FileDownloadData>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GetMultiFileRsp, qt_meta_tag_ZN3lbk15GetMultiFileRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::GetMultiFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetMultiFileRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15GetMultiFileRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15GetMultiFileRspE_t>.metaTypes,
    nullptr
} };

void lbk::GetMultiFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<GetMultiFileRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::FileDownloadData>*>(_v) = _t->fileData(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFileData(*reinterpret_cast<QList<lbk::FileDownloadData>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16PutSingleFileReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutSingleFileReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16PutSingleFileReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutSingleFileReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "fileData_p",
        "lbk::FileUploadData*",
        "hasFileData"
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
        // property 'fileData_p'
        QtMocHelpers::PropertyData<lbk::FileUploadData*>(6, 0x80000000 | 7, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFileData'
        QtMocHelpers::PropertyData<bool>(8, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PutSingleFileReq, qt_meta_tag_ZN3lbk16PutSingleFileReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PutSingleFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PutSingleFileReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PutSingleFileReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16PutSingleFileReqE_t>.metaTypes,
    nullptr
} };

void lbk::PutSingleFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PutSingleFileReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<lbk::FileUploadData**>(_v) = _t->fileData_p(); break;
        case 6: *reinterpret_cast<bool*>(_v) = _t->hasFileData(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setFileData_p(*reinterpret_cast<lbk::FileUploadData**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk16PutSingleFileRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutSingleFileRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk16PutSingleFileRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutSingleFileRsp",
        "requestId",
        "success",
        "errmsg",
        "fileInfo_p",
        "lbk::FileMessageInfo*",
        "hasFileInfo"
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
        // property 'fileInfo_p'
        QtMocHelpers::PropertyData<lbk::FileMessageInfo*>(4, 0x80000000 | 5, QMC::Readable | QMC::Writable | QMC::Designable | QMC::Stored | QMC::EnumOrFlag | QMC::StdCppSet),
        // property 'hasFileInfo'
        QtMocHelpers::PropertyData<bool>(6, QMetaType::Bool, QMC::DefaultPropertyFlags),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PutSingleFileRsp, qt_meta_tag_ZN3lbk16PutSingleFileRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PutSingleFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PutSingleFileRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk16PutSingleFileRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk16PutSingleFileRspE_t>.metaTypes,
    nullptr
} };

void lbk::PutSingleFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PutSingleFileRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<lbk::FileMessageInfo**>(_v) = _t->fileInfo_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasFileInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFileInfo_p(*reinterpret_cast<lbk::FileMessageInfo**>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15PutMultiFileReqE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutMultiFileReq::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15PutMultiFileReqE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutMultiFileReq",
        "requestId",
        "userId",
        "hasUserId",
        "sessionId",
        "hasSessionId",
        "fileDataData",
        "QList<lbk::FileUploadData>"
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
        // property 'fileDataData'
        QtMocHelpers::PropertyData<QList<lbk::FileUploadData>>(6, 0x80000000 | 7, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PutMultiFileReq, qt_meta_tag_ZN3lbk15PutMultiFileReqE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PutMultiFileReq::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15PutMultiFileReqE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15PutMultiFileReqE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15PutMultiFileReqE_t>.metaTypes,
    nullptr
} };

void lbk::PutMultiFileReq::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PutMultiFileReq *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<QString*>(_v) = _t->userId_p(); break;
        case 2: *reinterpret_cast<bool*>(_v) = _t->hasUserId(); break;
        case 3: *reinterpret_cast<QString*>(_v) = _t->sessionId_p(); break;
        case 4: *reinterpret_cast<bool*>(_v) = _t->hasSessionId(); break;
        case 5: *reinterpret_cast<QList<lbk::FileUploadData>*>(_v) = _t->fileData(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setUserId_p(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setSessionId_p(*reinterpret_cast<QString*>(_v)); break;
        case 5: _t->setFileData(*reinterpret_cast<QList<lbk::FileUploadData>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk15PutMultiFileRspE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutMultiFileRsp::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk15PutMultiFileRspE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutMultiFileRsp",
        "requestId",
        "success",
        "errmsg",
        "fileInfoData",
        "QList<lbk::FileMessageInfo>"
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
        // property 'fileInfoData'
        QtMocHelpers::PropertyData<QList<lbk::FileMessageInfo>>(4, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag),
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PutMultiFileRsp, qt_meta_tag_ZN3lbk15PutMultiFileRspE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject lbk::PutMultiFileRsp::staticMetaObject = { {
    QtPrivate::MetaObjectForType<QProtobufMessage>::value,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15PutMultiFileRspE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3lbk15PutMultiFileRspE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3lbk15PutMultiFileRspE_t>.metaTypes,
    nullptr
} };

void lbk::PutMultiFileRsp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = reinterpret_cast<PutMultiFileRsp *>(_o);
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QString*>(_v) = _t->requestId(); break;
        case 1: *reinterpret_cast<bool*>(_v) = _t->success(); break;
        case 2: *reinterpret_cast<QString*>(_v) = _t->errmsg(); break;
        case 3: *reinterpret_cast<QList<lbk::FileMessageInfo>*>(_v) = _t->fileInfo(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRequestId(*reinterpret_cast<QString*>(_v)); break;
        case 1: _t->setSuccess(*reinterpret_cast<bool*>(_v)); break;
        case 2: _t->setErrmsg(*reinterpret_cast<QString*>(_v)); break;
        case 3: _t->setFileInfo(*reinterpret_cast<QList<lbk::FileMessageInfo>*>(_v)); break;
        default: break;
        }
    }
}
namespace {
struct qt_meta_tag_ZN3lbk33GetSingleFileReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetSingleFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetSingleFileReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetSingleFileReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "FileIdProtoFieldNumber",
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
            {    3, QtProtobufFieldEnum::FileIdProtoFieldNumber },
            {    4, QtProtobufFieldEnum::UserIdProtoFieldNumber },
            {    5, QtProtobufFieldEnum::SessionIdProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetSingleFileReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE =
    lbk::GetSingleFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetSingleFileReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetSingleFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetSingleFileReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetSingleFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetSingleFileRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "FileDataProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileDataProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE =
    lbk::GetSingleFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetSingleFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33GetSingleFileRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32GetMultiFileReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetMultiFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetMultiFileReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetMultiFileReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "FileIdListProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileIdListProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32GetMultiFileReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE =
    lbk::GetMultiFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetMultiFileReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetMultiFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32GetMultiFileReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::GetMultiFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::GetMultiFileRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "FileDataProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileDataProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE =
    lbk::GetMultiFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::GetMultiFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32GetMultiFileRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33PutSingleFileReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutSingleFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PutSingleFileReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutSingleFileReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "FileDataProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileDataProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33PutSingleFileReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE =
    lbk::PutSingleFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PutSingleFileReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PutSingleFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33PutSingleFileReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutSingleFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutSingleFileRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "FileInfoProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE =
    lbk::PutSingleFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PutSingleFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk33PutSingleFileRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32PutMultiFileReq_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutMultiFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32PutMultiFileReq_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutMultiFileReq_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "UserIdProtoFieldNumber",
        "SessionIdProtoFieldNumber",
        "FileDataProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileDataProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32PutMultiFileReq_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE =
    lbk::PutMultiFileReq_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32PutMultiFileReq_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PutMultiFileReq_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32PutMultiFileReq_QtProtobufNestedE.metaTypes,
    nullptr
} };

namespace {
struct qt_meta_tag_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE_t {};
} // unnamed namespace

template <> constexpr inline auto lbk::PutMultiFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "lbk::PutMultiFileRsp_QtProtobufNested",
        "QtProtobufFieldEnum",
        "RequestIdProtoFieldNumber",
        "SuccessProtoFieldNumber",
        "ErrmsgProtoFieldNumber",
        "FileInfoProtoFieldNumber"
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
            {    5, QtProtobufFieldEnum::FileInfoProtoFieldNumber },
        }),
    };
    return QtMocHelpers::metaObjectData<void, qt_meta_tag_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE_t>(QMC::PropertyAccessInStaticMetaCall, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}

static constexpr auto qt_staticMetaObjectContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE =
    lbk::PutMultiFileRsp_QtProtobufNested::qt_create_metaobjectdata<qt_meta_tag_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE_t>();
static constexpr auto qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE.staticData;
static constexpr auto qt_staticMetaObjectRelocatingContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE =
    qt_staticMetaObjectContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE.relocatingData;

Q_CONSTINIT const QMetaObject lbk::PutMultiFileRsp_QtProtobufNested::staticMetaObject = { {
    nullptr,
    qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE.stringdata,
    qt_staticMetaObjectStaticContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE.data,
    nullptr,
    nullptr,
    qt_staticMetaObjectRelocatingContent_ZN3lbk32PutMultiFileRsp_QtProtobufNestedE.metaTypes,
    nullptr
} };

QT_WARNING_POP
