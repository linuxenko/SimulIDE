/****************************************************************************
** Meta object code from reading C++ file 'adc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/circuitwidget/components/adc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ADC_t {
    QByteArrayData data[6];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ADC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ADC_t qt_meta_stringdata_ADC = {
    {
QT_MOC_LITERAL(0, 0, 3), // "ADC"
QT_MOC_LITERAL(1, 4, 10), // "Out_High_V"
QT_MOC_LITERAL(2, 15, 9), // "Out_Low_V"
QT_MOC_LITERAL(3, 25, 9), // "Out_Imped"
QT_MOC_LITERAL(4, 35, 4), // "Vref"
QT_MOC_LITERAL(5, 40, 8) // "Num_Bits"

    },
    "ADC\0Out_High_V\0Out_Low_V\0Out_Imped\0"
    "Vref\0Num_Bits"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ADC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Double, 0x00195003,
       2, QMetaType::Double, 0x00195003,
       3, QMetaType::Double, 0x00195003,
       4, QMetaType::Double, 0x00195003,
       5, QMetaType::Int, 0x00195003,

       0        // eod
};

void ADC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        ADC *_t = static_cast<ADC *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->outHighV(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->outLowV(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->outImp(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->maxVolt(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numOuts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        ADC *_t = static_cast<ADC *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOutHighV(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setOutLowV(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setOutImp(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setMaxVolt(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setNumOuts(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject ADC::staticMetaObject = {
    { &LogicComponent::staticMetaObject, qt_meta_stringdata_ADC.data,
      qt_meta_data_ADC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ADC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ADC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ADC.stringdata0))
        return static_cast<void*>(const_cast< ADC*>(this));
    if (!strcmp(_clname, "eInBus"))
        return static_cast< eInBus*>(const_cast< ADC*>(this));
    return LogicComponent::qt_metacast(_clname);
}

int ADC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LogicComponent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
