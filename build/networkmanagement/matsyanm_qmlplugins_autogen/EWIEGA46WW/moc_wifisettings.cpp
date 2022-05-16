/****************************************************************************
** Meta object code from reading C++ file 'wifisettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/wifisettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wifisettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WifiSettings_t {
    QByteArrayData data[17];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WifiSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WifiSettings_t qt_meta_stringdata_WifiSettings = {
    {
QT_MOC_LITERAL(0, 0, 12), // "WifiSettings"
QT_MOC_LITERAL(1, 13, 21), // "getConnectionSettings"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 10), // "connection"
QT_MOC_LITERAL(4, 47, 4), // "type"
QT_MOC_LITERAL(5, 52, 23), // "getActiveConnectionInfo"
QT_MOC_LITERAL(6, 76, 20), // "addConnectionFromQML"
QT_MOC_LITERAL(7, 97, 6), // "QMLmap"
QT_MOC_LITERAL(8, 104, 23), // "updateConnectionFromQML"
QT_MOC_LITERAL(9, 128, 4), // "path"
QT_MOC_LITERAL(10, 133, 3), // "map"
QT_MOC_LITERAL(11, 137, 20), // "getAccessPointDevice"
QT_MOC_LITERAL(12, 158, 24), // "getAccessPointConnection"
QT_MOC_LITERAL(13, 183, 18), // "addOtherConnection"
QT_MOC_LITERAL(14, 202, 4), // "ssid"
QT_MOC_LITERAL(15, 207, 8), // "userName"
QT_MOC_LITERAL(16, 216, 3) // "pwd"

    },
    "WifiSettings\0getConnectionSettings\0\0"
    "connection\0type\0getActiveConnectionInfo\0"
    "addConnectionFromQML\0QMLmap\0"
    "updateConnectionFromQML\0path\0map\0"
    "getAccessPointDevice\0getAccessPointConnection\0"
    "addOtherConnection\0ssid\0userName\0pwd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WifiSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x02 /* Public */,
       5,    1,   54,    2, 0x02 /* Public */,
       6,    1,   57,    2, 0x02 /* Public */,
       8,    2,   60,    2, 0x02 /* Public */,
      11,    0,   65,    2, 0x02 /* Public */,
      12,    0,   66,    2, 0x02 /* Public */,
      13,    4,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::QVariantMap, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariantMap,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariantMap,    9,   10,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   14,   15,   16,    4,

       0        // eod
};

void WifiSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WifiSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVariantMap _r = _t->getConnectionSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVariantMap _r = _t->getActiveConnectionInfo((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->addConnectionFromQML((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 3: _t->updateConnectionFromQML((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2]))); break;
        case 4: { QString _r = _t->getAccessPointDevice();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { QString _r = _t->getAccessPointConnection();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->addOtherConnection((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WifiSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WifiSettings.data,
    qt_meta_data_WifiSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WifiSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WifiSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WifiSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WifiSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
