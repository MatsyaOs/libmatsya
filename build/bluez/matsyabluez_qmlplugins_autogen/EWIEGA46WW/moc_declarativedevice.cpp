/****************************************************************************
** Meta object code from reading C++ file 'declarativedevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../bluez/declarativedevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativedevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeclarativeDevice_t {
    QByteArrayData data[55];
    char stringdata0[706];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeclarativeDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeclarativeDevice_t qt_meta_stringdata_DeclarativeDevice = {
    {
QT_MOC_LITERAL(0, 0, 17), // "DeclarativeDevice"
QT_MOC_LITERAL(1, 18, 13), // "deviceRemoved"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 18), // "DeclarativeDevice*"
QT_MOC_LITERAL(4, 52, 6), // "device"
QT_MOC_LITERAL(5, 59, 13), // "deviceChanged"
QT_MOC_LITERAL(6, 73, 11), // "nameChanged"
QT_MOC_LITERAL(7, 85, 4), // "name"
QT_MOC_LITERAL(8, 90, 19), // "friendlyNameChanged"
QT_MOC_LITERAL(9, 110, 12), // "friendlyName"
QT_MOC_LITERAL(10, 123, 17), // "remoteNameChanged"
QT_MOC_LITERAL(11, 141, 10), // "remoteName"
QT_MOC_LITERAL(12, 152, 18), // "deviceClassChanged"
QT_MOC_LITERAL(13, 171, 11), // "deviceClass"
QT_MOC_LITERAL(14, 183, 11), // "typeChanged"
QT_MOC_LITERAL(15, 195, 21), // "BluezQt::Device::Type"
QT_MOC_LITERAL(16, 217, 4), // "type"
QT_MOC_LITERAL(17, 222, 17), // "appearanceChanged"
QT_MOC_LITERAL(18, 240, 10), // "appearance"
QT_MOC_LITERAL(19, 251, 11), // "iconChanged"
QT_MOC_LITERAL(20, 263, 4), // "icon"
QT_MOC_LITERAL(21, 268, 13), // "pairedChanged"
QT_MOC_LITERAL(22, 282, 6), // "paired"
QT_MOC_LITERAL(23, 289, 14), // "trustedChanged"
QT_MOC_LITERAL(24, 304, 7), // "trusted"
QT_MOC_LITERAL(25, 312, 14), // "blockedChanged"
QT_MOC_LITERAL(26, 327, 7), // "blocked"
QT_MOC_LITERAL(27, 335, 20), // "legacyPairingChanged"
QT_MOC_LITERAL(28, 356, 13), // "legacyPairing"
QT_MOC_LITERAL(29, 370, 11), // "rssiChanged"
QT_MOC_LITERAL(30, 382, 4), // "rssi"
QT_MOC_LITERAL(31, 387, 16), // "connectedChanged"
QT_MOC_LITERAL(32, 404, 9), // "connected"
QT_MOC_LITERAL(33, 414, 12), // "uuidsChanged"
QT_MOC_LITERAL(34, 427, 5), // "uuids"
QT_MOC_LITERAL(35, 433, 15), // "modaliasChanged"
QT_MOC_LITERAL(36, 449, 8), // "modalias"
QT_MOC_LITERAL(37, 458, 12), // "inputChanged"
QT_MOC_LITERAL(38, 471, 17), // "DeclarativeInput*"
QT_MOC_LITERAL(39, 489, 5), // "input"
QT_MOC_LITERAL(40, 495, 18), // "mediaPlayerChanged"
QT_MOC_LITERAL(41, 514, 23), // "DeclarativeMediaPlayer*"
QT_MOC_LITERAL(42, 538, 11), // "mediaPlayer"
QT_MOC_LITERAL(43, 550, 15), // "connectToDevice"
QT_MOC_LITERAL(44, 566, 21), // "BluezQt::PendingCall*"
QT_MOC_LITERAL(45, 588, 20), // "disconnectFromDevice"
QT_MOC_LITERAL(46, 609, 14), // "connectProfile"
QT_MOC_LITERAL(47, 624, 4), // "uuid"
QT_MOC_LITERAL(48, 629, 17), // "disconnectProfile"
QT_MOC_LITERAL(49, 647, 4), // "pair"
QT_MOC_LITERAL(50, 652, 13), // "cancelPairing"
QT_MOC_LITERAL(51, 666, 3), // "ubi"
QT_MOC_LITERAL(52, 670, 7), // "address"
QT_MOC_LITERAL(53, 678, 7), // "adapter"
QT_MOC_LITERAL(54, 686, 19) // "DeclarativeAdapter*"

    },
    "DeclarativeDevice\0deviceRemoved\0\0"
    "DeclarativeDevice*\0device\0deviceChanged\0"
    "nameChanged\0name\0friendlyNameChanged\0"
    "friendlyName\0remoteNameChanged\0"
    "remoteName\0deviceClassChanged\0deviceClass\0"
    "typeChanged\0BluezQt::Device::Type\0"
    "type\0appearanceChanged\0appearance\0"
    "iconChanged\0icon\0pairedChanged\0paired\0"
    "trustedChanged\0trusted\0blockedChanged\0"
    "blocked\0legacyPairingChanged\0legacyPairing\0"
    "rssiChanged\0rssi\0connectedChanged\0"
    "connected\0uuidsChanged\0uuids\0"
    "modaliasChanged\0modalias\0inputChanged\0"
    "DeclarativeInput*\0input\0mediaPlayerChanged\0"
    "DeclarativeMediaPlayer*\0mediaPlayer\0"
    "connectToDevice\0BluezQt::PendingCall*\0"
    "disconnectFromDevice\0connectProfile\0"
    "uuid\0disconnectProfile\0pair\0cancelPairing\0"
    "ubi\0address\0adapter\0DeclarativeAdapter*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeclarativeDevice[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
      20,  206, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,
       5,    1,  142,    2, 0x06 /* Public */,
       6,    1,  145,    2, 0x06 /* Public */,
       8,    1,  148,    2, 0x06 /* Public */,
      10,    1,  151,    2, 0x06 /* Public */,
      12,    1,  154,    2, 0x06 /* Public */,
      14,    1,  157,    2, 0x06 /* Public */,
      17,    1,  160,    2, 0x06 /* Public */,
      19,    1,  163,    2, 0x06 /* Public */,
      21,    1,  166,    2, 0x06 /* Public */,
      23,    1,  169,    2, 0x06 /* Public */,
      25,    1,  172,    2, 0x06 /* Public */,
      27,    1,  175,    2, 0x06 /* Public */,
      29,    1,  178,    2, 0x06 /* Public */,
      31,    1,  181,    2, 0x06 /* Public */,
      33,    1,  184,    2, 0x06 /* Public */,
      35,    1,  187,    2, 0x06 /* Public */,
      37,    1,  190,    2, 0x06 /* Public */,
      40,    1,  193,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      43,    0,  196,    2, 0x0a /* Public */,
      45,    0,  197,    2, 0x0a /* Public */,
      46,    1,  198,    2, 0x0a /* Public */,
      48,    1,  201,    2, 0x0a /* Public */,
      49,    0,  204,    2, 0x0a /* Public */,
      50,    0,  205,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::UInt,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::UShort,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::Bool,   24,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Short,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::QStringList,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, 0x80000000 | 38,   39,
    QMetaType::Void, 0x80000000 | 41,   42,

 // slots: parameters
    0x80000000 | 44,
    0x80000000 | 44,
    0x80000000 | 44, QMetaType::QString,   47,
    0x80000000 | 44, QMetaType::QString,   47,
    0x80000000 | 44,
    0x80000000 | 44,

 // properties: name, type, flags
      51, QMetaType::QString, 0x00095401,
      52, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495001,
      11, QMetaType::QString, 0x00495001,
      13, QMetaType::UInt, 0x00495001,
      16, 0x80000000 | 15, 0x00495009,
      18, QMetaType::UShort, 0x00495001,
      20, QMetaType::QString, 0x00495001,
      22, QMetaType::Bool, 0x00495001,
      24, QMetaType::Bool, 0x00495103,
      26, QMetaType::Bool, 0x00495103,
      28, QMetaType::Bool, 0x00495001,
      30, QMetaType::Short, 0x00495001,
      32, QMetaType::Bool, 0x00495001,
      34, QMetaType::QStringList, 0x00495001,
      36, QMetaType::QString, 0x00495001,
      39, 0x80000000 | 38, 0x00495009,
      42, 0x80000000 | 41, 0x00495009,
      53, 0x80000000 | 54, 0x00095409,

 // properties: notify_signal_id
       0,
       0,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
       0,

       0        // eod
};

void DeclarativeDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeclarativeDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceRemoved((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1]))); break;
        case 1: _t->deviceChanged((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->friendlyNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->remoteNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->deviceClassChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 6: _t->typeChanged((*reinterpret_cast< BluezQt::Device::Type(*)>(_a[1]))); break;
        case 7: _t->appearanceChanged((*reinterpret_cast< quint16(*)>(_a[1]))); break;
        case 8: _t->iconChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->pairedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->trustedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->blockedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->legacyPairingChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->rssiChanged((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 14: _t->connectedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->uuidsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 16: _t->modaliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->inputChanged((*reinterpret_cast< DeclarativeInput*(*)>(_a[1]))); break;
        case 18: _t->mediaPlayerChanged((*reinterpret_cast< DeclarativeMediaPlayer*(*)>(_a[1]))); break;
        case 19: { BluezQt::PendingCall* _r = _t->connectToDevice();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 20: { BluezQt::PendingCall* _r = _t->disconnectFromDevice();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 21: { BluezQt::PendingCall* _r = _t->connectProfile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 22: { BluezQt::PendingCall* _r = _t->disconnectProfile((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 23: { BluezQt::PendingCall* _r = _t->pair();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 24: { BluezQt::PendingCall* _r = _t->cancelPairing();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeDevice* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeDevice* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeInput* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeMediaPlayer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeclarativeDevice::*)(DeclarativeDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::deviceRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(DeclarativeDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::deviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::friendlyNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::remoteNameChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::deviceClassChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(BluezQt::Device::Type );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::typeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(quint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::appearanceChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::iconChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::pairedChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::trustedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::blockedChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::legacyPairingChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(qint16 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::rssiChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::connectedChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::uuidsChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::modaliasChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(DeclarativeInput * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::inputChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (DeclarativeDevice::*)(DeclarativeMediaPlayer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeDevice::mediaPlayerChanged)) {
                *result = 18;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeInput* >(); break;
        case 18:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeMediaPlayer* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeclarativeDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->ubi(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->friendlyName(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->remoteName(); break;
        case 5: *reinterpret_cast< quint32*>(_v) = _t->deviceClass(); break;
        case 6: *reinterpret_cast< BluezQt::Device::Type*>(_v) = _t->type(); break;
        case 7: *reinterpret_cast< quint16*>(_v) = _t->appearance(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->icon(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isPaired(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isTrusted(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isBlocked(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->hasLegacyPairing(); break;
        case 13: *reinterpret_cast< qint16*>(_v) = _t->rssi(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 15: *reinterpret_cast< QStringList*>(_v) = _t->uuids(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->modalias(); break;
        case 17: *reinterpret_cast< DeclarativeInput**>(_v) = _t->input(); break;
        case 18: *reinterpret_cast< DeclarativeMediaPlayer**>(_v) = _t->mediaPlayer(); break;
        case 19: *reinterpret_cast< DeclarativeAdapter**>(_v) = _t->adapter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeclarativeDevice *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setTrusted(*reinterpret_cast< bool*>(_v)); break;
        case 11: _t->setBlocked(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject::SuperData qt_meta_extradata_DeclarativeDevice[] = {
    QMetaObject::SuperData::link<BluezQt::Device::staticMetaObject>(),
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject DeclarativeDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeclarativeDevice.data,
    qt_meta_data_DeclarativeDevice,
    qt_static_metacall,
    qt_meta_extradata_DeclarativeDevice,
    nullptr
} };


const QMetaObject *DeclarativeDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeclarativeDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeclarativeDevice.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeclarativeDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeclarativeDevice::deviceRemoved(DeclarativeDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeclarativeDevice::deviceChanged(DeclarativeDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeclarativeDevice::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeclarativeDevice::friendlyNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeclarativeDevice::remoteNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeclarativeDevice::deviceClassChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeclarativeDevice::typeChanged(BluezQt::Device::Type _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeclarativeDevice::appearanceChanged(quint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeclarativeDevice::iconChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeclarativeDevice::pairedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DeclarativeDevice::trustedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DeclarativeDevice::blockedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DeclarativeDevice::legacyPairingChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DeclarativeDevice::rssiChanged(qint16 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DeclarativeDevice::connectedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DeclarativeDevice::uuidsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DeclarativeDevice::modaliasChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void DeclarativeDevice::inputChanged(DeclarativeInput * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void DeclarativeDevice::mediaPlayerChanged(DeclarativeMediaPlayer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
