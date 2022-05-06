/****************************************************************************
** Meta object code from reading C++ file 'dllrestapi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../DLLRestApi/dllrestapi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dllrestapi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DLLRestApi_t {
    QByteArrayData data[20];
    char stringdata0[303];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DLLRestApi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DLLRestApi_t qt_meta_stringdata_DLLRestApi = {
    {
QT_MOC_LITERAL(0, 0, 10), // "DLLRestApi"
QT_MOC_LITERAL(1, 11, 10), // "NimiSignal"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "OsoiteSignal"
QT_MOC_LITERAL(4, 36, 19), // "PuhelinnumeroSignal"
QT_MOC_LITERAL(5, 56, 14), // "getSaldoSignal"
QT_MOC_LITERAL(6, 71, 23), // "postTilitapahtumaSignal"
QT_MOC_LITERAL(7, 95, 22), // "getTilitapahtumaSignal"
QT_MOC_LITERAL(8, 118, 15), // "getKorttiSignal"
QT_MOC_LITERAL(9, 134, 26), // "getAsiakasFromKorttiSignal"
QT_MOC_LITERAL(10, 161, 23), // "getTiliFromKorttiSignal"
QT_MOC_LITERAL(11, 185, 11), // "nostoSignal"
QT_MOC_LITERAL(12, 197, 13), // "asiakasSignal"
QT_MOC_LITERAL(13, 211, 12), // "getSaldoSlot"
QT_MOC_LITERAL(14, 224, 14), // "QNetworkReply*"
QT_MOC_LITERAL(15, 239, 5), // "reply"
QT_MOC_LITERAL(16, 245, 20), // "getTilitapahtumaSlot"
QT_MOC_LITERAL(17, 266, 13), // "getKorttiSlot"
QT_MOC_LITERAL(18, 280, 12), // "testiAsiakas"
QT_MOC_LITERAL(19, 293, 9) // "nostoSlot"

    },
    "DLLRestApi\0NimiSignal\0\0OsoiteSignal\0"
    "PuhelinnumeroSignal\0getSaldoSignal\0"
    "postTilitapahtumaSignal\0getTilitapahtumaSignal\0"
    "getKorttiSignal\0getAsiakasFromKorttiSignal\0"
    "getTiliFromKorttiSignal\0nostoSignal\0"
    "asiakasSignal\0getSaldoSlot\0QNetworkReply*\0"
    "reply\0getTilitapahtumaSlot\0getKorttiSlot\0"
    "testiAsiakas\0nostoSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DLLRestApi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    1,  100,    2, 0x06 /* Public */,
       5,    1,  103,    2, 0x06 /* Public */,
       6,    1,  106,    2, 0x06 /* Public */,
       7,    1,  109,    2, 0x06 /* Public */,
       8,    1,  112,    2, 0x06 /* Public */,
       9,    1,  115,    2, 0x06 /* Public */,
      10,    1,  118,    2, 0x06 /* Public */,
      11,    1,  121,    2, 0x06 /* Public */,
      12,    1,  124,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  127,    2, 0x0a /* Public */,
      16,    1,  130,    2, 0x0a /* Public */,
      17,    1,  133,    2, 0x0a /* Public */,
      18,    1,  136,    2, 0x0a /* Public */,
      19,    1,  139,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QStringList,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

void DLLRestApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DLLRestApi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NimiSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->OsoiteSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->PuhelinnumeroSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->getSaldoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->postTilitapahtumaSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->getTilitapahtumaSignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->getKorttiSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->getAsiakasFromKorttiSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->getTiliFromKorttiSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->nostoSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->asiakasSignal((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 11: _t->getSaldoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->getTilitapahtumaSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->getKorttiSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 14: _t->testiAsiakas((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 15: _t->nostoSlot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::NimiSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::OsoiteSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::PuhelinnumeroSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::getSaldoSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::postTilitapahtumaSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::getTilitapahtumaSignal)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::getKorttiSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::getAsiakasFromKorttiSignal)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::getTiliFromKorttiSignal)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::nostoSignal)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (DLLRestApi::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DLLRestApi::asiakasSignal)) {
                *result = 10;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DLLRestApi::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_DLLRestApi.data,
    qt_meta_data_DLLRestApi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DLLRestApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DLLRestApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DLLRestApi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DLLRestApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void DLLRestApi::NimiSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DLLRestApi::OsoiteSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void DLLRestApi::PuhelinnumeroSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void DLLRestApi::getSaldoSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DLLRestApi::postTilitapahtumaSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void DLLRestApi::getTilitapahtumaSignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void DLLRestApi::getKorttiSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void DLLRestApi::getAsiakasFromKorttiSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void DLLRestApi::getTiliFromKorttiSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void DLLRestApi::nostoSignal(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void DLLRestApi::asiakasSignal(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
