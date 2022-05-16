/****************************************************************************
** Meta object code from reading C++ file 'confighandler.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../screen/confighandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'confighandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ConfigHandler_t {
    QByteArrayData data[11];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConfigHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConfigHandler_t qt_meta_stringdata_ConfigHandler = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ConfigHandler"
QT_MOC_LITERAL(1, 14, 18), // "outputModelChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "changed"
QT_MOC_LITERAL(4, 42, 25), // "screenNormalizationUpdate"
QT_MOC_LITERAL(5, 68, 10), // "normalized"
QT_MOC_LITERAL(6, 79, 16), // "needsSaveChecked"
QT_MOC_LITERAL(7, 96, 4), // "need"
QT_MOC_LITERAL(8, 101, 16), // "retentionChanged"
QT_MOC_LITERAL(9, 118, 13), // "outputConnect"
QT_MOC_LITERAL(10, 132, 9) // "connected"

    },
    "ConfigHandler\0outputModelChanged\0\0"
    "changed\0screenNormalizationUpdate\0"
    "normalized\0needsSaveChecked\0need\0"
    "retentionChanged\0outputConnect\0connected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConfigHandler[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    0,   52,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,

       0        // eod
};

void ConfigHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConfigHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->outputModelChanged(); break;
        case 1: _t->changed(); break;
        case 2: _t->screenNormalizationUpdate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->needsSaveChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->retentionChanged(); break;
        case 5: _t->outputConnect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConfigHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::outputModelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConfigHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::changed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ConfigHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::screenNormalizationUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ConfigHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::needsSaveChecked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ConfigHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::retentionChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ConfigHandler::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ConfigHandler::outputConnect)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ConfigHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ConfigHandler.data,
    qt_meta_data_ConfigHandler,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ConfigHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConfigHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ConfigHandler.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ConfigHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ConfigHandler::outputModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ConfigHandler::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ConfigHandler::screenNormalizationUpdate(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ConfigHandler::needsSaveChecked(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConfigHandler::retentionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ConfigHandler::outputConnect(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
