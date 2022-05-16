/****************************************************************************
** Meta object code from reading C++ file 'enums.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/enums.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enums.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Enums_t {
    QByteArrayData data[34];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Enums_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Enums_t qt_meta_stringdata_Enums = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Enums"
QT_MOC_LITERAL(1, 6, 16), // "ConnectionStatus"
QT_MOC_LITERAL(2, 23, 12), // "UnknownState"
QT_MOC_LITERAL(3, 36, 10), // "Activating"
QT_MOC_LITERAL(4, 47, 9), // "Activated"
QT_MOC_LITERAL(5, 57, 12), // "Deactivating"
QT_MOC_LITERAL(6, 70, 11), // "Deactivated"
QT_MOC_LITERAL(7, 82, 14), // "ConnectionType"
QT_MOC_LITERAL(8, 97, 21), // "UnknownConnectionType"
QT_MOC_LITERAL(9, 119, 4), // "Adsl"
QT_MOC_LITERAL(10, 124, 9), // "Bluetooth"
QT_MOC_LITERAL(11, 134, 4), // "Bond"
QT_MOC_LITERAL(12, 139, 6), // "Bridge"
QT_MOC_LITERAL(13, 146, 4), // "Cdma"
QT_MOC_LITERAL(14, 151, 3), // "Gsm"
QT_MOC_LITERAL(15, 155, 10), // "Infiniband"
QT_MOC_LITERAL(16, 166, 8), // "OLPCMesh"
QT_MOC_LITERAL(17, 175, 5), // "Pppoe"
QT_MOC_LITERAL(18, 181, 4), // "Vlan"
QT_MOC_LITERAL(19, 186, 3), // "Vpn"
QT_MOC_LITERAL(20, 190, 5), // "Wimax"
QT_MOC_LITERAL(21, 196, 5), // "Wired"
QT_MOC_LITERAL(22, 202, 8), // "Wireless"
QT_MOC_LITERAL(23, 211, 12), // "SecurityType"
QT_MOC_LITERAL(24, 224, 15), // "UnknownSecurity"
QT_MOC_LITERAL(25, 240, 12), // "NoneSecurity"
QT_MOC_LITERAL(26, 253, 9), // "StaticWep"
QT_MOC_LITERAL(27, 263, 10), // "DynamicWep"
QT_MOC_LITERAL(28, 274, 4), // "Leap"
QT_MOC_LITERAL(29, 279, 6), // "WpaPsk"
QT_MOC_LITERAL(30, 286, 6), // "WpaEap"
QT_MOC_LITERAL(31, 293, 7), // "Wpa2Psk"
QT_MOC_LITERAL(32, 301, 7), // "Wpa2Eap"
QT_MOC_LITERAL(33, 309, 3) // "SAE"

    },
    "Enums\0ConnectionStatus\0UnknownState\0"
    "Activating\0Activated\0Deactivating\0"
    "Deactivated\0ConnectionType\0"
    "UnknownConnectionType\0Adsl\0Bluetooth\0"
    "Bond\0Bridge\0Cdma\0Gsm\0Infiniband\0"
    "OLPCMesh\0Pppoe\0Vlan\0Vpn\0Wimax\0Wired\0"
    "Wireless\0SecurityType\0UnknownSecurity\0"
    "NoneSecurity\0StaticWep\0DynamicWep\0"
    "Leap\0WpaPsk\0WpaEap\0Wpa2Psk\0Wpa2Eap\0"
    "SAE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Enums[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   29,
       7,    7, 0x0,   15,   39,
      23,   23, 0x0,   10,   69,

 // enum data: key, value
       2, uint(Enums::UnknownState),
       3, uint(Enums::Activating),
       4, uint(Enums::Activated),
       5, uint(Enums::Deactivating),
       6, uint(Enums::Deactivated),
       8, uint(Enums::UnknownConnectionType),
       9, uint(Enums::Adsl),
      10, uint(Enums::Bluetooth),
      11, uint(Enums::Bond),
      12, uint(Enums::Bridge),
      13, uint(Enums::Cdma),
      14, uint(Enums::Gsm),
      15, uint(Enums::Infiniband),
      16, uint(Enums::OLPCMesh),
      17, uint(Enums::Pppoe),
      18, uint(Enums::Vlan),
      19, uint(Enums::Vpn),
      20, uint(Enums::Wimax),
      21, uint(Enums::Wired),
      22, uint(Enums::Wireless),
      24, uint(Enums::UnknownSecurity),
      25, uint(Enums::NoneSecurity),
      26, uint(Enums::StaticWep),
      27, uint(Enums::DynamicWep),
      28, uint(Enums::Leap),
      29, uint(Enums::WpaPsk),
      30, uint(Enums::WpaEap),
      31, uint(Enums::Wpa2Psk),
      32, uint(Enums::Wpa2Eap),
      33, uint(Enums::SAE),

       0        // eod
};

void Enums::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Enums::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Enums.data,
    qt_meta_data_Enums,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Enums::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Enums::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Enums.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Enums::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
