/****************************************************************************
** Meta object code from reading C++ file 'logindialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../PinCodeDLL/logindialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'logindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[15];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 11), // "loginSignal"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 16), // "on_BTN_1_clicked"
QT_MOC_LITERAL(4, 42, 16), // "on_BTN_2_clicked"
QT_MOC_LITERAL(5, 59, 16), // "on_BTN_3_clicked"
QT_MOC_LITERAL(6, 76, 16), // "on_BTN_4_clicked"
QT_MOC_LITERAL(7, 93, 16), // "on_BTN_5_clicked"
QT_MOC_LITERAL(8, 110, 16), // "on_BTN_6_clicked"
QT_MOC_LITERAL(9, 127, 16), // "on_BTN_7_clicked"
QT_MOC_LITERAL(10, 144, 16), // "on_BTN_8_clicked"
QT_MOC_LITERAL(11, 161, 16), // "on_BTN_9_clicked"
QT_MOC_LITERAL(12, 178, 17), // "on_REMOVE_clicked"
QT_MOC_LITERAL(13, 196, 18), // "on_CORRECT_clicked"
QT_MOC_LITERAL(14, 215, 17) // "on_ACCEPT_clicked"

    },
    "LoginDialog\0loginSignal\0\0on_BTN_1_clicked\0"
    "on_BTN_2_clicked\0on_BTN_3_clicked\0"
    "on_BTN_4_clicked\0on_BTN_5_clicked\0"
    "on_BTN_6_clicked\0on_BTN_7_clicked\0"
    "on_BTN_8_clicked\0on_BTN_9_clicked\0"
    "on_REMOVE_clicked\0on_CORRECT_clicked\0"
    "on_ACCEPT_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   82,    2, 0x08 /* Private */,
       4,    0,   83,    2, 0x08 /* Private */,
       5,    0,   84,    2, 0x08 /* Private */,
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_BTN_1_clicked(); break;
        case 2: _t->on_BTN_2_clicked(); break;
        case 3: _t->on_BTN_3_clicked(); break;
        case 4: _t->on_BTN_4_clicked(); break;
        case 5: _t->on_BTN_5_clicked(); break;
        case 6: _t->on_BTN_6_clicked(); break;
        case 7: _t->on_BTN_7_clicked(); break;
        case 8: _t->on_BTN_8_clicked(); break;
        case 9: _t->on_BTN_9_clicked(); break;
        case 10: _t->on_REMOVE_clicked(); break;
        case 11: _t->on_CORRECT_clicked(); break;
        case 12: _t->on_ACCEPT_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoginDialog::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginDialog::loginSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoginDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_LoginDialog.data,
    qt_meta_data_LoginDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LoginDialog::loginSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
