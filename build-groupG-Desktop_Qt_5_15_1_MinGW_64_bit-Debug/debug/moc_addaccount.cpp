/****************************************************************************
** Meta object code from reading C++ file 'addaccount.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../groupG/addaccount.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addaccount.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_addAccount_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_addAccount_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_addAccount_t qt_meta_stringdata_addAccount = {
    {
QT_MOC_LITERAL(0, 0, 10), // "addAccount"
QT_MOC_LITERAL(1, 11, 7), // "addtoDB"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 7), // "account"
QT_MOC_LITERAL(4, 28, 1), // "a"
QT_MOC_LITERAL(5, 30, 11), // "clearScreen"
QT_MOC_LITERAL(6, 42, 10), // "finalCheck"
QT_MOC_LITERAL(7, 53, 10), // "checkEmpty"
QT_MOC_LITERAL(8, 64, 14), // "checkDuplicate"
QT_MOC_LITERAL(9, 79, 15), // "on_Save_clicked"
QT_MOC_LITERAL(10, 95, 17) // "on_cancel_clicked"

    },
    "addAccount\0addtoDB\0\0account\0a\0clearScreen\0"
    "finalCheck\0checkEmpty\0checkDuplicate\0"
    "on_Save_clicked\0on_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_addAccount[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void addAccount::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<addAccount *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addtoDB((*reinterpret_cast< account(*)>(_a[1]))); break;
        case 1: _t->clearScreen(); break;
        case 2: _t->finalCheck(); break;
        case 3: { bool _r = _t->checkEmpty();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->checkDuplicate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_Save_clicked(); break;
        case 6: _t->on_cancel_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject addAccount::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_addAccount.data,
    qt_meta_data_addAccount,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *addAccount::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *addAccount::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_addAccount.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int addAccount::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
