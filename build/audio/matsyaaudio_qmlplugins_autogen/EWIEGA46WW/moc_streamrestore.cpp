/****************************************************************************
** Meta object code from reading C++ file 'streamrestore.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/streamrestore.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamrestore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__StreamRestore_t {
    QByteArrayData data[21];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__StreamRestore_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__StreamRestore_t qt_meta_stringdata_QPulseAudio__StreamRestore = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPulseAudio::StreamRestore"
QT_MOC_LITERAL(1, 27, 11), // "nameChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 13), // "deviceChanged"
QT_MOC_LITERAL(4, 54, 13), // "volumeChanged"
QT_MOC_LITERAL(5, 68, 12), // "mutedChanged"
QT_MOC_LITERAL(6, 81, 15), // "channelsChanged"
QT_MOC_LITERAL(7, 97, 21), // "channelVolumesChanged"
QT_MOC_LITERAL(8, 119, 18), // "deviceIndexChanged"
QT_MOC_LITERAL(9, 138, 16), // "setChannelVolume"
QT_MOC_LITERAL(10, 155, 7), // "channel"
QT_MOC_LITERAL(11, 163, 6), // "volume"
QT_MOC_LITERAL(12, 170, 4), // "name"
QT_MOC_LITERAL(13, 175, 6), // "device"
QT_MOC_LITERAL(14, 182, 5), // "muted"
QT_MOC_LITERAL(15, 188, 9), // "hasVolume"
QT_MOC_LITERAL(16, 198, 14), // "volumeWritable"
QT_MOC_LITERAL(17, 213, 8), // "channels"
QT_MOC_LITERAL(18, 222, 14), // "channelVolumes"
QT_MOC_LITERAL(19, 237, 12), // "QList<qreal>"
QT_MOC_LITERAL(20, 250, 11) // "deviceIndex"

    },
    "QPulseAudio::StreamRestore\0nameChanged\0"
    "\0deviceChanged\0volumeChanged\0mutedChanged\0"
    "channelsChanged\0channelVolumesChanged\0"
    "deviceIndexChanged\0setChannelVolume\0"
    "channel\0volume\0name\0device\0muted\0"
    "hasVolume\0volumeWritable\0channels\0"
    "channelVolumes\0QList<qreal>\0deviceIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__StreamRestore[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       9,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    2,   61,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::LongLong,   10,   11,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495001,
      13, QMetaType::QString, 0x00495103,
      11, QMetaType::LongLong, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::Bool, 0x00095401,
      16, QMetaType::Bool, 0x00095401,
      17, QMetaType::QStringList, 0x00495001,
      18, 0x80000000 | 19, 0x00495009,
      20, QMetaType::UInt, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       0,
       0,
       4,
       5,
       6,

       0        // eod
};

void QPulseAudio::StreamRestore::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamRestore *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->deviceChanged(); break;
        case 2: _t->volumeChanged(); break;
        case 3: _t->mutedChanged(); break;
        case 4: _t->channelsChanged(); break;
        case 5: _t->channelVolumesChanged(); break;
        case 6: _t->deviceIndexChanged(); break;
        case 7: _t->setChannelVolume((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::deviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::volumeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::mutedChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::channelsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::channelVolumesChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StreamRestore::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamRestore::deviceIndexChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<qreal> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StreamRestore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->device(); break;
        case 2: *reinterpret_cast< qint64*>(_v) = _t->volume(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasVolume(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isVolumeWritable(); break;
        case 6: *reinterpret_cast< QStringList*>(_v) = _t->channels(); break;
        case 7: *reinterpret_cast< QList<qreal>*>(_v) = _t->channelVolumes(); break;
        case 8: *reinterpret_cast< quint32*>(_v) = _t->deviceIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StreamRestore *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDevice(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setVolume(*reinterpret_cast< qint64*>(_v)); break;
        case 3: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setDeviceIndex(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::StreamRestore::staticMetaObject = { {
    QMetaObject::SuperData::link<PulseObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__StreamRestore.data,
    qt_meta_data_QPulseAudio__StreamRestore,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::StreamRestore::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::StreamRestore::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__StreamRestore.stringdata0))
        return static_cast<void*>(this);
    return PulseObject::qt_metacast(_clname);
}

int QPulseAudio::StreamRestore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PulseObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QPulseAudio::StreamRestore::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::StreamRestore::deviceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::StreamRestore::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::StreamRestore::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QPulseAudio::StreamRestore::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QPulseAudio::StreamRestore::channelVolumesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QPulseAudio::StreamRestore::deviceIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
