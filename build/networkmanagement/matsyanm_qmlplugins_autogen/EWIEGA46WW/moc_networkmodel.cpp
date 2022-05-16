/****************************************************************************
** Meta object code from reading C++ file 'networkmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/networkmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkModel_t {
    QByteArrayData data[108];
    char stringdata0[1607];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkModel_t qt_meta_stringdata_NetworkModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "NetworkModel"
QT_MOC_LITERAL(1, 13, 13), // "onItemUpdated"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 32), // "setDeviceStatisticsRefreshRateMs"
QT_MOC_LITERAL(4, 61, 10), // "devicePath"
QT_MOC_LITERAL(5, 72, 11), // "refreshRate"
QT_MOC_LITERAL(6, 84, 32), // "accessPointSignalStrengthChanged"
QT_MOC_LITERAL(7, 117, 6), // "signal"
QT_MOC_LITERAL(8, 124, 21), // "activeConnectionAdded"
QT_MOC_LITERAL(9, 146, 16), // "activeConnection"
QT_MOC_LITERAL(10, 163, 23), // "activeConnectionRemoved"
QT_MOC_LITERAL(11, 187, 28), // "activeConnectionStateChanged"
QT_MOC_LITERAL(12, 216, 39), // "NetworkManager::ActiveConnect..."
QT_MOC_LITERAL(13, 256, 5), // "state"
QT_MOC_LITERAL(14, 262, 31), // "activeVpnConnectionStateChanged"
QT_MOC_LITERAL(15, 294, 36), // "NetworkManager::VpnConnection..."
QT_MOC_LITERAL(16, 331, 48), // "NetworkManager::VpnConnection..."
QT_MOC_LITERAL(17, 380, 6), // "reason"
QT_MOC_LITERAL(18, 387, 27), // "availableConnectionAppeared"
QT_MOC_LITERAL(19, 415, 10), // "connection"
QT_MOC_LITERAL(20, 426, 30), // "availableConnectionDisappeared"
QT_MOC_LITERAL(21, 457, 15), // "connectionAdded"
QT_MOC_LITERAL(22, 473, 17), // "connectionRemoved"
QT_MOC_LITERAL(23, 491, 17), // "connectionUpdated"
QT_MOC_LITERAL(24, 509, 11), // "deviceAdded"
QT_MOC_LITERAL(25, 521, 6), // "device"
QT_MOC_LITERAL(26, 528, 13), // "deviceRemoved"
QT_MOC_LITERAL(27, 542, 18), // "deviceStateChanged"
QT_MOC_LITERAL(28, 561, 29), // "NetworkManager::Device::State"
QT_MOC_LITERAL(29, 591, 8), // "oldState"
QT_MOC_LITERAL(30, 600, 41), // "NetworkManager::Device::State..."
QT_MOC_LITERAL(31, 642, 15), // "ipConfigChanged"
QT_MOC_LITERAL(32, 658, 18), // "ipInterfaceChanged"
QT_MOC_LITERAL(33, 677, 13), // "statusChanged"
QT_MOC_LITERAL(34, 691, 22), // "NetworkManager::Status"
QT_MOC_LITERAL(35, 714, 6), // "status"
QT_MOC_LITERAL(36, 721, 23), // "wirelessNetworkAppeared"
QT_MOC_LITERAL(37, 745, 4), // "ssid"
QT_MOC_LITERAL(38, 750, 26), // "wirelessNetworkDisappeared"
QT_MOC_LITERAL(39, 777, 28), // "wirelessNetworkSignalChanged"
QT_MOC_LITERAL(40, 806, 33), // "wirelessNetworkReferenceApCha..."
QT_MOC_LITERAL(41, 840, 11), // "accessPoint"
QT_MOC_LITERAL(42, 852, 10), // "initialize"
QT_MOC_LITERAL(43, 863, 8), // "ItemRole"
QT_MOC_LITERAL(44, 872, 21), // "ConnectionDetailsRole"
QT_MOC_LITERAL(45, 894, 18), // "ConnectionIconRole"
QT_MOC_LITERAL(46, 913, 18), // "ConnectionPathRole"
QT_MOC_LITERAL(47, 932, 19), // "ConnectionStateRole"
QT_MOC_LITERAL(48, 952, 10), // "DeviceName"
QT_MOC_LITERAL(49, 963, 14), // "DevicePathRole"
QT_MOC_LITERAL(50, 978, 15), // "DeviceStateRole"
QT_MOC_LITERAL(51, 994, 13), // "DuplicateRole"
QT_MOC_LITERAL(52, 1008, 18), // "ItemUniqueNameRole"
QT_MOC_LITERAL(53, 1027, 12), // "ItemTypeRole"
QT_MOC_LITERAL(54, 1040, 12), // "LastUsedRole"
QT_MOC_LITERAL(55, 1053, 20), // "LastUsedDateOnlyRole"
QT_MOC_LITERAL(56, 1074, 8), // "NameRole"
QT_MOC_LITERAL(57, 1083, 16), // "SecurityTypeRole"
QT_MOC_LITERAL(58, 1100, 22), // "SecurityTypeStringRole"
QT_MOC_LITERAL(59, 1123, 11), // "SectionRole"
QT_MOC_LITERAL(60, 1135, 10), // "SignalRole"
QT_MOC_LITERAL(61, 1146, 9), // "SlaveRole"
QT_MOC_LITERAL(62, 1156, 8), // "SsidRole"
QT_MOC_LITERAL(63, 1165, 16), // "SpecificPathRole"
QT_MOC_LITERAL(64, 1182, 13), // "TimeStampRole"
QT_MOC_LITERAL(65, 1196, 8), // "TypeRole"
QT_MOC_LITERAL(66, 1205, 7), // "UniRole"
QT_MOC_LITERAL(67, 1213, 8), // "UuidRole"
QT_MOC_LITERAL(68, 1222, 8), // "VpnState"
QT_MOC_LITERAL(69, 1231, 7), // "VpnType"
QT_MOC_LITERAL(70, 1239, 11), // "RxBytesRole"
QT_MOC_LITERAL(71, 1251, 11), // "TxBytesRole"
QT_MOC_LITERAL(72, 1263, 13), // "IpAddressRole"
QT_MOC_LITERAL(73, 1277, 10), // "RouterRole"
QT_MOC_LITERAL(74, 1288, 11), // "GateWayRole"
QT_MOC_LITERAL(75, 1300, 16), // "ConnectionStatus"
QT_MOC_LITERAL(76, 1317, 12), // "UnknownState"
QT_MOC_LITERAL(77, 1330, 10), // "Activating"
QT_MOC_LITERAL(78, 1341, 9), // "Activated"
QT_MOC_LITERAL(79, 1351, 12), // "Deactivating"
QT_MOC_LITERAL(80, 1364, 11), // "Deactivated"
QT_MOC_LITERAL(81, 1376, 14), // "ConnectionType"
QT_MOC_LITERAL(82, 1391, 21), // "UnknownConnectionType"
QT_MOC_LITERAL(83, 1413, 4), // "Adsl"
QT_MOC_LITERAL(84, 1418, 9), // "Bluetooth"
QT_MOC_LITERAL(85, 1428, 4), // "Bond"
QT_MOC_LITERAL(86, 1433, 6), // "Bridge"
QT_MOC_LITERAL(87, 1440, 4), // "Cdma"
QT_MOC_LITERAL(88, 1445, 3), // "Gsm"
QT_MOC_LITERAL(89, 1449, 10), // "Infiniband"
QT_MOC_LITERAL(90, 1460, 8), // "OLPCMesh"
QT_MOC_LITERAL(91, 1469, 5), // "Pppoe"
QT_MOC_LITERAL(92, 1475, 4), // "Vlan"
QT_MOC_LITERAL(93, 1480, 3), // "Vpn"
QT_MOC_LITERAL(94, 1484, 5), // "Wimax"
QT_MOC_LITERAL(95, 1490, 5), // "Wired"
QT_MOC_LITERAL(96, 1496, 8), // "Wireless"
QT_MOC_LITERAL(97, 1505, 12), // "SecurityType"
QT_MOC_LITERAL(98, 1518, 15), // "UnknownSecurity"
QT_MOC_LITERAL(99, 1534, 12), // "NoneSecurity"
QT_MOC_LITERAL(100, 1547, 9), // "StaticWep"
QT_MOC_LITERAL(101, 1557, 10), // "DynamicWep"
QT_MOC_LITERAL(102, 1568, 4), // "Leap"
QT_MOC_LITERAL(103, 1573, 6), // "WpaPsk"
QT_MOC_LITERAL(104, 1580, 6), // "WpaEap"
QT_MOC_LITERAL(105, 1587, 7), // "Wpa2Psk"
QT_MOC_LITERAL(106, 1595, 7), // "Wpa2Eap"
QT_MOC_LITERAL(107, 1603, 3) // "SAE"

    },
    "NetworkModel\0onItemUpdated\0\0"
    "setDeviceStatisticsRefreshRateMs\0"
    "devicePath\0refreshRate\0"
    "accessPointSignalStrengthChanged\0"
    "signal\0activeConnectionAdded\0"
    "activeConnection\0activeConnectionRemoved\0"
    "activeConnectionStateChanged\0"
    "NetworkManager::ActiveConnection::State\0"
    "state\0activeVpnConnectionStateChanged\0"
    "NetworkManager::VpnConnection::State\0"
    "NetworkManager::VpnConnection::StateChangeReason\0"
    "reason\0availableConnectionAppeared\0"
    "connection\0availableConnectionDisappeared\0"
    "connectionAdded\0connectionRemoved\0"
    "connectionUpdated\0deviceAdded\0device\0"
    "deviceRemoved\0deviceStateChanged\0"
    "NetworkManager::Device::State\0oldState\0"
    "NetworkManager::Device::StateChangeReason\0"
    "ipConfigChanged\0ipInterfaceChanged\0"
    "statusChanged\0NetworkManager::Status\0"
    "status\0wirelessNetworkAppeared\0ssid\0"
    "wirelessNetworkDisappeared\0"
    "wirelessNetworkSignalChanged\0"
    "wirelessNetworkReferenceApChanged\0"
    "accessPoint\0initialize\0ItemRole\0"
    "ConnectionDetailsRole\0ConnectionIconRole\0"
    "ConnectionPathRole\0ConnectionStateRole\0"
    "DeviceName\0DevicePathRole\0DeviceStateRole\0"
    "DuplicateRole\0ItemUniqueNameRole\0"
    "ItemTypeRole\0LastUsedRole\0"
    "LastUsedDateOnlyRole\0NameRole\0"
    "SecurityTypeRole\0SecurityTypeStringRole\0"
    "SectionRole\0SignalRole\0SlaveRole\0"
    "SsidRole\0SpecificPathRole\0TimeStampRole\0"
    "TypeRole\0UniRole\0UuidRole\0VpnState\0"
    "VpnType\0RxBytesRole\0TxBytesRole\0"
    "IpAddressRole\0RouterRole\0GateWayRole\0"
    "ConnectionStatus\0UnknownState\0Activating\0"
    "Activated\0Deactivating\0Deactivated\0"
    "ConnectionType\0UnknownConnectionType\0"
    "Adsl\0Bluetooth\0Bond\0Bridge\0Cdma\0Gsm\0"
    "Infiniband\0OLPCMesh\0Pppoe\0Vlan\0Vpn\0"
    "Wimax\0Wired\0Wireless\0SecurityType\0"
    "UnknownSecurity\0NoneSecurity\0StaticWep\0"
    "DynamicWep\0Leap\0WpaPsk\0WpaEap\0Wpa2Psk\0"
    "Wpa2Eap\0SAE"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       4,  196, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x0a /* Public */,
       3,    2,  130,    2, 0x0a /* Public */,
       6,    1,  135,    2, 0x08 /* Private */,
       8,    1,  138,    2, 0x08 /* Private */,
      10,    1,  141,    2, 0x08 /* Private */,
      11,    1,  144,    2, 0x08 /* Private */,
      14,    2,  147,    2, 0x08 /* Private */,
      18,    1,  152,    2, 0x08 /* Private */,
      20,    1,  155,    2, 0x08 /* Private */,
      21,    1,  158,    2, 0x08 /* Private */,
      22,    1,  161,    2, 0x08 /* Private */,
      23,    0,  164,    2, 0x08 /* Private */,
      24,    1,  165,    2, 0x08 /* Private */,
      26,    1,  168,    2, 0x08 /* Private */,
      27,    3,  171,    2, 0x08 /* Private */,
      31,    0,  178,    2, 0x08 /* Private */,
      32,    0,  179,    2, 0x08 /* Private */,
      33,    1,  180,    2, 0x08 /* Private */,
      36,    1,  183,    2, 0x08 /* Private */,
      38,    1,  186,    2, 0x08 /* Private */,
      39,    1,  189,    2, 0x08 /* Private */,
      40,    1,  192,    2, 0x08 /* Private */,
      42,    0,  195,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UInt,    4,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 16,   13,   17,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void, 0x80000000 | 28, 0x80000000 | 28, 0x80000000 | 30,   13,   29,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      43,   43, 0x0,   31,  216,
      75,   75, 0x0,    5,  278,
      81,   81, 0x0,   15,  288,
      97,   97, 0x0,   10,  318,

 // enum data: key, value
      44, uint(NetworkModel::ConnectionDetailsRole),
      45, uint(NetworkModel::ConnectionIconRole),
      46, uint(NetworkModel::ConnectionPathRole),
      47, uint(NetworkModel::ConnectionStateRole),
      48, uint(NetworkModel::DeviceName),
      49, uint(NetworkModel::DevicePathRole),
      50, uint(NetworkModel::DeviceStateRole),
      51, uint(NetworkModel::DuplicateRole),
      52, uint(NetworkModel::ItemUniqueNameRole),
      53, uint(NetworkModel::ItemTypeRole),
      54, uint(NetworkModel::LastUsedRole),
      55, uint(NetworkModel::LastUsedDateOnlyRole),
      56, uint(NetworkModel::NameRole),
      57, uint(NetworkModel::SecurityTypeRole),
      58, uint(NetworkModel::SecurityTypeStringRole),
      59, uint(NetworkModel::SectionRole),
      60, uint(NetworkModel::SignalRole),
      61, uint(NetworkModel::SlaveRole),
      62, uint(NetworkModel::SsidRole),
      63, uint(NetworkModel::SpecificPathRole),
      64, uint(NetworkModel::TimeStampRole),
      65, uint(NetworkModel::TypeRole),
      66, uint(NetworkModel::UniRole),
      67, uint(NetworkModel::UuidRole),
      68, uint(NetworkModel::VpnState),
      69, uint(NetworkModel::VpnType),
      70, uint(NetworkModel::RxBytesRole),
      71, uint(NetworkModel::TxBytesRole),
      72, uint(NetworkModel::IpAddressRole),
      73, uint(NetworkModel::RouterRole),
      74, uint(NetworkModel::GateWayRole),
      76, uint(NetworkModel::UnknownState),
      77, uint(NetworkModel::Activating),
      78, uint(NetworkModel::Activated),
      79, uint(NetworkModel::Deactivating),
      80, uint(NetworkModel::Deactivated),
      82, uint(NetworkModel::UnknownConnectionType),
      83, uint(NetworkModel::Adsl),
      84, uint(NetworkModel::Bluetooth),
      85, uint(NetworkModel::Bond),
      86, uint(NetworkModel::Bridge),
      87, uint(NetworkModel::Cdma),
      88, uint(NetworkModel::Gsm),
      89, uint(NetworkModel::Infiniband),
      90, uint(NetworkModel::OLPCMesh),
      91, uint(NetworkModel::Pppoe),
      92, uint(NetworkModel::Vlan),
      93, uint(NetworkModel::Vpn),
      94, uint(NetworkModel::Wimax),
      95, uint(NetworkModel::Wired),
      96, uint(NetworkModel::Wireless),
      98, uint(NetworkModel::UnknownSecurity),
      99, uint(NetworkModel::NoneSecurity),
     100, uint(NetworkModel::StaticWep),
     101, uint(NetworkModel::DynamicWep),
     102, uint(NetworkModel::Leap),
     103, uint(NetworkModel::WpaPsk),
     104, uint(NetworkModel::WpaEap),
     105, uint(NetworkModel::Wpa2Psk),
     106, uint(NetworkModel::Wpa2Eap),
     107, uint(NetworkModel::SAE),

       0        // eod
};

void NetworkModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetworkModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onItemUpdated(); break;
        case 1: _t->setDeviceStatisticsRefreshRateMs((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: _t->accessPointSignalStrengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->activeConnectionAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->activeConnectionRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->activeConnectionStateChanged((*reinterpret_cast< NetworkManager::ActiveConnection::State(*)>(_a[1]))); break;
        case 6: _t->activeVpnConnectionStateChanged((*reinterpret_cast< NetworkManager::VpnConnection::State(*)>(_a[1])),(*reinterpret_cast< NetworkManager::VpnConnection::StateChangeReason(*)>(_a[2]))); break;
        case 7: _t->availableConnectionAppeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->availableConnectionDisappeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->connectionAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->connectionRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->connectionUpdated(); break;
        case 12: _t->deviceAdded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->deviceStateChanged((*reinterpret_cast< NetworkManager::Device::State(*)>(_a[1])),(*reinterpret_cast< NetworkManager::Device::State(*)>(_a[2])),(*reinterpret_cast< NetworkManager::Device::StateChangeReason(*)>(_a[3]))); break;
        case 15: _t->ipConfigChanged(); break;
        case 16: _t->ipInterfaceChanged(); break;
        case 17: _t->statusChanged((*reinterpret_cast< NetworkManager::Status(*)>(_a[1]))); break;
        case 18: _t->wirelessNetworkAppeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->wirelessNetworkDisappeared((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->wirelessNetworkSignalChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->wirelessNetworkReferenceApChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->initialize(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_NetworkModel.data,
    qt_meta_data_NetworkModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NetworkModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int NetworkModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
