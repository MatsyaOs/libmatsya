/****************************************************************************
** Meta object code from reading C++ file 'wiressitemsettings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../networkmanagement/wiressitemsettings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wiressitemsettings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WirelessItemSettings_t {
    QByteArrayData data[11];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WirelessItemSettings_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WirelessItemSettings_t qt_meta_stringdata_WirelessItemSettings = {
    {
QT_MOC_LITERAL(0, 0, 20), // "WirelessItemSettings"
QT_MOC_LITERAL(1, 21, 11), // "pathChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "settingsAvailable"
QT_MOC_LITERAL(4, 52, 11), // "nameChanged"
QT_MOC_LITERAL(5, 64, 18), // "autoConnectChanged"
QT_MOC_LITERAL(6, 83, 28), // "availableToOtherUsersChanged"
QT_MOC_LITERAL(7, 112, 4), // "path"
QT_MOC_LITERAL(8, 117, 4), // "name"
QT_MOC_LITERAL(9, 122, 11), // "autoConnect"
QT_MOC_LITERAL(10, 134, 21) // "availableToOtherUsers"

    },
    "WirelessItemSettings\0pathChanged\0\0"
    "settingsAvailable\0nameChanged\0"
    "autoConnectChanged\0availableToOtherUsersChanged\0"
    "path\0name\0autoConnect\0availableToOtherUsers"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WirelessItemSettings[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      10, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       2,
       3,
       4,

       0        // eod
};

void WirelessItemSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WirelessItemSettings *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pathChanged(); break;
        case 1: _t->settingsAvailable(); break;
        case 2: _t->nameChanged(); break;
        case 3: _t->autoConnectChanged(); break;
        case 4: _t->availableToOtherUsersChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WirelessItemSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WirelessItemSettings::pathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WirelessItemSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WirelessItemSettings::settingsAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WirelessItemSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WirelessItemSettings::nameChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WirelessItemSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WirelessItemSettings::autoConnectChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WirelessItemSettings::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WirelessItemSettings::availableToOtherUsersChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WirelessItemSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoConnect(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->availableToOtherUsers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WirelessItemSettings *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAutoConnect(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAvailableToOtherUsers(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject WirelessItemSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_WirelessItemSettings.data,
    qt_meta_data_WirelessItemSettings,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WirelessItemSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WirelessItemSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WirelessItemSettings.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WirelessItemSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void WirelessItemSettings::pathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WirelessItemSettings::settingsAvailable()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WirelessItemSettings::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WirelessItemSettings::autoConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WirelessItemSettings::availableToOtherUsersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
