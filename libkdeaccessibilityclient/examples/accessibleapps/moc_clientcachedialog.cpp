/****************************************************************************
** Meta object code from reading C++ file 'clientcachedialog.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "clientcachedialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientcachedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ClientCacheDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x08,
      32,   18,   18,   18, 0x08,
      55,   18,   18,   18, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ClientCacheDialog[] = {
    "ClientCacheDialog\0\0clearCache()\0"
    "cacheStrategyChanged()\0updateView()\0"
};

void ClientCacheDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ClientCacheDialog *_t = static_cast<ClientCacheDialog *>(_o);
        switch (_id) {
        case 0: _t->clearCache(); break;
        case 1: _t->cacheStrategyChanged(); break;
        case 2: _t->updateView(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ClientCacheDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ClientCacheDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ClientCacheDialog,
      qt_meta_data_ClientCacheDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ClientCacheDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ClientCacheDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ClientCacheDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ClientCacheDialog))
        return static_cast<void*>(const_cast< ClientCacheDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ClientCacheDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
