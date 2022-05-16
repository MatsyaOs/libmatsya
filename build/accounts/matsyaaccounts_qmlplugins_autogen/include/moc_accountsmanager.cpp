/****************************************************************************
** Meta object code from reading C++ file 'accountsmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../accounts/accountsmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QtAccountsService__AccountsManager_t {
    QByteArrayData data[29];
    char stringdata0[409];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtAccountsService__AccountsManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtAccountsService__AccountsManager_t qt_meta_stringdata_QtAccountsService__AccountsManager = {
    {
QT_MOC_LITERAL(0, 0, 34), // "QtAccountsService::AccountsMa..."
QT_MOC_LITERAL(1, 35, 9), // "userAdded"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 31), // "QtAccountsService::UserAccount*"
QT_MOC_LITERAL(4, 78, 7), // "account"
QT_MOC_LITERAL(5, 86, 11), // "userDeleted"
QT_MOC_LITERAL(6, 98, 3), // "uid"
QT_MOC_LITERAL(7, 102, 10), // "userCached"
QT_MOC_LITERAL(8, 113, 8), // "userName"
QT_MOC_LITERAL(9, 122, 12), // "userUncached"
QT_MOC_LITERAL(10, 135, 23), // "listCachedUsersFinished"
QT_MOC_LITERAL(11, 159, 34), // "QtAccountsService::UserAccoun..."
QT_MOC_LITERAL(12, 194, 8), // "userList"
QT_MOC_LITERAL(13, 203, 12), // "_q_userAdded"
QT_MOC_LITERAL(14, 216, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(15, 232, 4), // "path"
QT_MOC_LITERAL(16, 237, 14), // "_q_userDeleted"
QT_MOC_LITERAL(17, 252, 9), // "cacheUser"
QT_MOC_LITERAL(18, 262, 11), // "uncacheUser"
QT_MOC_LITERAL(19, 274, 15), // "listCachedUsers"
QT_MOC_LITERAL(20, 290, 10), // "cachedUser"
QT_MOC_LITERAL(21, 301, 12), // "findUserById"
QT_MOC_LITERAL(22, 314, 14), // "findUserByName"
QT_MOC_LITERAL(23, 329, 10), // "createUser"
QT_MOC_LITERAL(24, 340, 8), // "fullName"
QT_MOC_LITERAL(25, 349, 24), // "UserAccount::AccountType"
QT_MOC_LITERAL(26, 374, 11), // "accountType"
QT_MOC_LITERAL(27, 386, 10), // "deleteUser"
QT_MOC_LITERAL(28, 397, 11) // "removeFiles"

    },
    "QtAccountsService::AccountsManager\0"
    "userAdded\0\0QtAccountsService::UserAccount*\0"
    "account\0userDeleted\0uid\0userCached\0"
    "userName\0userUncached\0listCachedUsersFinished\0"
    "QtAccountsService::UserAccountList\0"
    "userList\0_q_userAdded\0QDBusObjectPath\0"
    "path\0_q_userDeleted\0cacheUser\0uncacheUser\0"
    "listCachedUsers\0cachedUser\0findUserById\0"
    "findUserByName\0createUser\0fullName\0"
    "UserAccount::AccountType\0accountType\0"
    "deleteUser\0removeFiles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAccountsService__AccountsManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
       9,    1,   98,    2, 0x06 /* Public */,
      10,    1,  101,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  104,    2, 0x08 /* Private */,
      16,    1,  107,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    1,  110,    2, 0x02 /* Public */,
      18,    1,  113,    2, 0x02 /* Public */,
      19,    0,  116,    2, 0x02 /* Public */,
      20,    1,  117,    2, 0x02 /* Public */,
      21,    1,  120,    2, 0x02 /* Public */,
      22,    1,  123,    2, 0x02 /* Public */,
      23,    3,  126,    2, 0x02 /* Public */,
      27,    2,  133,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    0x80000000 | 3, QMetaType::QString,    8,
    0x80000000 | 3, QMetaType::LongLong,    6,
    0x80000000 | 3, QMetaType::QString,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::QString, 0x80000000 | 25,    8,   24,   26,
    QMetaType::Bool, QMetaType::LongLong, QMetaType::Bool,    6,   28,

       0        // eod
};

void QtAccountsService::AccountsManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountsManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userAdded((*reinterpret_cast< QtAccountsService::UserAccount*(*)>(_a[1]))); break;
        case 1: _t->userDeleted((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 2: _t->userCached((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->userUncached((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->listCachedUsersFinished((*reinterpret_cast< const QtAccountsService::UserAccountList(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_userAdded((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_userDeleted((*reinterpret_cast< const QDBusObjectPath(*)>(_a[1]))); break;
        case 7: _t->cacheUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->uncacheUser((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->listCachedUsers(); break;
        case 10: { QtAccountsService::UserAccount* _r = _t->cachedUser((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QtAccountsService::UserAccount**>(_a[0]) = std::move(_r); }  break;
        case 11: { QtAccountsService::UserAccount* _r = _t->findUserById((*reinterpret_cast< qlonglong(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QtAccountsService::UserAccount**>(_a[0]) = std::move(_r); }  break;
        case 12: { QtAccountsService::UserAccount* _r = _t->findUserByName((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QtAccountsService::UserAccount**>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->createUser((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< UserAccount::AccountType(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->deleteUser((*reinterpret_cast< qlonglong(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAccountsService::UserAccount* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountsManager::*)(QtAccountsService::UserAccount * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountsManager::userAdded)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountsManager::*)(qlonglong );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountsManager::userDeleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountsManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountsManager::userCached)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountsManager::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountsManager::userUncached)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountsManager::*)(const QtAccountsService::UserAccountList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AccountsManager::listCachedUsersFinished)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject QtAccountsService::AccountsManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QtAccountsService__AccountsManager.data,
    qt_meta_data_QtAccountsService__AccountsManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QtAccountsService::AccountsManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAccountsService::AccountsManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QtAccountsService__AccountsManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QtAccountsService::AccountsManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QtAccountsService::AccountsManager::userAdded(QtAccountsService::UserAccount * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtAccountsService::AccountsManager::userDeleted(qlonglong _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtAccountsService::AccountsManager::userCached(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtAccountsService::AccountsManager::userUncached(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtAccountsService::AccountsManager::listCachedUsersFinished(const QtAccountsService::UserAccountList & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
