/****************************************************************************
** Meta object code from reading C++ file 'card.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/card.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'card.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__CardPort_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__CardPort_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__CardPort_t qt_meta_stringdata_QPulseAudio__CardPort = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QPulseAudio::CardPort"
QT_MOC_LITERAL(1, 22, 17), // "propertiesChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 10) // "properties"

    },
    "QPulseAudio::CardPort\0propertiesChanged\0"
    "\0properties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__CardPort[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QVariantMap, 0x00495001,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QPulseAudio::CardPort::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CardPort *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->propertiesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CardPort::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CardPort::propertiesChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CardPort *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantMap*>(_v) = _t->properties(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::CardPort::staticMetaObject = { {
    QMetaObject::SuperData::link<Port::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__CardPort.data,
    qt_meta_data_QPulseAudio__CardPort,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::CardPort::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::CardPort::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__CardPort.stringdata0))
        return static_cast<void*>(this);
    return Port::qt_metacast(_clname);
}

int QPulseAudio::CardPort::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Port::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::CardPort::propertiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QPulseAudio__Card_t {
    QByteArrayData data[11];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__Card_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__Card_t qt_meta_stringdata_QPulseAudio__Card = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QPulseAudio::Card"
QT_MOC_LITERAL(1, 18, 11), // "nameChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "profilesChanged"
QT_MOC_LITERAL(4, 47, 25), // "activeProfileIndexChanged"
QT_MOC_LITERAL(5, 73, 12), // "portsChanged"
QT_MOC_LITERAL(6, 86, 4), // "name"
QT_MOC_LITERAL(7, 91, 8), // "profiles"
QT_MOC_LITERAL(8, 100, 15), // "QList<QObject*>"
QT_MOC_LITERAL(9, 116, 18), // "activeProfileIndex"
QT_MOC_LITERAL(10, 135, 5) // "ports"

    },
    "QPulseAudio::Card\0nameChanged\0\0"
    "profilesChanged\0activeProfileIndexChanged\0"
    "portsChanged\0name\0profiles\0QList<QObject*>\0"
    "activeProfileIndex\0ports"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__Card[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   38, // properties
       0,    0, // enums/sets
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
       7, 0x80000000 | 8, 0x00495009,
       9, QMetaType::UInt, 0x00495103,
      10, 0x80000000 | 8, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void QPulseAudio::Card::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Card *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->profilesChanged(); break;
        case 2: _t->activeProfileIndexChanged(); break;
        case 3: _t->portsChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Card::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Card::nameChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Card::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Card::profilesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Card::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Card::activeProfileIndexChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Card::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Card::portsChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Card *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QList<QObject*>*>(_v) = _t->profiles(); break;
        case 2: *reinterpret_cast< quint32*>(_v) = _t->activeProfileIndex(); break;
        case 3: *reinterpret_cast< QList<QObject*>*>(_v) = _t->ports(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Card *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setActiveProfileIndex(*reinterpret_cast< quint32*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::Card::staticMetaObject = { {
    QMetaObject::SuperData::link<PulseObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__Card.data,
    qt_meta_data_QPulseAudio__Card,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::Card::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::Card::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__Card.stringdata0))
        return static_cast<void*>(this);
    return PulseObject::qt_metacast(_clname);
}

int QPulseAudio::Card::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PulseObject::qt_metacall(_c, _id, _a);
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
void QPulseAudio::Card::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::Card::profilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::Card::activeProfileIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::Card::portsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
