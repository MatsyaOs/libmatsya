/****************************************************************************
** Meta object code from reading C++ file 'handler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/handler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'handler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Handler_t {
    QByteArrayData data[42];
    char stringdata0[648];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Handler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Handler_t qt_meta_stringdata_Handler = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Handler"
QT_MOC_LITERAL(1, 8, 26), // "connectionActivationFailed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 14), // "connectionPath"
QT_MOC_LITERAL(4, 51, 7), // "message"
QT_MOC_LITERAL(5, 59, 14), // "hotspotCreated"
QT_MOC_LITERAL(6, 74, 15), // "hotspotDisabled"
QT_MOC_LITERAL(7, 90, 23), // "hotspotSupportedChanged"
QT_MOC_LITERAL(8, 114, 16), // "hotspotSupported"
QT_MOC_LITERAL(9, 131, 18), // "activateConnection"
QT_MOC_LITERAL(10, 150, 10), // "connection"
QT_MOC_LITERAL(11, 161, 6), // "device"
QT_MOC_LITERAL(12, 168, 17), // "specificParameter"
QT_MOC_LITERAL(13, 186, 24), // "addAndActivateConnection"
QT_MOC_LITERAL(14, 211, 8), // "password"
QT_MOC_LITERAL(15, 220, 8), // "wifiCode"
QT_MOC_LITERAL(16, 229, 4), // "ssid"
QT_MOC_LITERAL(17, 234, 12), // "securityType"
QT_MOC_LITERAL(18, 247, 13), // "addConnection"
QT_MOC_LITERAL(19, 261, 15), // "NMVariantMapMap"
QT_MOC_LITERAL(20, 277, 3), // "map"
QT_MOC_LITERAL(21, 281, 20), // "deactivateConnection"
QT_MOC_LITERAL(22, 302, 13), // "disconnectAll"
QT_MOC_LITERAL(23, 316, 18), // "enableAirplaneMode"
QT_MOC_LITERAL(24, 335, 6), // "enable"
QT_MOC_LITERAL(25, 342, 16), // "enableNetworking"
QT_MOC_LITERAL(26, 359, 14), // "enableWireless"
QT_MOC_LITERAL(27, 374, 10), // "enableWwan"
QT_MOC_LITERAL(28, 385, 16), // "removeConnection"
QT_MOC_LITERAL(29, 402, 16), // "updateConnection"
QT_MOC_LITERAL(30, 419, 31), // "NetworkManager::Connection::Ptr"
QT_MOC_LITERAL(31, 451, 11), // "requestScan"
QT_MOC_LITERAL(32, 463, 9), // "interface"
QT_MOC_LITERAL(33, 473, 13), // "createHotspot"
QT_MOC_LITERAL(34, 487, 11), // "stopHotspot"
QT_MOC_LITERAL(35, 499, 16), // "secretAgentError"
QT_MOC_LITERAL(36, 516, 13), // "replyFinished"
QT_MOC_LITERAL(37, 530, 24), // "QDBusPendingCallWatcher*"
QT_MOC_LITERAL(38, 555, 7), // "watcher"
QT_MOC_LITERAL(39, 563, 28), // "primaryConnectionTypeChanged"
QT_MOC_LITERAL(40, 592, 50), // "NetworkManager::ConnectionSet..."
QT_MOC_LITERAL(41, 643, 4) // "type"

    },
    "Handler\0connectionActivationFailed\0\0"
    "connectionPath\0message\0hotspotCreated\0"
    "hotspotDisabled\0hotspotSupportedChanged\0"
    "hotspotSupported\0activateConnection\0"
    "connection\0device\0specificParameter\0"
    "addAndActivateConnection\0password\0"
    "wifiCode\0ssid\0securityType\0addConnection\0"
    "NMVariantMapMap\0map\0deactivateConnection\0"
    "disconnectAll\0enableAirplaneMode\0"
    "enable\0enableNetworking\0enableWireless\0"
    "enableWwan\0removeConnection\0"
    "updateConnection\0NetworkManager::Connection::Ptr\0"
    "requestScan\0interface\0createHotspot\0"
    "stopHotspot\0secretAgentError\0replyFinished\0"
    "QDBusPendingCallWatcher*\0watcher\0"
    "primaryConnectionTypeChanged\0"
    "NetworkManager::ConnectionSettings::ConnectionType\0"
    "type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Handler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       1,  224, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  139,    2, 0x06 /* Public */,
       5,    0,  144,    2, 0x06 /* Public */,
       6,    0,  145,    2, 0x06 /* Public */,
       7,    1,  146,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,  149,    2, 0x0a /* Public */,
      13,    3,  156,    2, 0x0a /* Public */,
      13,    2,  163,    2, 0x2a /* Public | MethodCloned */,
      15,    3,  168,    2, 0x0a /* Public */,
      18,    1,  175,    2, 0x0a /* Public */,
      21,    2,  178,    2, 0x0a /* Public */,
      22,    0,  183,    2, 0x0a /* Public */,
      23,    1,  184,    2, 0x0a /* Public */,
      25,    1,  187,    2, 0x0a /* Public */,
      26,    1,  190,    2, 0x0a /* Public */,
      27,    1,  193,    2, 0x0a /* Public */,
      28,    1,  196,    2, 0x0a /* Public */,
      29,    2,  199,    2, 0x0a /* Public */,
      31,    1,  204,    2, 0x0a /* Public */,
      31,    0,  207,    2, 0x2a /* Public | MethodCloned */,
      33,    0,  208,    2, 0x0a /* Public */,
      34,    0,  209,    2, 0x0a /* Public */,
      35,    2,  210,    2, 0x08 /* Private */,
      36,    1,  215,    2, 0x08 /* Private */,
       5,    1,  218,    2, 0x08 /* Private */,
      39,    1,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   11,   12,   14,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,    3,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, 0x80000000 | 30, 0x80000000 | 19,   10,   20,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 40,   41,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       3,

       0        // eod
};

void Handler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Handler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionActivationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->hotspotCreated(); break;
        case 2: _t->hotspotDisabled(); break;
        case 3: _t->hotspotSupportedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->activateConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->addAndActivateConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 6: _t->addAndActivateConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: { QString _r = _t->wifiCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->addConnection((*reinterpret_cast< const NMVariantMapMap(*)>(_a[1]))); break;
        case 9: _t->deactivateConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 10: _t->disconnectAll(); break;
        case 11: _t->enableAirplaneMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->enableNetworking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->enableWireless((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->enableWwan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->removeConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->updateConnection((*reinterpret_cast< const NetworkManager::Connection::Ptr(*)>(_a[1])),(*reinterpret_cast< const NMVariantMapMap(*)>(_a[2]))); break;
        case 17: _t->requestScan((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->requestScan(); break;
        case 19: _t->createHotspot(); break;
        case 20: _t->stopHotspot(); break;
        case 21: _t->secretAgentError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 22: _t->replyFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 23: _t->hotspotCreated((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 24: _t->primaryConnectionTypeChanged((*reinterpret_cast< NetworkManager::ConnectionSettings::ConnectionType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NMVariantMapMap >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NMVariantMapMap >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusPendingCallWatcher* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Handler::*)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::connectionActivationFailed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::hotspotCreated)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Handler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::hotspotDisabled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Handler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Handler::hotspotSupportedChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Handler *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hotspotSupported(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Handler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Handler.data,
    qt_meta_data_Handler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Handler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Handler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Handler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Handler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Handler::connectionActivationFailed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Handler::hotspotCreated()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Handler::hotspotDisabled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Handler::hotspotSupportedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
