/****************************************************************************
** Meta object code from reading C++ file 'switch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/circuitwidget/components/switch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'switch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Switch_t {
    QByteArrayData data[4];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Switch_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Switch_t qt_meta_stringdata_Switch = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Switch"
QT_MOC_LITERAL(1, 7, 5), // "Poles"
QT_MOC_LITERAL(2, 13, 2), // "DT"
QT_MOC_LITERAL(3, 16, 10) // "Norm_Close"

    },
    "Switch\0Poles\0DT\0Norm_Close"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Switch[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00195103,
       2, QMetaType::Bool, 0x00195003,
       3, QMetaType::Bool, 0x00195003,

       0        // eod
};

void Switch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        Switch *_t = static_cast<Switch *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->poles(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->dt(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nClose(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        Switch *_t = static_cast<Switch *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPoles(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDt(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNClose(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject Switch::staticMetaObject = {
    { &SwitchBase::staticMetaObject, qt_meta_stringdata_Switch.data,
      qt_meta_data_Switch,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Switch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Switch::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Switch.stringdata0))
        return static_cast<void*>(const_cast< Switch*>(this));
    return SwitchBase::qt_metacast(_clname);
}

int Switch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SwitchBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
