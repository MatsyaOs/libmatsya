/****************************************************************************
** Meta object code from reading C++ file 'enabledconnections.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/enabledconnections.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enabledconnections.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EnabledConnections_t {
    QByteArrayData data[13];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EnabledConnections_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EnabledConnections_t qt_meta_stringdata_EnabledConnections = {
    {
QT_MOC_LITERAL(0, 0, 18), // "EnabledConnections"
QT_MOC_LITERAL(1, 19, 17), // "networkingEnabled"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "enabled"
QT_MOC_LITERAL(4, 46, 15), // "wirelessEnabled"
QT_MOC_LITERAL(5, 62, 17), // "wirelessHwEnabled"
QT_MOC_LITERAL(6, 80, 11), // "wwanEnabled"
QT_MOC_LITERAL(7, 92, 13), // "wwanHwEnabled"
QT_MOC_LITERAL(8, 106, 19), // "onNetworkingEnabled"
QT_MOC_LITERAL(9, 126, 17), // "onWirelessEnabled"
QT_MOC_LITERAL(10, 144, 19), // "onWirelessHwEnabled"
QT_MOC_LITERAL(11, 164, 13), // "onWwanEnabled"
QT_MOC_LITERAL(12, 178, 15) // "onWwanHwEnabled"

    },
    "EnabledConnections\0networkingEnabled\0"
    "\0enabled\0wirelessEnabled\0wirelessHwEnabled\0"
    "wwanEnabled\0wwanHwEnabled\0onNetworkingEnabled\0"
    "onWirelessEnabled\0onWirelessHwEnabled\0"
    "onWwanEnabled\0onWwanHwEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EnabledConnections[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   94, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       6,    1,   73,    2, 0x06 /* Public */,
       7,    1,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   79,    2, 0x0a /* Public */,
       9,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    1,   88,    2, 0x0a /* Public */,
      12,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

 // properties: name, type, flags
       1, QMetaType::Bool, 0x00495001,
       4, QMetaType::Bool, 0x00495001,
       5, QMetaType::Bool, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

void EnabledConnections::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EnabledConnections *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->networkingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->wirelessEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->wirelessHwEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->wwanEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->wwanHwEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onNetworkingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onWirelessEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onWirelessHwEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onWwanEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onWwanHwEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EnabledConnections::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnabledConnections::networkingEnabled)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EnabledConnections::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnabledConnections::wirelessEnabled)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EnabledConnections::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnabledConnections::wirelessHwEnabled)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EnabledConnections::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnabledConnections::wwanEnabled)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EnabledConnections::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EnabledConnections::wwanHwEnabled)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EnabledConnections *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isNetworkingEnabled(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isWirelessEnabled(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isWirelessHwEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isWwanEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isWwanHwEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject EnabledConnections::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_EnabledConnections.data,
    qt_meta_data_EnabledConnections,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EnabledConnections::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EnabledConnections::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EnabledConnections.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int EnabledConnections::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void EnabledConnections::networkingEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EnabledConnections::wirelessEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EnabledConnections::wirelessHwEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void EnabledConnections::wwanEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EnabledConnections::wwanHwEnabled(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
