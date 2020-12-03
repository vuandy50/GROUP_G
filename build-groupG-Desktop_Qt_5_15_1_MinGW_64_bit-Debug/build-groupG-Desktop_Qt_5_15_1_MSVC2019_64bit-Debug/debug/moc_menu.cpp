/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../groupG/menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_menu_t {
    QByteArrayData data[15];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_menu_t qt_meta_stringdata_menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "menu"
QT_MOC_LITERAL(1, 5, 21), // "on_buttonName_clicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 25), // "on_buttonDistance_clicked"
QT_MOC_LITERAL(4, 54, 27), // "on_buttonDifficulty_clicked"
QT_MOC_LITERAL(5, 82, 24), // "on_buttonAccount_clicked"
QT_MOC_LITERAL(6, 107, 27), // "on_savedHikesButton_clicked"
QT_MOC_LITERAL(7, 135, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(8, 160, 16), // "on_table_clicked"
QT_MOC_LITERAL(9, 177, 11), // "QModelIndex"
QT_MOC_LITERAL(10, 189, 5), // "index"
QT_MOC_LITERAL(11, 195, 25), // "on_Difficulty_sliderMoved"
QT_MOC_LITERAL(12, 221, 8), // "position"
QT_MOC_LITERAL(13, 230, 23), // "on_Distance_sliderMoved"
QT_MOC_LITERAL(14, 254, 18) // "on_tracker_clicked"

    },
    "menu\0on_buttonName_clicked\0\0"
    "on_buttonDistance_clicked\0"
    "on_buttonDifficulty_clicked\0"
    "on_buttonAccount_clicked\0"
    "on_savedHikesButton_clicked\0"
    "on_refreshButton_clicked\0on_table_clicked\0"
    "QModelIndex\0index\0on_Difficulty_sliderMoved\0"
    "position\0on_Distance_sliderMoved\0"
    "on_tracker_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_menu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    1,   70,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,
      13,    1,   76,    2, 0x08 /* Private */,
      14,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_buttonName_clicked(); break;
        case 1: _t->on_buttonDistance_clicked(); break;
        case 2: _t->on_buttonDifficulty_clicked(); break;
        case 3: _t->on_buttonAccount_clicked(); break;
        case 4: _t->on_savedHikesButton_clicked(); break;
        case 5: _t->on_refreshButton_clicked(); break;
        case 6: _t->on_table_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_Difficulty_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_Distance_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_tracker_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject menu::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_menu.data,
    qt_meta_data_menu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_menu.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
