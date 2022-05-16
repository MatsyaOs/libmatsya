/****************************************************************************
** Meta object code from reading C++ file 'sortfiltermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../audio/model/sortfiltermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortfiltermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SortFilterModel_t {
    QByteArrayData data[25];
    char stringdata0[324];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SortFilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SortFilterModel_t qt_meta_stringdata_SortFilterModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SortFilterModel"
QT_MOC_LITERAL(1, 16, 12), // "countChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 17), // "sortColumnChanged"
QT_MOC_LITERAL(4, 48, 18), // "sourceModelChanged"
QT_MOC_LITERAL(5, 67, 19), // "filterRegExpChanged"
QT_MOC_LITERAL(6, 87, 19), // "filterStringChanged"
QT_MOC_LITERAL(7, 107, 21), // "filterCallbackChanged"
QT_MOC_LITERAL(8, 129, 8), // "QJSValue"
QT_MOC_LITERAL(9, 138, 13), // "syncRoleNames"
QT_MOC_LITERAL(10, 152, 3), // "get"
QT_MOC_LITERAL(11, 156, 1), // "i"
QT_MOC_LITERAL(12, 158, 14), // "mapRowToSource"
QT_MOC_LITERAL(13, 173, 16), // "mapRowFromSource"
QT_MOC_LITERAL(14, 190, 11), // "sourceModel"
QT_MOC_LITERAL(15, 202, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(16, 222, 12), // "filterRegExp"
QT_MOC_LITERAL(17, 235, 12), // "filterString"
QT_MOC_LITERAL(18, 248, 14), // "filterCallback"
QT_MOC_LITERAL(19, 263, 10), // "filterRole"
QT_MOC_LITERAL(20, 274, 8), // "sortRole"
QT_MOC_LITERAL(21, 283, 9), // "sortOrder"
QT_MOC_LITERAL(22, 293, 13), // "Qt::SortOrder"
QT_MOC_LITERAL(23, 307, 10), // "sortColumn"
QT_MOC_LITERAL(24, 318, 5) // "count"

    },
    "SortFilterModel\0countChanged\0\0"
    "sortColumnChanged\0sourceModelChanged\0"
    "filterRegExpChanged\0filterStringChanged\0"
    "filterCallbackChanged\0QJSValue\0"
    "syncRoleNames\0get\0i\0mapRowToSource\0"
    "mapRowFromSource\0sourceModel\0"
    "QAbstractItemModel*\0filterRegExp\0"
    "filterString\0filterCallback\0filterRole\0"
    "sortRole\0sortOrder\0Qt::SortOrder\0"
    "sortColumn\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SortFilterModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   98, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    0,   75,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x06 /* Public */,
       5,    1,   79,    2, 0x06 /* Public */,
       6,    1,   82,    2, 0x86 /* Public | MethodRevisioned */,
       7,    1,   85,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   88,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   89,    2, 0x02 /* Public */,
      12,    1,   92,    2, 0x02 /* Public */,
      13,    1,   95,    2, 0x02 /* Public */,

 // signals: revision
       0,
       0,
       0,
       0,
       1,
       1,

 // slots: revision
       0,

 // methods: revision
       0,
       0,
       0,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 8,    2,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::QVariantMap, QMetaType::Int,   11,
    QMetaType::Int, QMetaType::Int,   11,
    QMetaType::Int, QMetaType::Int,   11,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049500b,
      16, QMetaType::QString, 0x00495103,
      17, QMetaType::QString, 0x00c95103,
      18, 0x80000000 | 8, 0x00c9510b,
      19, QMetaType::QString, 0x00095103,
      20, QMetaType::QString, 0x00095103,
      21, 0x80000000 | 22, 0x0009510b,
      23, QMetaType::Int, 0x00495103,
      24, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       0,
       0,
       0,
       1,
       0,

 // properties: revision
       0,
       0,
       1,
       1,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void SortFilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SortFilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countChanged(); break;
        case 1: _t->sortColumnChanged(); break;
        case 2: _t->sourceModelChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 3: _t->filterRegExpChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->filterStringChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->filterCallbackChanged((*reinterpret_cast< const QJSValue(*)>(_a[1]))); break;
        case 6: _t->syncRoleNames(); break;
        case 7: { QVariantMap _r = _t->get((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 8: { int _r = _t->mapRowToSource((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: { int _r = _t->mapRowFromSource((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SortFilterModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::countChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SortFilterModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::sortColumnChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SortFilterModel::*)(QObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::sourceModelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SortFilterModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::filterRegExpChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SortFilterModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::filterStringChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SortFilterModel::*)(const QJSValue & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SortFilterModel::filterCallbackChanged)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SortFilterModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->sourceModel(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->filterRegExp(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->filterString(); break;
        case 3: *reinterpret_cast< QJSValue*>(_v) = _t->filterCallback(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->filterRole(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->sortRole(); break;
        case 6: *reinterpret_cast< Qt::SortOrder*>(_v) = _t->sortOrder(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->sortColumn(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SortFilterModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        case 1: _t->setFilterRegExp(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFilterString(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setFilterCallback(*reinterpret_cast< QJSValue*>(_v)); break;
        case 4: _t->setFilterRole(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setSortRole(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setSortOrder(*reinterpret_cast< Qt::SortOrder*>(_v)); break;
        case 7: _t->setSortColumn(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject SortFilterModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_SortFilterModel.data,
    qt_meta_data_SortFilterModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SortFilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SortFilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SortFilterModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int SortFilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SortFilterModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SortFilterModel::sortColumnChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SortFilterModel::sourceModelChanged(QObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SortFilterModel::filterRegExpChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SortFilterModel::filterStringChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SortFilterModel::filterCallbackChanged(const QJSValue & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
