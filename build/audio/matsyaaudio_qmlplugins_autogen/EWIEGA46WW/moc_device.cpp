/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/device.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__Device_t {
    QByteArrayData data[28];
    char stringdata0[360];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__Device_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__Device_t qt_meta_stringdata_QPulseAudio__Device = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QPulseAudio::Device"
QT_MOC_LITERAL(1, 20, 12), // "stateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "nameChanged"
QT_MOC_LITERAL(4, 46, 18), // "descriptionChanged"
QT_MOC_LITERAL(5, 65, 17), // "formFactorChanged"
QT_MOC_LITERAL(6, 83, 16), // "cardIndexChanged"
QT_MOC_LITERAL(7, 100, 12), // "portsChanged"
QT_MOC_LITERAL(8, 113, 22), // "activePortIndexChanged"
QT_MOC_LITERAL(9, 136, 14), // "defaultChanged"
QT_MOC_LITERAL(10, 151, 20), // "virtualDeviceChanged"
QT_MOC_LITERAL(11, 172, 13), // "switchStreams"
QT_MOC_LITERAL(12, 186, 5), // "state"
QT_MOC_LITERAL(13, 192, 5), // "State"
QT_MOC_LITERAL(14, 198, 4), // "name"
QT_MOC_LITERAL(15, 203, 11), // "description"
QT_MOC_LITERAL(16, 215, 10), // "formFactor"
QT_MOC_LITERAL(17, 226, 9), // "cardIndex"
QT_MOC_LITERAL(18, 236, 5), // "ports"
QT_MOC_LITERAL(19, 242, 15), // "QList<QObject*>"
QT_MOC_LITERAL(20, 258, 15), // "activePortIndex"
QT_MOC_LITERAL(21, 274, 7), // "default"
QT_MOC_LITERAL(22, 282, 13), // "virtualDevice"
QT_MOC_LITERAL(23, 296, 12), // "InvalidState"
QT_MOC_LITERAL(24, 309, 12), // "RunningState"
QT_MOC_LITERAL(25, 322, 9), // "IdleState"
QT_MOC_LITERAL(26, 332, 14), // "SuspendedState"
QT_MOC_LITERAL(27, 347, 12) // "UnknownState"

    },
    "QPulseAudio::Device\0stateChanged\0\0"
    "nameChanged\0descriptionChanged\0"
    "formFactorChanged\0cardIndexChanged\0"
    "portsChanged\0activePortIndexChanged\0"
    "defaultChanged\0virtualDeviceChanged\0"
    "switchStreams\0state\0State\0name\0"
    "description\0formFactor\0cardIndex\0ports\0"
    "QList<QObject*>\0activePortIndex\0default\0"
    "virtualDevice\0InvalidState\0RunningState\0"
    "IdleState\0SuspendedState\0UnknownState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__Device[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   74, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,
       7,    0,   69,    2, 0x06 /* Public */,
       8,    0,   70,    2, 0x06 /* Public */,
       9,    0,   71,    2, 0x06 /* Public */,
      10,    0,   72,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   73,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, 0x80000000 | 13, 0x00495009,
      14, QMetaType::QString, 0x00495001,
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::UInt, 0x00495001,
      18, 0x80000000 | 19, 0x00495009,
      20, QMetaType::UInt, 0x00495103,
      21, QMetaType::Bool, 0x00495103,
      22, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    5,  115,

 // enum data: key, value
      23, uint(QPulseAudio::Device::InvalidState),
      24, uint(QPulseAudio::Device::RunningState),
      25, uint(QPulseAudio::Device::IdleState),
      26, uint(QPulseAudio::Device::SuspendedState),
      27, uint(QPulseAudio::Device::UnknownState),

       0        // eod
};

void QPulseAudio::Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->descriptionChanged(); break;
        case 3: _t->formFactorChanged(); break;
        case 4: _t->cardIndexChanged(); break;
        case 5: _t->portsChanged(); break;
        case 6: _t->activePortIndexChanged(); break;
        case 7: _t->defaultChanged(); break;
        case 8: _t->virtualDeviceChanged(); break;
        case 9: _t->switchStreams(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::descriptionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::formFactorChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::cardIndexChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::portsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::activePortIndexChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::defaultChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Device::virtualDeviceChanged)) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->formFactor(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->cardIndex(); break;
        case 5: *reinterpret_cast< QList<QObject*>*>(_v) = _t->ports(); break;
        case 6: *reinterpret_cast< quint32*>(_v) = _t->activePortIndex(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isDefault(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isVirtualDevice(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Device *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 6: _t->setActivePortIndex(*reinterpret_cast< quint32*>(_v)); break;
        case 7: _t->setDefault(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::Device::staticMetaObject = { {
    QMetaObject::SuperData::link<VolumeObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__Device.data,
    qt_meta_data_QPulseAudio__Device,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__Device.stringdata0))
        return static_cast<void*>(this);
    return VolumeObject::qt_metacast(_clname);
}

int QPulseAudio::Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VolumeObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::Device::stateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::Device::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::Device::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::Device::formFactorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QPulseAudio::Device::cardIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QPulseAudio::Device::portsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QPulseAudio::Device::activePortIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void QPulseAudio::Device::defaultChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void QPulseAudio::Device::virtualDeviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
