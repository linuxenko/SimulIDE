/****************************************************************************
** Meta object code from reading C++ file 'switchdip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/circuitwidget/components/switchdip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switchdip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SwitchDip_t {
    QByteArrayData data[6];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SwitchDip_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SwitchDip_t qt_meta_stringdata_SwitchDip = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SwitchDip"
QT_MOC_LITERAL(1, 10, 6), // "remove"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 15), // "onbuttonclicked"
QT_MOC_LITERAL(4, 34, 4), // "Size"
QT_MOC_LITERAL(5, 39, 5) // "State"

    },
    "SwitchDip\0remove\0\0onbuttonclicked\0"
    "Size\0State"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SwitchDip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    0,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::Int, 0x00195103,
       5, QMetaType::Int, 0x00095103,

       0        // eod
};

void SwitchDip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SwitchDip *_t = static_cast<SwitchDip *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->remove(); break;
        case 1: _t->onbuttonclicked(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SwitchDip *_t = static_cast<SwitchDip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->size(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->state(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SwitchDip *_t = static_cast<SwitchDip *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSize(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setState(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject SwitchDip::staticMetaObject = {
    { &Component::staticMetaObject, qt_meta_stringdata_SwitchDip.data,
      qt_meta_data_SwitchDip,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SwitchDip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SwitchDip::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SwitchDip.stringdata0))
        return static_cast<void*>(const_cast< SwitchDip*>(this));
    if (!strcmp(_clname, "eElement"))
        return static_cast< eElement*>(const_cast< SwitchDip*>(this));
    return Component::qt_metacast(_clname);
}

int SwitchDip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Component::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
