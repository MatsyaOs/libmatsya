/****************************************************************************
** Meta object code from reading C++ file 'volumeobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/volumeobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumeobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__VolumeObject_t {
    QByteArrayData data[19];
    char stringdata0[267];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__VolumeObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__VolumeObject_t qt_meta_stringdata_QPulseAudio__VolumeObject = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QPulseAudio::VolumeObject"
QT_MOC_LITERAL(1, 26, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "mutedChanged"
QT_MOC_LITERAL(4, 54, 16), // "hasVolumeChanged"
QT_MOC_LITERAL(5, 71, 23), // "isVolumeWritableChanged"
QT_MOC_LITERAL(6, 95, 15), // "channelsChanged"
QT_MOC_LITERAL(7, 111, 18), // "rawChannelsChanged"
QT_MOC_LITERAL(8, 130, 21), // "channelVolumesChanged"
QT_MOC_LITERAL(9, 152, 16), // "setChannelVolume"
QT_MOC_LITERAL(10, 169, 7), // "channel"
QT_MOC_LITERAL(11, 177, 6), // "volume"
QT_MOC_LITERAL(12, 184, 5), // "muted"
QT_MOC_LITERAL(13, 190, 9), // "hasVolume"
QT_MOC_LITERAL(14, 200, 14), // "volumeWritable"
QT_MOC_LITERAL(15, 215, 8), // "channels"
QT_MOC_LITERAL(16, 224, 11), // "rawChannels"
QT_MOC_LITERAL(17, 236, 14), // "channelVolumes"
QT_MOC_LITERAL(18, 251, 15) // "QVector<qint64>"

    },
    "QPulseAudio::VolumeObject\0volumeChanged\0"
    "\0mutedChanged\0hasVolumeChanged\0"
    "isVolumeWritableChanged\0channelsChanged\0"
    "rawChannelsChanged\0channelVolumesChanged\0"
    "setChannelVolume\0channel\0volume\0muted\0"
    "hasVolume\0volumeWritable\0channels\0"
    "rawChannels\0channelVolumes\0QVector<qint64>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__VolumeObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       7,   66, // properties
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
      11, QMetaType::LongLong, 0x00495103,
      12, QMetaType::Bool, 0x00495103,
      13, QMetaType::Bool, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::QStringList, 0x00495001,
      16, QMetaType::QStringList, 0x00495001,
      17, 0x80000000 | 18, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,

       0        // eod
};

void QPulseAudio::VolumeObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged(); break;
        case 1: _t->mutedChanged(); break;
        case 2: _t->hasVolumeChanged(); break;
        case 3: _t->isVolumeWritableChanged(); break;
        case 4: _t->channelsChanged(); break;
        case 5: _t->rawChannelsChanged(); break;
        case 6: _t->channelVolumesChanged(); break;
        case 7: _t->setChannelVolume((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::mutedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::hasVolumeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::isVolumeWritableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::channelsChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::rawChannelsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (VolumeObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeObject::channelVolumesChanged)) {
                *result = 6;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<qint64> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VolumeObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qint64*>(_v) = _t->volume(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isMuted(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasVolume(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVolumeWritable(); break;
        case 4: *reinterpret_cast< QStringList*>(_v) = _t->channels(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->rawChannels(); break;
        case 6: *reinterpret_cast< QVector<qint64>*>(_v) = _t->channelVolumes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VolumeObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVolume(*reinterpret_cast< qint64*>(_v)); break;
        case 1: _t->setMuted(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setChannelVolumes(*reinterpret_cast< QVector<qint64>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::VolumeObject::staticMetaObject = { {
    QMetaObject::SuperData::link<PulseObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__VolumeObject.data,
    qt_meta_data_QPulseAudio__VolumeObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::VolumeObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::VolumeObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__VolumeObject.stringdata0))
        return static_cast<void*>(this);
    return PulseObject::qt_metacast(_clname);
}

int QPulseAudio::VolumeObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::VolumeObject::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::VolumeObject::mutedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::VolumeObject::hasVolumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::VolumeObject::isVolumeWritableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void QPulseAudio::VolumeObject::channelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void QPulseAudio::VolumeObject::rawChannelsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void QPulseAudio::VolumeObject::channelVolumesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
