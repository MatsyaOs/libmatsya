/****************************************************************************
** Meta object code from reading C++ file 'declarativeadapter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../bluez/declarativeadapter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'declarativeadapter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DeclarativeAdapter_t {
    QByteArrayData data[47];
    char stringdata0[678];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DeclarativeAdapter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DeclarativeAdapter_t qt_meta_stringdata_DeclarativeAdapter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "DeclarativeAdapter"
QT_MOC_LITERAL(1, 19, 14), // "adapterRemoved"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 19), // "DeclarativeAdapter*"
QT_MOC_LITERAL(4, 55, 7), // "adapter"
QT_MOC_LITERAL(5, 63, 14), // "adapterChanged"
QT_MOC_LITERAL(6, 78, 11), // "nameChanged"
QT_MOC_LITERAL(7, 90, 4), // "name"
QT_MOC_LITERAL(8, 95, 17), // "systemNameChanged"
QT_MOC_LITERAL(9, 113, 19), // "adapterClassChanged"
QT_MOC_LITERAL(10, 133, 12), // "adapterClass"
QT_MOC_LITERAL(11, 146, 14), // "poweredChanged"
QT_MOC_LITERAL(12, 161, 7), // "powered"
QT_MOC_LITERAL(13, 169, 19), // "discoverableChanged"
QT_MOC_LITERAL(14, 189, 12), // "discoverable"
QT_MOC_LITERAL(15, 202, 26), // "discoverableTimeoutChanged"
QT_MOC_LITERAL(16, 229, 7), // "timeout"
QT_MOC_LITERAL(17, 237, 15), // "pairableChanged"
QT_MOC_LITERAL(18, 253, 8), // "pairable"
QT_MOC_LITERAL(19, 262, 22), // "pairableTimeoutChanged"
QT_MOC_LITERAL(20, 285, 18), // "discoveringChanged"
QT_MOC_LITERAL(21, 304, 11), // "discovering"
QT_MOC_LITERAL(22, 316, 12), // "uuidsChanged"
QT_MOC_LITERAL(23, 329, 5), // "uuids"
QT_MOC_LITERAL(24, 335, 15), // "modaliasChanged"
QT_MOC_LITERAL(25, 351, 8), // "modalias"
QT_MOC_LITERAL(26, 360, 11), // "deviceFound"
QT_MOC_LITERAL(27, 372, 18), // "DeclarativeDevice*"
QT_MOC_LITERAL(28, 391, 6), // "device"
QT_MOC_LITERAL(29, 398, 13), // "deviceRemoved"
QT_MOC_LITERAL(30, 412, 13), // "deviceChanged"
QT_MOC_LITERAL(31, 426, 14), // "devicesChanged"
QT_MOC_LITERAL(32, 441, 35), // "QQmlListProperty<DeclarativeD..."
QT_MOC_LITERAL(33, 477, 7), // "devices"
QT_MOC_LITERAL(34, 485, 16), // "deviceForAddress"
QT_MOC_LITERAL(35, 502, 7), // "address"
QT_MOC_LITERAL(36, 510, 14), // "startDiscovery"
QT_MOC_LITERAL(37, 525, 21), // "BluezQt::PendingCall*"
QT_MOC_LITERAL(38, 547, 13), // "stopDiscovery"
QT_MOC_LITERAL(39, 561, 12), // "removeDevice"
QT_MOC_LITERAL(40, 574, 15), // "slotDeviceAdded"
QT_MOC_LITERAL(41, 590, 18), // "BluezQt::DevicePtr"
QT_MOC_LITERAL(42, 609, 17), // "slotDeviceRemoved"
QT_MOC_LITERAL(43, 627, 3), // "ubi"
QT_MOC_LITERAL(44, 631, 10), // "systemName"
QT_MOC_LITERAL(45, 642, 19), // "discoverableTimeout"
QT_MOC_LITERAL(46, 662, 15) // "pairableTimeout"

    },
    "DeclarativeAdapter\0adapterRemoved\0\0"
    "DeclarativeAdapter*\0adapter\0adapterChanged\0"
    "nameChanged\0name\0systemNameChanged\0"
    "adapterClassChanged\0adapterClass\0"
    "poweredChanged\0powered\0discoverableChanged\0"
    "discoverable\0discoverableTimeoutChanged\0"
    "timeout\0pairableChanged\0pairable\0"
    "pairableTimeoutChanged\0discoveringChanged\0"
    "discovering\0uuidsChanged\0uuids\0"
    "modaliasChanged\0modalias\0deviceFound\0"
    "DeclarativeDevice*\0device\0deviceRemoved\0"
    "deviceChanged\0devicesChanged\0"
    "QQmlListProperty<DeclarativeDevice>\0"
    "devices\0deviceForAddress\0address\0"
    "startDiscovery\0BluezQt::PendingCall*\0"
    "stopDiscovery\0removeDevice\0slotDeviceAdded\0"
    "BluezQt::DevicePtr\0slotDeviceRemoved\0"
    "ubi\0systemName\0discoverableTimeout\0"
    "pairableTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DeclarativeAdapter[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      14,  194, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x06 /* Public */,
       5,    1,  132,    2, 0x06 /* Public */,
       6,    1,  135,    2, 0x06 /* Public */,
       8,    1,  138,    2, 0x06 /* Public */,
       9,    1,  141,    2, 0x06 /* Public */,
      11,    1,  144,    2, 0x06 /* Public */,
      13,    1,  147,    2, 0x06 /* Public */,
      15,    1,  150,    2, 0x06 /* Public */,
      17,    1,  153,    2, 0x06 /* Public */,
      19,    1,  156,    2, 0x06 /* Public */,
      20,    1,  159,    2, 0x06 /* Public */,
      22,    1,  162,    2, 0x06 /* Public */,
      24,    1,  165,    2, 0x06 /* Public */,
      26,    1,  168,    2, 0x06 /* Public */,
      29,    1,  171,    2, 0x06 /* Public */,
      30,    1,  174,    2, 0x06 /* Public */,
      31,    1,  177,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      34,    1,  180,    2, 0x0a /* Public */,
      36,    0,  183,    2, 0x0a /* Public */,
      38,    0,  184,    2, 0x0a /* Public */,
      39,    1,  185,    2, 0x0a /* Public */,
      40,    1,  188,    2, 0x08 /* Private */,
      42,    1,  191,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::UInt,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void, QMetaType::UInt,   16,
    QMetaType::Void, QMetaType::Bool,   21,
    QMetaType::Void, QMetaType::QStringList,   23,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 32,   33,

 // slots: parameters
    0x80000000 | 27, QMetaType::QString,   35,
    0x80000000 | 37,
    0x80000000 | 37,
    0x80000000 | 37, 0x80000000 | 27,   28,
    QMetaType::Void, 0x80000000 | 41,   28,
    QMetaType::Void, 0x80000000 | 41,   28,

 // properties: name, type, flags
      43, QMetaType::QString, 0x00095401,
      35, QMetaType::QString, 0x00095401,
       7, QMetaType::QString, 0x00495103,
      44, QMetaType::QString, 0x00495001,
      10, QMetaType::UInt, 0x00495001,
      12, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      45, QMetaType::UInt, 0x00495103,
      18, QMetaType::Bool, 0x00495103,
      46, QMetaType::UInt, 0x00495103,
      21, QMetaType::Bool, 0x00495001,
      23, QMetaType::QStringList, 0x00495001,
      25, QMetaType::QString, 0x00495001,
      33, 0x80000000 | 32, 0x00495009,

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
      16,

       0        // eod
};

