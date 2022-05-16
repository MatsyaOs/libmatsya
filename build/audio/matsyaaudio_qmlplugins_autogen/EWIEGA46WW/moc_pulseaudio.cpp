/****************************************************************************
** Meta object code from reading C++ file 'pulseaudio.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/pulseaudio.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pulseaudio.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPulseAudio__AbstractModel_t {
    QByteArrayData data[9];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__AbstractModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__AbstractModel_t qt_meta_stringdata_QPulseAudio__AbstractModel = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QPulseAudio::AbstractModel"
QT_MOC_LITERAL(1, 27, 12), // "countChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 15), // "propertyChanged"
QT_MOC_LITERAL(4, 57, 4), // "role"
QT_MOC_LITERAL(5, 62, 8), // "roleName"
QT_MOC_LITERAL(6, 71, 5), // "count"
QT_MOC_LITERAL(7, 77, 8), // "ItemRole"
QT_MOC_LITERAL(8, 86, 15) // "PulseObjectRole"

    },
    "QPulseAudio::AbstractModel\0countChanged\0"
    "\0propertyChanged\0role\0roleName\0count\0"
    "ItemRole\0PulseObjectRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__AbstractModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   34, // properties
       1,   38, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::QByteArray,    5,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    1,   43,

 // enum data: key, value
       8, uint(QPulseAudio::AbstractModel::PulseObjectRole),

       0        // eod
};

void QPulseAudio::AbstractModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AbstractModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->propertyChanged(); break;
        case 2: { int _r = _t->role((*reinterpret_cast< const QByteArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AbstractModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AbstractModel::countChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AbstractModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->rowCount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::AbstractModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__AbstractModel.data,
    qt_meta_data_QPulseAudio__AbstractModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::AbstractModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::AbstractModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__AbstractModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int QPulseAudio::AbstractModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QPulseAudio::AbstractModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QPulseAudio__CardModel_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__CardModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__CardModel_t qt_meta_stringdata_QPulseAudio__CardModel = {
    {
QT_MOC_LITERAL(0, 0, 22) // "QPulseAudio::CardModel"

    },
    "QPulseAudio::CardModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__CardModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPulseAudio::CardModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::CardModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__CardModel.data,
    qt_meta_data_QPulseAudio__CardModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::CardModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::CardModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__CardModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::CardModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QPulseAudio__SinkModel_t {
    QByteArrayData data[9];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__SinkModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__SinkModel_t qt_meta_stringdata_QPulseAudio__SinkModel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QPulseAudio::SinkModel"
QT_MOC_LITERAL(1, 23, 18), // "defaultSinkChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "preferredSinkChanged"
QT_MOC_LITERAL(4, 64, 11), // "defaultSink"
QT_MOC_LITERAL(5, 76, 18), // "QPulseAudio::Sink*"
QT_MOC_LITERAL(6, 95, 13), // "preferredSink"
QT_MOC_LITERAL(7, 109, 8), // "ItemRole"
QT_MOC_LITERAL(8, 118, 17) // "SortByDefaultRole"

    },
    "QPulseAudio::SinkModel\0defaultSinkChanged\0"
    "\0preferredSinkChanged\0defaultSink\0"
    "QPulseAudio::Sink*\0preferredSink\0"
    "ItemRole\0SortByDefaultRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__SinkModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, 0x80000000 | 5, 0x00495009,
       6, 0x80000000 | 5, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    1,   39,

 // enum data: key, value
       8, uint(QPulseAudio::SinkModel::SortByDefaultRole),

       0        // eod
};

void QPulseAudio::SinkModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SinkModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultSinkChanged(); break;
        case 1: _t->preferredSinkChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SinkModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SinkModel::defaultSinkChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SinkModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SinkModel::preferredSinkChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SinkModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPulseAudio::Sink**>(_v) = _t->defaultSink(); break;
        case 1: *reinterpret_cast< QPulseAudio::Sink**>(_v) = _t->preferredSink(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::SinkModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__SinkModel.data,
    qt_meta_data_QPulseAudio__SinkModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::SinkModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::SinkModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__SinkModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::SinkModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QPulseAudio::SinkModel::defaultSinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QPulseAudio::SinkModel::preferredSinkChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_QPulseAudio__SinkInputModel_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__SinkInputModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__SinkInputModel_t qt_meta_stringdata_QPulseAudio__SinkInputModel = {
    {
QT_MOC_LITERAL(0, 0, 27) // "QPulseAudio::SinkInputModel"

    },
    "QPulseAudio::SinkInputModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__SinkInputModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPulseAudio::SinkInputModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::SinkInputModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__SinkInputModel.data,
    qt_meta_data_QPulseAudio__SinkInputModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::SinkInputModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::SinkInputModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__SinkInputModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::SinkInputModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QPulseAudio__SourceModel_t {
    QByteArrayData data[7];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__SourceModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__SourceModel_t qt_meta_stringdata_QPulseAudio__SourceModel = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QPulseAudio::SourceModel"
QT_MOC_LITERAL(1, 25, 20), // "defaultSourceChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 13), // "defaultSource"
QT_MOC_LITERAL(4, 61, 20), // "QPulseAudio::Source*"
QT_MOC_LITERAL(5, 82, 8), // "ItemRole"
QT_MOC_LITERAL(6, 91, 17) // "SortByDefaultRole"

    },
    "QPulseAudio::SourceModel\0defaultSourceChanged\0"
    "\0defaultSource\0QPulseAudio::Source*\0"
    "ItemRole\0SortByDefaultRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__SourceModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   20, // properties
       1,   24, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, 0x80000000 | 4, 0x00495009,

 // properties: notify_signal_id
       0,

 // enums: name, alias, flags, count, data
       5,    5, 0x0,    1,   29,

 // enum data: key, value
       6, uint(QPulseAudio::SourceModel::SortByDefaultRole),

       0        // eod
};

void QPulseAudio::SourceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SourceModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultSourceChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SourceModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SourceModel::defaultSourceChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SourceModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPulseAudio::Source**>(_v) = _t->defaultSource(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::SourceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__SourceModel.data,
    qt_meta_data_QPulseAudio__SourceModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::SourceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::SourceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__SourceModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::SourceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
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
void QPulseAudio::SourceModel::defaultSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_QPulseAudio__SourceOutputModel_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__SourceOutputModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__SourceOutputModel_t qt_meta_stringdata_QPulseAudio__SourceOutputModel = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QPulseAudio::SourceOutputModel"

    },
    "QPulseAudio::SourceOutputModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__SourceOutputModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPulseAudio::SourceOutputModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::SourceOutputModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__SourceOutputModel.data,
    qt_meta_data_QPulseAudio__SourceOutputModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::SourceOutputModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::SourceOutputModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__SourceOutputModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::SourceOutputModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QPulseAudio__StreamRestoreModel_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__StreamRestoreModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__StreamRestoreModel_t qt_meta_stringdata_QPulseAudio__StreamRestoreModel = {
    {
QT_MOC_LITERAL(0, 0, 31) // "QPulseAudio::StreamRestoreModel"

    },
    "QPulseAudio::StreamRestoreModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__StreamRestoreModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPulseAudio::StreamRestoreModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::StreamRestoreModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__StreamRestoreModel.data,
    qt_meta_data_QPulseAudio__StreamRestoreModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::StreamRestoreModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::StreamRestoreModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__StreamRestoreModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::StreamRestoreModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QPulseAudio__ModuleModel_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPulseAudio__ModuleModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPulseAudio__ModuleModel_t qt_meta_stringdata_QPulseAudio__ModuleModel = {
    {
QT_MOC_LITERAL(0, 0, 24) // "QPulseAudio::ModuleModel"

    },
    "QPulseAudio::ModuleModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPulseAudio__ModuleModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPulseAudio::ModuleModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject QPulseAudio::ModuleModel::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractModel::staticMetaObject>(),
    qt_meta_stringdata_QPulseAudio__ModuleModel.data,
    qt_meta_data_QPulseAudio__ModuleModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QPulseAudio::ModuleModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPulseAudio::ModuleModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QPulseAudio__ModuleModel.stringdata0))
        return static_cast<void*>(this);
    return AbstractModel::qt_metacast(_clname);
}

int QPulseAudio::ModuleModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractModel::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
