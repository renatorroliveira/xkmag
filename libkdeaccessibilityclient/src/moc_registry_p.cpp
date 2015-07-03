/****************************************************************************
** Meta object code from reading C++ file 'registry_p.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qaccessibilityclient/registry_p.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registry_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAccessibleClient__RegistryPrivate[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      66,   53,   36,   35, 0x08,
     112,  102,   36,   35, 0x08,
     157,   35,   36,   35, 0x08,
     181,   35,   35,   35, 0x08,
     206,  201,   35,   35, 0x08,
     317,  267,   35,   35, 0x08,
     412,  372,   35,   35, 0x08,
     533,  500,   35,   35, 0x08,
     619,  500,   35,   35, 0x08,
     706,  500,   35,   35, 0x08,
     791,  500,   35,   35, 0x08,
     879,  500,   35,   35, 0x08,
     967,  500,   35,   35, 0x08,
    1055,  500,   35,   35, 0x08,
    1142,  500,   35,   35, 0x08,
    1230,  500,   35,   35, 0x08,
    1320,  500,   35,   35, 0x08,
    1413,  500,   35,   35, 0x08,
    1507,  500,   35,   35, 0x08,
    1592,  500,   35,   35, 0x08,
    1677,  500,   35,   35, 0x08,
    1761,  500,   35,   35, 0x08,
    1847,  500,   35,   35, 0x08,
    1932,  500,   35,   35, 0x08,
    2019,  500,   35,   35, 0x08,
    2142, 2105,   35,   35, 0x08,
    2231, 2105,   35,   35, 0x08,
    2323, 2105,   35,   35, 0x08,
    2413, 2105,   35,   35, 0x08,
    2499,  500,   35,   35, 0x08,
    2587,  500,   35,   35, 0x08,
    2712, 2681,   35,   35, 0x08,
    2804, 2797,   35,   35, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QAccessibleClient__RegistryPrivate[] = {
    "QAccessibleClient::RegistryPrivate\0\0"
    "AccessibleObject\0service,path\0"
    "accessibleFromPath(QString,QString)\0"
    "reference\0accessibleFromReference(QSpiObjectReference)\0"
    "accessibleFromContext()\0connectionFetched()\0"
    "call\0slotSubscribeEventListenerFinished(QDBusPendingCallWatcher*)\0"
    "interface,changedProperties,invalidatedProperties\0"
    "a11yConnectionChanged(QString,QVariantMap,QStringList)\0"
    "property,detail1,detail2,args,reference\0"
    "slotPropertyChange(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "state,detail1,detail2,,reference\0"
    "slotWindowCreate(QString,int,int,QDBusVariant,QAccessibleClient::QSpiO"
    "bjectReference)\0"
    "slotWindowDestroy(QString,int,int,QDBusVariant,QAccessibleClient::QSpi"
    "ObjectReference)\0"
    "slotWindowClose(QString,int,int,QDBusVariant,QAccessibleClient::QSpiOb"
    "jectReference)\0"
    "slotWindowReparent(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "slotWindowMinimize(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "slotWindowMaximize(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "slotWindowRestore(QString,int,int,QDBusVariant,QAccessibleClient::QSpi"
    "ObjectReference)\0"
    "slotWindowActivate(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "slotWindowDeactivate(QString,int,int,QDBusVariant,QAccessibleClient::Q"
    "SpiObjectReference)\0"
    "slotWindowDesktopCreate(QString,int,int,QDBusVariant,QAccessibleClient"
    "::QSpiObjectReference)\0"
    "slotWindowDesktopDestroy(QString,int,int,QDBusVariant,QAccessibleClien"
    "t::QSpiObjectReference)\0"
    "slotWindowRaise(QString,int,int,QDBusVariant,QAccessibleClient::QSpiOb"
    "jectReference)\0"
    "slotWindowLower(QString,int,int,QDBusVariant,QAccessibleClient::QSpiOb"
    "jectReference)\0"
    "slotWindowMove(QString,int,int,QDBusVariant,QAccessibleClient::QSpiObj"
    "ectReference)\0"
    "slotWindowResize(QString,int,int,QDBusVariant,QAccessibleClient::QSpiO"
    "bjectReference)\0"
    "slotWindowShade(QString,int,int,QDBusVariant,QAccessibleClient::QSpiOb"
    "jectReference)\0"
    "slotWindowUnshade(QString,int,int,QDBusVariant,QAccessibleClient::QSpi"
    "ObjectReference)\0"
    "slotStateChanged(QString,int,int,QDBusVariant,QAccessibleClient::QSpiO"
    "bjectReference)\0"
    "state,detail1,detail2,args,reference\0"
    "slotChildrenChanged(QString,int,int,QDBusVariant,QAccessibleClient::QS"
    "piObjectReference)\0"
    "slotVisibleDataChanged(QString,int,int,QDBusVariant,QAccessibleClient:"
    ":QSpiObjectReference)\0"
    "slotSelectionChanged(QString,int,int,QDBusVariant,QAccessibleClient::Q"
    "SpiObjectReference)\0"
    "slotModelChanged(QString,int,int,QDBusVariant,QAccessibleClient::QSpiO"
    "bjectReference)\0"
    "slotTextCaretMoved(QString,int,int,QDBusVariant,QAccessibleClient::QSp"
    "iObjectReference)\0"
    "slotTextSelectionChanged(QString,int,int,QDBusVariant,QAccessibleClien"
    "t::QSpiObjectReference)\0"
    "state,start,end,text,reference\0"
    "slotTextChanged(QString,int,int,QDBusVariant,QAccessibleClient::QSpiOb"
    "jectReference)\0"
    "action\0actionTriggered(QString)\0"
};

void QAccessibleClient::RegistryPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        RegistryPrivate *_t = static_cast<RegistryPrivate *>(_o);
        switch (_id) {
        case 0: { AccessibleObject _r = _t->accessibleFromPath((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< AccessibleObject*>(_a[0]) = _r; }  break;
        case 1: { AccessibleObject _r = _t->accessibleFromReference((*reinterpret_cast< const QSpiObjectReference(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AccessibleObject*>(_a[0]) = _r; }  break;
        case 2: { AccessibleObject _r = _t->accessibleFromContext();
            if (_a[0]) *reinterpret_cast< AccessibleObject*>(_a[0]) = _r; }  break;
        case 3: _t->connectionFetched(); break;
        case 4: _t->slotSubscribeEventListenerFinished((*reinterpret_cast< QDBusPendingCallWatcher*(*)>(_a[1]))); break;
        case 5: _t->a11yConnectionChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariantMap(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3]))); break;
        case 6: _t->slotPropertyChange((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 7: _t->slotWindowCreate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 8: _t->slotWindowDestroy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 9: _t->slotWindowClose((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 10: _t->slotWindowReparent((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 11: _t->slotWindowMinimize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 12: _t->slotWindowMaximize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 13: _t->slotWindowRestore((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 14: _t->slotWindowActivate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 15: _t->slotWindowDeactivate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 16: _t->slotWindowDesktopCreate((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 17: _t->slotWindowDesktopDestroy((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 18: _t->slotWindowRaise((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 19: _t->slotWindowLower((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 20: _t->slotWindowMove((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 21: _t->slotWindowResize((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 22: _t->slotWindowShade((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 23: _t->slotWindowUnshade((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 24: _t->slotStateChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 25: _t->slotChildrenChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 26: _t->slotVisibleDataChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 27: _t->slotSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 28: _t->slotModelChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 29: _t->slotTextCaretMoved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 30: _t->slotTextSelectionChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 31: _t->slotTextChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QDBusVariant(*)>(_a[4])),(*reinterpret_cast< const QAccessibleClient::QSpiObjectReference(*)>(_a[5]))); break;
        case 32: _t->actionTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAccessibleClient::RegistryPrivate::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAccessibleClient::RegistryPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAccessibleClient__RegistryPrivate,
      qt_meta_data_QAccessibleClient__RegistryPrivate, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAccessibleClient::RegistryPrivate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAccessibleClient::RegistryPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAccessibleClient::RegistryPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAccessibleClient__RegistryPrivate))
        return static_cast<void*>(const_cast< RegistryPrivate*>(this));
    if (!strcmp(_clname, "QDBusContext"))
        return static_cast< QDBusContext*>(const_cast< RegistryPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QAccessibleClient::RegistryPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
