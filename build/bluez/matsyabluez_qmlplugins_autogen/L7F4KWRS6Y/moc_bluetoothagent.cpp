/****************************************************************************
** Meta object code from reading C++ file 'bluetoothagent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../bluez/applet/bluetoothagent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothagent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BluetoothAgent_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothAgent_t qt_meta_stringdata_BluetoothAgent = {
    {
QT_MOC_LITERAL(0, 0, 14), // "BluetoothAgent"
QT_MOC_LITERAL(1, 15, 12), // "pinRequested"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "pin"
QT_MOC_LITERAL(4, 33, 21), // "confirmationRequested"
QT_MOC_LITERAL(5, 55, 7), // "passkey"
QT_MOC_LITERAL(6, 63, 18), // "BluezQt::Request<>"
QT_MOC_LITERAL(7, 82, 3) // "req"

    },
    "BluetoothAgent\0pinRequested\0\0pin\0"
    "confirmationRequested\0passkey\0"
    "BluezQt::Request<>\0req"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothAgent[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,

       0        // eod
};

void BluetoothAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothAgent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pinRequested((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->confirmationRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const BluezQt::Request<>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothAgent::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::pinRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothAgent::*)(const QString & , const BluezQt::Request<> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothAgent::confirmationRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BluetoothAgent::staticMetaObject = { {
    QMetaObject::SuperData::link<BluezQt::Agent::staticMetaObject>(),
    qt_meta_stringdata_BluetoothAgent.data,
    qt_meta_data_BluetoothAgent,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothAgent.stringdata0))
        return static_cast<void*>(this);
    return BluezQt::Agent::qt_metacast(_clname);
}

int BluetoothAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BluezQt::Agent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BluetoothAgent::pinRequested(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothAgent::confirmationRequested(const QString & _t1, const BluezQt::Request<> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