void DeclarativeAdapter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeclarativeAdapter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->adapterRemoved((*reinterpret_cast< DeclarativeAdapter*(*)>(_a[1]))); break;
        case 1: _t->adapterChanged((*reinterpret_cast< DeclarativeAdapter*(*)>(_a[1]))); break;
        case 2: _t->nameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->systemNameChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->adapterClassChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 5: _t->poweredChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->discoverableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->discoverableTimeoutChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 8: _t->pairableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->pairableTimeoutChanged((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 10: _t->discoveringChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->uuidsChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 12: _t->modaliasChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->deviceFound((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1]))); break;
        case 14: _t->deviceRemoved((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1]))); break;
        case 15: _t->deviceChanged((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1]))); break;
        case 16: _t->devicesChanged((*reinterpret_cast< QQmlListProperty<DeclarativeDevice>(*)>(_a[1]))); break;
        case 17: { DeclarativeDevice* _r = _t->deviceForAddress((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< DeclarativeDevice**>(_a[0]) = std::move(_r); }  break;
        case 18: { BluezQt::PendingCall* _r = _t->startDiscovery();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 19: { BluezQt::PendingCall* _r = _t->stopDiscovery();
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 20: { BluezQt::PendingCall* _r = _t->removeDevice((*reinterpret_cast< DeclarativeDevice*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< BluezQt::PendingCall**>(_a[0]) = std::move(_r); }  break;
        case 21: _t->slotDeviceAdded((*reinterpret_cast< BluezQt::DevicePtr(*)>(_a[1]))); break;
        case 22: _t->slotDeviceRemoved((*reinterpret_cast< BluezQt::DevicePtr(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeAdapter* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DeclarativeAdapter* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeclarativeAdapter::*)(DeclarativeAdapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::adapterRemoved)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(DeclarativeAdapter * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::adapterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::systemNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::adapterClassChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::poweredChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::discoverableChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::discoverableTimeoutChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::pairableChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(quint32 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::pairableTimeoutChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::discoveringChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::uuidsChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::modaliasChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(DeclarativeDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::deviceFound)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(DeclarativeDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::deviceRemoved)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(DeclarativeDevice * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::deviceChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (DeclarativeAdapter::*)(QQmlListProperty<DeclarativeDevice> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DeclarativeAdapter::devicesChanged)) {
                *result = 16;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DeclarativeAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->ubi(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->systemName(); break;
        case 4: *reinterpret_cast< quint32*>(_v) = _t->adapterClass(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isPowered(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isDiscoverable(); break;
        case 7: *reinterpret_cast< quint32*>(_v) = _t->discoverableTimeout(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isPairable(); break;
        case 9: *reinterpret_cast< quint32*>(_v) = _t->pairableTimeout(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isDiscovering(); break;
        case 11: *reinterpret_cast< QStringList*>(_v) = _t->uuids(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->modalias(); break;
        case 13: *reinterpret_cast< QQmlListProperty<DeclarativeDevice>*>(_v) = _t->devices(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DeclarativeAdapter *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPowered(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDiscoverable(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDiscoverableTimeout(*reinterpret_cast< quint32*>(_v)); break;
        case 8: _t->setPairable(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setPairableTimeout(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject DeclarativeAdapter::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DeclarativeAdapter.data,
    qt_meta_data_DeclarativeAdapter,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DeclarativeAdapter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeclarativeAdapter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DeclarativeAdapter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DeclarativeAdapter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void DeclarativeAdapter::adapterRemoved(DeclarativeAdapter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DeclarativeAdapter::adapterChanged(DeclarativeAdapter * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DeclarativeAdapter::nameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DeclarativeAdapter::systemNameChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DeclarativeAdapter::adapterClassChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DeclarativeAdapter::poweredChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DeclarativeAdapter::discoverableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DeclarativeAdapter::discoverableTimeoutChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DeclarativeAdapter::pairableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DeclarativeAdapter::pairableTimeoutChanged(quint32 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DeclarativeAdapter::discoveringChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void DeclarativeAdapter::uuidsChanged(const QStringList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void DeclarativeAdapter::modaliasChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void DeclarativeAdapter::deviceFound(DeclarativeDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void DeclarativeAdapter::deviceRemoved(DeclarativeDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void DeclarativeAdapter::deviceChanged(DeclarativeDevice * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void DeclarativeAdapter::devicesChanged(QQmlListProperty<DeclarativeDevice> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
