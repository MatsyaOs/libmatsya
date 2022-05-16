/****************************************************************************
** Meta object code from reading C++ file 'orientation_sensor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../screen/common/orientation_sensor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'orientation_sensor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OrientationSensor_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OrientationSensor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OrientationSensor_t qt_meta_stringdata_OrientationSensor = {
    {
QT_MOC_LITERAL(0, 0, 17), // "OrientationSensor"
QT_MOC_LITERAL(1, 18, 12), // "valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 32), // "QOrientationReading::Orientation"
QT_MOC_LITERAL(4, 65, 11), // "orientation"
QT_MOC_LITERAL(5, 77, 16), // "availableChanged"
QT_MOC_LITERAL(6, 94, 9), // "available"
QT_MOC_LITERAL(7, 104, 14), // "enabledChanged"
QT_MOC_LITERAL(8, 119, 7) // "enabled"

    },
    "OrientationSensor\0valueChanged\0\0"
    "QOrientationReading::Orientation\0"
    "orientation\0availableChanged\0available\0"
    "enabledChanged\0enabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OrientationSensor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,

       0        // eod
};

void OrientationSensor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OrientationSensor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< QOrientationReading::Orientation(*)>(_a[1]))); break;
        case 1: _t->availableChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OrientationSensor::*)(QOrientationReading::Orientation );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrientationSensor::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OrientationSensor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrientationSensor::availableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OrientationSensor::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OrientationSensor::enabledChanged)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OrientationSensor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OrientationSensor.data,
    qt_meta_data_OrientationSensor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OrientationSensor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OrientationSensor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OrientationSensor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OrientationSensor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void OrientationSensor::valueChanged(QOrientationReading::Orientation _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OrientationSensor::availableChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OrientationSensor::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
