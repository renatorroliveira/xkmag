/****************************************************************************
** Meta object code from reading C++ file 'accessibletree.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "accessibletree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accessibletree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AccessibleTree[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      45,   15,   15,   15, 0x0a,
      58,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AccessibleTree[] = {
    "AccessibleTree\0\0navigationError(QModelIndex)\0"
    "resetModel()\0updateTopLevelApps()\0"
};

void AccessibleTree::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        AccessibleTree *_t = static_cast<AccessibleTree *>(_o);
        switch (_id) {
        case 0: _t->navigationError((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->resetModel(); break;
        case 2: _t->updateTopLevelApps(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData AccessibleTree::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AccessibleTree::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_AccessibleTree,
      qt_meta_data_AccessibleTree, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AccessibleTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AccessibleTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AccessibleTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AccessibleTree))
        return static_cast<void*>(const_cast< AccessibleTree*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int AccessibleTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void AccessibleTree::navigationError(const QModelIndex & _t1)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(const_cast< AccessibleTree *>(this), &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
