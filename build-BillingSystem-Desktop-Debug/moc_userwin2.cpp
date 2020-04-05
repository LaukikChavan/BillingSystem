/****************************************************************************
** Meta object code from reading C++ file 'userwin2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BillingSystem/userwin2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userwin2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserWin2_t {
    QByteArrayData data[9];
    char stringdata0[138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserWin2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserWin2_t qt_meta_stringdata_UserWin2 = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserWin2"
QT_MOC_LITERAL(1, 9, 18), // "on_beckBtn_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(4, 55, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 72, 4), // "item"
QT_MOC_LITERAL(6, 77, 18), // "on_cartBtn_clicked"
QT_MOC_LITERAL(7, 96, 19), // "on_clearBtn_clicked"
QT_MOC_LITERAL(8, 116, 21) // "on_printerBtn_clicked"

    },
    "UserWin2\0on_beckBtn_clicked\0\0"
    "on_listWidget_itemClicked\0QListWidgetItem*\0"
    "item\0on_cartBtn_clicked\0on_clearBtn_clicked\0"
    "on_printerBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserWin2[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserWin2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserWin2 *_t = static_cast<UserWin2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_beckBtn_clicked(); break;
        case 1: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->on_cartBtn_clicked(); break;
        case 3: _t->on_clearBtn_clicked(); break;
        case 4: _t->on_printerBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserWin2::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UserWin2.data,
      qt_meta_data_UserWin2,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *UserWin2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWin2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserWin2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UserWin2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
