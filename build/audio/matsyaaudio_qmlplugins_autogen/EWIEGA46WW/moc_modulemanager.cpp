/****************************************************************************
** Meta object code from reading C++ file 'modulemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/modulemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modulemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__ModuleManager_t {
    QByteArrayData data[12];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__ModuleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__ModuleManager_t qt_meta_stringdata_QPulseAudio__ModuleManager = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPulseAudio::ModuleManager"
QT_MOC_LITERAL(1, 27, 19), // "combineSinksChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 22), // "switchOnConnectChanged"
QT_MOC_LITERAL(4, 71, 20), // "loadedModulesChanged"
QT_MOC_LITERAL(5, 92, 13), // "serverUpdated"
QT_MOC_LITERAL(6, 106, 17), // "settingsSupported"
QT_MOC_LITERAL(7, 124, 12), // "combineSinks"
QT_MOC_LITERAL(8, 137, 15), // "switchOnConnect"
QT_MOC_LITERAL(9, 153, 18), // "configModuleLoaded"
QT_MOC_LITERAL(10, 172, 16), // "configModuleName"
QT_MOC_LITERAL(11, 189, 13) // "loadedModules"

    },
    "QPulseAudio::ModuleManager\0"
    "combineSinksChanged\0\0switchOnConnectChanged\0"
    "loadedModulesChanged\0serverUpdated\0"
    "settingsSupported\0combineSinks\0"
    "switchOnConnect\0configModuleLoaded\0"
    "configModuleName\0loadedModules"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__ModuleManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       6,   38, // properties
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
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495103,
       8, QMetaType::Bool, 0x00495103,
       9, QMetaType::Bool, 0x00495001,
      10, QMetaType::QString, 0x00095401,
      11, QMetaType::QStringList, 0x00495001,

 // properties: notify_signal_id
       3,
       0,
       1,
       2,
       0,
       2,

       0        // eod
};

void QPulseAudio::ModuleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModuleManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->combineSinksChanged(); break;
        case 1: _t->switchOnConnectChanged(); break;
        case 2: _t->loadedModulesChanged(); break;
        case 3: _t->serverUpdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::combineSinksChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::switchOnConnectChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::loadedModulesChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::serverUpdated)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ModuleManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->settingsSupported(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->combineSinks(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->switchOnConnect(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->configModuleLoaded(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->configModuleName(); break;
        case 5: *reinterpret_cast< QStringList*>(_v) = _t->loadedModules(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ModuleManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCombineSinks(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSwitchOnConnect(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::ModuleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__ModuleManager.data,
    qt_meta_data_QPulseAudio__ModuleManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::ModuleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::ModuleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__ModuleManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPulseAudio::ModuleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::ModuleManager::combineSinksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::ModuleManager::switchOnConnectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPulseAudio::ModuleManager::loadedModulesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QPulseAudio::ModuleManager::serverUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
