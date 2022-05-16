/****************************************************************************
** Meta object code from reading C++ file 'volumemonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/volumemonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volumemonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__VolumeMonitor_t {
    QByteArrayData data[9];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__VolumeMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__VolumeMonitor_t qt_meta_stringdata_QPulseAudio__VolumeMonitor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPulseAudio::VolumeMonitor"
QT_MOC_LITERAL(1, 27, 13), // "volumeChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "targetChanged"
QT_MOC_LITERAL(4, 56, 16), // "availableChanged"
QT_MOC_LITERAL(5, 73, 6), // "target"
QT_MOC_LITERAL(6, 80, 26), // "QPulseAudio::VolumeObject*"
QT_MOC_LITERAL(7, 107, 6), // "volume"
QT_MOC_LITERAL(8, 114, 9) // "available"

    },
    "QPulseAudio::VolumeMonitor\0volumeChanged\0"
    "\0targetChanged\0availableChanged\0target\0"
    "QPulseAudio::VolumeObject*\0volume\0"
    "available"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__VolumeMonitor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,
       7, QMetaType::QReal, 0x00495003,
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       0,
       2,

       0        // eod
};

void QPulseAudio::VolumeMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VolumeMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->volumeChanged(); break;
        case 1: _t->targetChanged(); break;
        case 2: _t->availableChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VolumeMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeMonitor::volumeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VolumeMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeMonitor::targetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VolumeMonitor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&VolumeMonitor::availableChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<VolumeMonitor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPulseAudio::VolumeObject**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->m_volume; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<VolumeMonitor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QPulseAudio::VolumeObject**>(_v)); break;
        case 1:
            if (_t->m_volume != *reinterpret_cast< qreal*>(_v)) {
                _t->m_volume = *reinterpret_cast< qreal*>(_v);
                Q_EMIT _t->volumeChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::VolumeMonitor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__VolumeMonitor.data,
    qt_meta_data_QPulseAudio__VolumeMonitor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::VolumeMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::VolumeMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__VolumeMonitor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPulseAudio::VolumeMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::VolumeMonitor::volumeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::VolumeMonitor::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::VolumeMonitor::availableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
