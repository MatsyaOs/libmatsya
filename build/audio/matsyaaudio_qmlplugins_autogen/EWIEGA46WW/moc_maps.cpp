/****************************************************************************
** Meta object code from reading C++ file 'maps.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/maps.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maps.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__MapBaseQObject_t {
    QByteArrayData data[7];
    char stringdata0[81];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__MapBaseQObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__MapBaseQObject_t qt_meta_stringdata_QPulseAudio__MapBaseQObject = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QPulseAudio::MapBaseQObject"
QT_MOC_LITERAL(1, 28, 14), // "aboutToBeAdded"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 5), // "index"
QT_MOC_LITERAL(4, 50, 5), // "added"
QT_MOC_LITERAL(5, 56, 16), // "aboutToBeRemoved"
QT_MOC_LITERAL(6, 73, 7) // "removed"

    },
    "QPulseAudio::MapBaseQObject\0aboutToBeAdded\0"
    "\0index\0added\0aboutToBeRemoved\0removed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__MapBaseQObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,
       6,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QPulseAudio::MapBaseQObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapBaseQObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToBeAdded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->added((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->aboutToBeRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->removed((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MapBaseQObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapBaseQObject::aboutToBeAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MapBaseQObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapBaseQObject::added)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MapBaseQObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapBaseQObject::aboutToBeRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MapBaseQObject::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MapBaseQObject::removed)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::MapBaseQObject::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__MapBaseQObject.data,
    qt_meta_data_QPulseAudio__MapBaseQObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::MapBaseQObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::MapBaseQObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__MapBaseQObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPulseAudio::MapBaseQObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void QPulseAudio::MapBaseQObject::aboutToBeAdded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPulseAudio::MapBaseQObject::added(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPulseAudio::MapBaseQObject::aboutToBeRemoved(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPulseAudio::MapBaseQObject::removed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
