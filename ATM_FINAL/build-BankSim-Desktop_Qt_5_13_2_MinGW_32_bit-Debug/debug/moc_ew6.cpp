/****************************************************************************
** Meta object code from reading C++ file 'ew6.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BankSim/ew6.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ew6.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EW6_t {
    QByteArrayData data[11];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EW6_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EW6_t qt_meta_stringdata_EW6 = {
    {
QT_MOC_LITERAL(0, 0, 3), // "EW6"
QT_MOC_LITERAL(1, 4, 9), // "saldoSlot"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 13), // "on_B1_clicked"
QT_MOC_LITERAL(4, 29, 13), // "on_B2_clicked"
QT_MOC_LITERAL(5, 43, 13), // "on_B3_clicked"
QT_MOC_LITERAL(6, 57, 13), // "on_B4_clicked"
QT_MOC_LITERAL(7, 71, 13), // "on_B5_clicked"
QT_MOC_LITERAL(8, 85, 13), // "on_B6_clicked"
QT_MOC_LITERAL(9, 99, 13), // "on_B7_clicked"
QT_MOC_LITERAL(10, 113, 13) // "on_B8_clicked"

    },
    "EW6\0saldoSlot\0\0on_B1_clicked\0on_B2_clicked\0"
    "on_B3_clicked\0on_B4_clicked\0on_B5_clicked\0"
    "on_B6_clicked\0on_B7_clicked\0on_B8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EW6[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       3,    0,   62,    2, 0x08 /* Private */,
       4,    0,   63,    2, 0x08 /* Private */,
       5,    0,   64,    2, 0x08 /* Private */,
       6,    0,   65,    2, 0x08 /* Private */,
       7,    0,   66,    2, 0x08 /* Private */,
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
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

void EW6::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EW6 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saldoSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_B1_clicked(); break;
        case 2: _t->on_B2_clicked(); break;
        case 3: _t->on_B3_clicked(); break;
        case 4: _t->on_B4_clicked(); break;
        case 5: _t->on_B5_clicked(); break;
        case 6: _t->on_B6_clicked(); break;
        case 7: _t->on_B7_clicked(); break;
        case 8: _t->on_B8_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EW6::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_EW6.data,
    qt_meta_data_EW6,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EW6::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EW6::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EW6.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EW6::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
