/****************************************************************************
** Meta object code from reading C++ file 'stream.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/stream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__Stream_t {
    QByteArrayData data[13];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__Stream_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__Stream_t qt_meta_stringdata_QPulseAudio__Stream = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QPulseAudio::Stream"
QT_MOC_LITERAL(1, 20, 11), // "nameChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "clientChanged"
QT_MOC_LITERAL(4, 47, 20), // "virtualStreamChanged"
QT_MOC_LITERAL(5, 68, 18), // "deviceIndexChanged"
QT_MOC_LITERAL(6, 87, 13), // "corkedChanged"
QT_MOC_LITERAL(7, 101, 4), // "name"
QT_MOC_LITERAL(8, 106, 6), // "client"
QT_MOC_LITERAL(9, 113, 20), // "QPulseAudio::Client*"
QT_MOC_LITERAL(10, 134, 13), // "virtualStream"
QT_MOC_LITERAL(11, 148, 11), // "deviceIndex"
QT_MOC_LITERAL(12, 160, 6) // "corked"

    },
    "QPulseAudio::Stream\0nameChanged\0\0"
    "clientChanged\0virtualStreamChanged\0"
    "deviceIndexChanged\0corkedChanged\0name\0"
    "client\0QPulseAudio::Client*\0virtualStream\0"
    "deviceIndex\0corked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__Stream[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495001,
       8, 0x80000000 | 9, 0x00495009,
      10, QMetaType::Bool, 0x00495001,
      11, QMetaType::UInt, 0x00495103,
      12, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void QPulseAudio::Stream::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Stream *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->clientChanged(); break;
        case 2: _t->virtualStreamChanged(); break;
        case 3: _t->deviceIndexChanged(); break;
        case 4: _t->corkedChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Stream::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Stream::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::clientChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Stream::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::virtualStreamChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Stream::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::deviceIndexChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Stream::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Stream::corkedChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QPulseAudio::Client* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Stream *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QPulseAudio::Client**>(_v) = _t->client(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVirtualStream(); break;
        case 3: *reinterpret_cast< quint32*>(_v) = _t->deviceIndex(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isCorked(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Stream *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setDeviceIndex(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::Stream::staticMetaObject = { {
    QMetaObject::SuperData::link<VolumeObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__Stream.data,
    qt_meta_data_QPulseAudio__Stream,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::Stream::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::Stream::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__Stream.stringdata0))
        return static_cast<void*>(this);
    return VolumeObject::qt_metacast(_clname);
}

int QPulseAudio::Stream::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = VolumeObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::Stream::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::Stream::clientChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::Stream::virtualStreamChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::Stream::deviceIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QPulseAudio::Stream::corkedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
