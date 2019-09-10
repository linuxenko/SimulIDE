/****************************************************************************
** Meta object code from reading C++ file 'ramtable.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/ramtable.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ramtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RamTable_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RamTable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RamTable_t qt_meta_stringdata_RamTable = {
    {
QT_MOC_LITERAL(0, 0, 8), // "RamTable"
QT_MOC_LITERAL(1, 9, 12), // "updateValues"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 13), // "clearSelected"
QT_MOC_LITERAL(4, 37, 10), // "clearTable"
QT_MOC_LITERAL(5, 48, 10), // "loadVarSet"
QT_MOC_LITERAL(6, 59, 10), // "saveVarSet"
QT_MOC_LITERAL(7, 70, 10), // "addToWatch"
QT_MOC_LITERAL(8, 81, 17) // "QTableWidgetItem*"

    },
    "RamTable\0updateValues\0\0clearSelected\0"
    "clearTable\0loadVarSet\0saveVarSet\0"
    "addToWatch\0QTableWidgetItem*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RamTable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    2,

       0        // eod
};

void RamTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RamTable *_t = static_cast<RamTable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateValues(); break;
        case 1: _t->clearSelected(); break;
        case 2: _t->clearTable(); break;
        case 3: _t->loadVarSet(); break;
        case 4: _t->saveVarSet(); break;
        case 5: _t->addToWatch((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject RamTable::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_RamTable.data,
      qt_meta_data_RamTable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RamTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RamTable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RamTable.stringdata0))
        return static_cast<void*>(const_cast< RamTable*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int RamTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
