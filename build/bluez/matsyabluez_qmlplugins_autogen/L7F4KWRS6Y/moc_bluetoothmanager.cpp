/****************************************************************************
** Meta object code from reading C++ file 'bluetoothmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../bluez/applet/bluetoothmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BluetoothManager_t {
    QByteArrayData data[30];
    char stringdata0[394];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothManager_t qt_meta_stringdata_BluetoothManager = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BluetoothManager"
QT_MOC_LITERAL(1, 17, 14), // "showPairDialog"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "name"
QT_MOC_LITERAL(4, 38, 3), // "pin"
QT_MOC_LITERAL(5, 42, 10), // "pairFailed"
QT_MOC_LITERAL(6, 53, 10), // "deviceType"
QT_MOC_LITERAL(7, 64, 13), // "connectFailed"
QT_MOC_LITERAL(8, 78, 15), // "onInitJobResult"
QT_MOC_LITERAL(9, 94, 24), // "BluezQt::InitManagerJob*"
QT_MOC_LITERAL(10, 119, 3), // "job"
QT_MOC_LITERAL(11, 123, 18), // "operationalChanged"
QT_MOC_LITERAL(12, 142, 11), // "operational"
QT_MOC_LITERAL(13, 154, 21), // "confirmationRequested"
QT_MOC_LITERAL(14, 176, 7), // "passkey"
QT_MOC_LITERAL(15, 184, 18), // "BluezQt::Request<>"
QT_MOC_LITERAL(16, 203, 3), // "req"
QT_MOC_LITERAL(17, 207, 15), // "pairingFinished"
QT_MOC_LITERAL(18, 223, 21), // "BluezQt::PendingCall*"
QT_MOC_LITERAL(19, 245, 4), // "call"
QT_MOC_LITERAL(20, 250, 15), // "connectFinished"
QT_MOC_LITERAL(21, 266, 7), // "setName"
QT_MOC_LITERAL(22, 274, 15), // "connectToDevice"
QT_MOC_LITERAL(23, 290, 7), // "address"
QT_MOC_LITERAL(24, 298, 23), // "requestParingConnection"
QT_MOC_LITERAL(25, 322, 18), // "confirmMatchButton"
QT_MOC_LITERAL(26, 341, 5), // "match"
QT_MOC_LITERAL(27, 347, 16), // "deviceDisconnect"
QT_MOC_LITERAL(28, 364, 13), // "deviceRemoved"
QT_MOC_LITERAL(29, 378, 15) // "stopMediaPlayer"

    },
    "BluetoothManager\0showPairDialog\0\0name\0"
    "pin\0pairFailed\0deviceType\0connectFailed\0"
    "onInitJobResult\0BluezQt::InitManagerJob*\0"
    "job\0operationalChanged\0operational\0"
    "confirmationRequested\0passkey\0"
    "BluezQt::Request<>\0req\0pairingFinished\0"
    "BluezQt::PendingCall*\0call\0connectFinished\0"
    "setName\0connectToDevice\0address\0"
    "requestParingConnection\0confirmMatchButton\0"
    "match\0deviceDisconnect\0deviceRemoved\0"
    "stopMediaPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       5,    2,   94,    2, 0x06 /* Public */,
       7,    2,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  104,    2, 0x08 /* Private */,
      11,    1,  107,    2, 0x08 /* Private */,
      13,    2,  110,    2, 0x08 /* Private */,
      17,    1,  115,    2, 0x08 /* Private */,
      20,    1,  118,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      21,    1,  121,    2, 0x02 /* Public */,
      22,    1,  124,    2, 0x02 /* Public */,
      24,    1,  127,    2, 0x02 /* Public */,
      25,    1,  130,    2, 0x02 /* Public */,
      27,    1,  133,    2, 0x02 /* Public */,
      28,    1,  136,    2, 0x02 /* Public */,
      29,    1,  139,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 18,   19,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::Bool,   26,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void BluetoothManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BluetoothManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPairDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->pairFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 2: _t->connectFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 3: _t->onInitJobResult((*reinterpret_cast< BluezQt::InitManagerJob*(*)>(_a[1]))); break;
        case 4: _t->operationalChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->confirmationRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const BluezQt::Request<>(*)>(_a[2]))); break;
        case 6: _t->pairingFinished((*reinterpret_cast< BluezQt::PendingCall*(*)>(_a[1]))); break;
        case 7: _t->connectFinished((*reinterpret_cast< BluezQt::PendingCall*(*)>(_a[1]))); break;
        case 8: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->connectToDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->requestParingConnection((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->confirmMatchButton((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 12: _t->deviceDisconnect((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->stopMediaPlayer((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BluetoothManager::*)(const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothManager::showPairDialog)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BluetoothManager::*)(const QString , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothManager::pairFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BluetoothManager::*)(const QString , const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BluetoothManager::connectFailed)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BluetoothManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BluetoothManager.data,
    qt_meta_data_BluetoothManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BluetoothManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BluetoothManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void BluetoothManager::showPairDialog(const QString _t1, const QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothManager::pairFailed(const QString _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothManager::connectFailed(const QString _t1, const int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
