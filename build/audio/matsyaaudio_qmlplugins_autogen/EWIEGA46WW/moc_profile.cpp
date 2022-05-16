/****************************************************************************
** Meta object code from reading C++ file 'profile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/profile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__Profile_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__Profile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__Profile_t qt_meta_stringdata_QPulseAudio__Profile = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QPulseAudio::Profile"
QT_MOC_LITERAL(1, 21, 11), // "nameChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 18), // "descriptionChanged"
QT_MOC_LITERAL(4, 53, 15), // "priorityChanged"
QT_MOC_LITERAL(5, 69, 19), // "availabilityChanged"
QT_MOC_LITERAL(6, 89, 4), // "name"
QT_MOC_LITERAL(7, 94, 11), // "description"
QT_MOC_LITERAL(8, 106, 8), // "priority"
QT_MOC_LITERAL(9, 115, 12), // "availability"
QT_MOC_LITERAL(10, 128, 12), // "Availability"
QT_MOC_LITERAL(11, 141, 7), // "Unknown"
QT_MOC_LITERAL(12, 149, 9), // "Available"
QT_MOC_LITERAL(13, 159, 11) // "Unavailable"

    },
    "QPulseAudio::Profile\0nameChanged\0\0"
    "descriptionChanged\0priorityChanged\0"
    "availabilityChanged\0name\0description\0"
    "priority\0availability\0Availability\0"
    "Unknown\0Available\0Unavailable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__Profile[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       1,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QString, 0x00495001,
       7, QMetaType::QString, 0x00495001,
       8, QMetaType::UInt, 0x00495001,
       9, 0x80000000 | 10, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    3,   59,

 // enum data: key, value
      11, uint(QPulseAudio::Profile::Unknown),
      12, uint(QPulseAudio::Profile::Available),
      13, uint(QPulseAudio::Profile::Unavailable),

       0        // eod
};

void QPulseAudio::Profile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Profile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->priorityChanged(); break;
        case 3: _t->availabilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Profile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Profile::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Profile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Profile::descriptionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Profile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Profile::priorityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Profile::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Profile::availabilityChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Profile *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->priority(); break;
        case 3: *reinterpret_cast< Availability*>(_v) = _t->availability(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::Profile::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__Profile.data,
    qt_meta_data_QPulseAudio__Profile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::Profile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::Profile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__Profile.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPulseAudio::Profile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::Profile::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::Profile::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::Profile::priorityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::Profile::availabilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
