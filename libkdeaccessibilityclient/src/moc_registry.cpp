/****************************************************************************
** Meta object code from reading C++ file 'registry.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qaccessibilityclient/registry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QAccessibleClient__Registry[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       1,  234, // enums/sets
       0,    0, // constructors
       0,       // flags
      36,       // signalCount

 // signals: signature, parameters, type, tag, flags
      37,   29,   28,   28, 0x05,
      58,   29,   28,   28, 0x05,
      98,   91,   28,   28, 0x05,
     141,   91,   28,   28, 0x05,
     186,   91,   28,   28, 0x05,
     231,   91,   28,   28, 0x05,
     282,   91,   28,   28, 0x05,
     335,   91,   28,   28, 0x05,
     385,   91,   28,   28, 0x05,
     439,   91,   28,   28, 0x05,
     492,   91,   28,   28, 0x05,
     545,   91,   28,   28, 0x05,
     597,   91,   28,   28, 0x05,
     650,   91,   28,   28, 0x05,
     705,   91,   28,   28, 0x05,
     763,   91,   28,   28, 0x05,
     823,   91,   28,   28, 0x05,
     873,   91,   28,   28, 0x05,
     924,   91,   28,   28, 0x05,
     973,   91,   28,   28, 0x05,
    1024,   91,   28,   28, 0x05,
    1074,   91,   28,   28, 0x05,
    1146, 1126,   28,   28, 0x05,
    1227, 1209,   28,   28, 0x05,
    1279, 1209,   28,   28, 0x05,
    1333,   91,   28,   28, 0x05,
    1389,   91,   28,   28, 0x05,
    1443,   91,   28,   28, 0x05,
    1493,   91,   28,   28, 0x05,
    1554, 1543,   28,   28, 0x05,
    1610,   91,   28,   28, 0x05,
    1668,   91,   28,   28, 0x05,
    1727,   91,   28,   28, 0x05,
    1827, 1793,   28,   28, 0x05,
    1892, 1793,   28,   28, 0x05,
    1958, 1793,   28,   28, 0x05,

 // slots: signature, parameters, type, tag, flags
    2028,   28, 2023,   28, 0x0a,
    2047, 2040,   28,   28, 0x0a,
    2064,   28, 2023,   28, 0x0a,
    2088, 2040,   28,   28, 0x0a,
    2127, 2117,   28,   28, 0x0a,
    2182,   28, 2167,   28, 0x0a,
    2233,   28, 2209,   28, 0x0a,
    2269, 2265, 2248,   28, 0x0a,

 // enums: name, flags, count, data
    2293, 0x0,   13,  238,

 // enum data: key, value
    2307, uint(QAccessibleClient::Registry::NoEventListeners),
    2324, uint(QAccessibleClient::Registry::Window),
    2331, uint(QAccessibleClient::Registry::Focus),
    2337, uint(QAccessibleClient::Registry::StateChanged),
    2350, uint(QAccessibleClient::Registry::ChildrenChanged),
    2366, uint(QAccessibleClient::Registry::VisibleDataChanged),
    2385, uint(QAccessibleClient::Registry::SelectionChanged),
    2402, uint(QAccessibleClient::Registry::ModelChanged),
    2415, uint(QAccessibleClient::Registry::TextCaretMoved),
    2430, uint(QAccessibleClient::Registry::TextChanged),
    2442, uint(QAccessibleClient::Registry::TextSelectionChanged),
    2463, uint(QAccessibleClient::Registry::PropertyChanged),
    2479, uint(QAccessibleClient::Registry::AllEventListeners),

       0        // eod
};

static const char qt_meta_stringdata_QAccessibleClient__Registry[] = {
    "QAccessibleClient::Registry\0\0enabled\0"
    "enabledChanged(bool)\0"
    "screenReaderEnabledChanged(bool)\0"
    "object\0added(QAccessibleClient::AccessibleObject)\0"
    "removed(QAccessibleClient::AccessibleObject)\0"
    "defunct(QAccessibleClient::AccessibleObject)\0"
    "windowCreated(QAccessibleClient::AccessibleObject)\0"
    "windowDestroyed(QAccessibleClient::AccessibleObject)\0"
    "windowClosed(QAccessibleClient::AccessibleObject)\0"
    "windowReparented(QAccessibleClient::AccessibleObject)\0"
    "windowMinimized(QAccessibleClient::AccessibleObject)\0"
    "windowMaximized(QAccessibleClient::AccessibleObject)\0"
    "windowRestored(QAccessibleClient::AccessibleObject)\0"
    "windowActivated(QAccessibleClient::AccessibleObject)\0"
    "windowDeactivated(QAccessibleClient::AccessibleObject)\0"
    "windowDesktopCreated(QAccessibleClient::AccessibleObject)\0"
    "windowDesktopDestroyed(QAccessibleClient::AccessibleObject)\0"
    "windowRaised(QAccessibleClient::AccessibleObject)\0"
    "windowLowered(QAccessibleClient::AccessibleObject)\0"
    "windowMoved(QAccessibleClient::AccessibleObject)\0"
    "windowResized(QAccessibleClient::AccessibleObject)\0"
    "windowShaded(QAccessibleClient::AccessibleObject)\0"
    "windowUnshaded(QAccessibleClient::AccessibleObject)\0"
    "object,state,active\0"
    "stateChanged(QAccessibleClient::AccessibleObject,QString,bool)\0"
    "parent,childIndex\0"
    "childAdded(QAccessibleClient::AccessibleObject,int)\0"
    "childRemoved(QAccessibleClient::AccessibleObject,int)\0"
    "visibleDataChanged(QAccessibleClient::AccessibleObject)\0"
    "selectionChanged(QAccessibleClient::AccessibleObject)\0"
    "modelChanged(QAccessibleClient::AccessibleObject)\0"
    "focusChanged(QAccessibleClient::AccessibleObject)\0"
    "object,pos\0"
    "textCaretMoved(QAccessibleClient::AccessibleObject,int)\0"
    "textSelectionChanged(QAccessibleClient::AccessibleObject)\0"
    "accessibleNameChanged(QAccessibleClient::AccessibleObject)\0"
    "accessibleDescriptionChanged(QAccessibleClient::AccessibleObject)\0"
    "object,text,startOffset,endOffset\0"
    "textChanged(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "textInserted(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "textRemoved(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "bool\0isEnabled()\0enable\0setEnabled(bool)\0"
    "isScreenReaderEnabled()\0"
    "setScreenReaderEnabled(bool)\0listeners\0"
    "subscribeEventListeners(EventListeners)\0"
    "EventListeners\0subscribedEventListeners()\0"
    "QList<AccessibleObject>\0applications()\0"
    "AccessibleObject\0url\0accessibleFromUrl(QUrl)\0"
    "EventListener\0NoEventListeners\0Window\0"
    "Focus\0StateChanged\0ChildrenChanged\0"
    "VisibleDataChanged\0SelectionChanged\0"
    "ModelChanged\0TextCaretMoved\0TextChanged\0"
    "TextSelectionChanged\0PropertyChanged\0"
    "AllEventListeners\0"
};

void QAccessibleClient::Registry::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Registry *_t = static_cast<Registry *>(_o);
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->screenReaderEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->added((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 3: _t->removed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 4: _t->defunct((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 5: _t->windowCreated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 6: _t->windowDestroyed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 7: _t->windowClosed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 8: _t->windowReparented((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 9: _t->windowMinimized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 10: _t->windowMaximized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 11: _t->windowRestored((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 12: _t->windowActivated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 13: _t->windowDeactivated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 14: _t->windowDesktopCreated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 15: _t->windowDesktopDestroyed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 16: _t->windowRaised((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 17: _t->windowLowered((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 18: _t->windowMoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 19: _t->windowResized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 20: _t->windowShaded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 21: _t->windowUnshaded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 22: _t->stateChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 23: _t->childAdded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->childRemoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 25: _t->visibleDataChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 26: _t->selectionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 27: _t->modelChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 28: _t->focusChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 29: _t->textCaretMoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 30: _t->textSelectionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 31: _t->accessibleNameChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 32: _t->accessibleDescriptionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 33: _t->textChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 34: _t->textInserted((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 35: _t->textRemoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: { bool _r = _t->isScreenReaderEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 39: _t->setScreenReaderEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->subscribeEventListeners((*reinterpret_cast< const EventListeners(*)>(_a[1]))); break;
        case 41: { EventListeners _r = _t->subscribedEventListeners();
            if (_a[0]) *reinterpret_cast< EventListeners*>(_a[0]) = _r; }  break;
        case 42: { QList<AccessibleObject> _r = _t->applications();
            if (_a[0]) *reinterpret_cast< QList<AccessibleObject>*>(_a[0]) = _r; }  break;
        case 43: { AccessibleObject _r = _t->accessibleFromUrl((*reinterpret_cast< const QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AccessibleObject*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QAccessibleClient::Registry::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QAccessibleClient::Registry::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAccessibleClient__Registry,
      qt_meta_data_QAccessibleClient__Registry, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QAccessibleClient::Registry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QAccessibleClient::Registry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QAccessibleClient::Registry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QAccessibleClient__Registry))
        return static_cast<void*>(const_cast< Registry*>(this));
    return QObject::qt_metacast(_clname);
}

int QAccessibleClient::Registry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void QAccessibleClient::Registry::enabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAccessibleClient::Registry::screenReaderEnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAccessibleClient::Registry::added(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAccessibleClient::Registry::removed(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAccessibleClient::Registry::defunct(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAccessibleClient::Registry::windowCreated(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QAccessibleClient::Registry::windowDestroyed(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QAccessibleClient::Registry::windowClosed(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QAccessibleClient::Registry::windowReparented(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QAccessibleClient::Registry::windowMinimized(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QAccessibleClient::Registry::windowMaximized(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QAccessibleClient::Registry::windowRestored(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QAccessibleClient::Registry::windowActivated(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QAccessibleClient::Registry::windowDeactivated(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QAccessibleClient::Registry::windowDesktopCreated(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QAccessibleClient::Registry::windowDesktopDestroyed(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QAccessibleClient::Registry::windowRaised(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QAccessibleClient::Registry::windowLowered(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void QAccessibleClient::Registry::windowMoved(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void QAccessibleClient::Registry::windowResized(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QAccessibleClient::Registry::windowShaded(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QAccessibleClient::Registry::windowUnshaded(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QAccessibleClient::Registry::stateChanged(const QAccessibleClient::AccessibleObject & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void QAccessibleClient::Registry::childAdded(const QAccessibleClient::AccessibleObject & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void QAccessibleClient::Registry::childRemoved(const QAccessibleClient::AccessibleObject & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void QAccessibleClient::Registry::visibleDataChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void QAccessibleClient::Registry::selectionChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void QAccessibleClient::Registry::modelChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void QAccessibleClient::Registry::focusChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void QAccessibleClient::Registry::textCaretMoved(const QAccessibleClient::AccessibleObject & _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void QAccessibleClient::Registry::textSelectionChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void QAccessibleClient::Registry::accessibleNameChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void QAccessibleClient::Registry::accessibleDescriptionChanged(const QAccessibleClient::AccessibleObject & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void QAccessibleClient::Registry::textChanged(const QAccessibleClient::AccessibleObject & _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void QAccessibleClient::Registry::textInserted(const QAccessibleClient::AccessibleObject & _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void QAccessibleClient::Registry::textRemoved(const QAccessibleClient::AccessibleObject & _t1, const QString & _t2, int _t3, int _t4)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}
QT_END_MOC_NAMESPACE
