/****************************************************************************
** Meta object code from reading C++ file 'eventview.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eventview.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EventsWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      34,   13,   13,   13, 0x0a,
      54,   13,   13,   13, 0x08,
      77,   13,   13,   13, 0x08,
      88,   13,   13,   13, 0x08,
     111,  105,   13,   13, 0x08,
     139,   13,   13,   13, 0x08,
     165,   13,   13,   13, 0x08,

 // enums: name, flags, count, data
     185, 0x0,   12,   62,
     195, 0x0,   12,   86,

 // enum data: key, value
     206, uint(EventsWidget::NoEvents),
     215, uint(EventsWidget::StateChanged),
     228, uint(EventsWidget::NameChanged),
     240, uint(EventsWidget::DescriptionChanged),
     259, uint(EventsWidget::Window),
     266, uint(EventsWidget::Focus),
     272, uint(EventsWidget::Document),
     281, uint(EventsWidget::Object),
     288, uint(EventsWidget::Text),
     293, uint(EventsWidget::Table),
     299, uint(EventsWidget::Others),
     306, uint(EventsWidget::AllEvents),
     206, uint(EventsWidget::NoEvents),
     215, uint(EventsWidget::StateChanged),
     228, uint(EventsWidget::NameChanged),
     240, uint(EventsWidget::DescriptionChanged),
     259, uint(EventsWidget::Window),
     266, uint(EventsWidget::Focus),
     272, uint(EventsWidget::Document),
     281, uint(EventsWidget::Object),
     288, uint(EventsWidget::Text),
     293, uint(EventsWidget::Table),
     299, uint(EventsWidget::Others),
     306, uint(EventsWidget::AllEvents),

       0        // eod
};

static const char qt_meta_stringdata_EventsWidget[] = {
    "EventsWidget\0\0anchorClicked(QUrl)\0"
    "checkStateChanged()\0installUpdateHandler()\0"
    "clearLog()\0processPending()\0index\0"
    "eventActivated(QModelIndex)\0"
    "accessibleFilterChanged()\0roleFilterChanged()\0"
    "EventType\0EventTypes\0NoEvents\0"
    "StateChanged\0NameChanged\0DescriptionChanged\0"
    "Window\0Focus\0Document\0Object\0Text\0"
    "Table\0Others\0AllEvents\0"
};

void EventsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EventsWidget *_t = static_cast<EventsWidget *>(_o);
        switch (_id) {
        case 0: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 1: _t->checkStateChanged(); break;
        case 2: _t->installUpdateHandler(); break;
        case 3: _t->clearLog(); break;
        case 4: _t->processPending(); break;
        case 5: _t->eventActivated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->accessibleFilterChanged(); break;
        case 7: _t->roleFilterChanged(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EventsWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EventsWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EventsWidget,
      qt_meta_data_EventsWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EventsWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EventsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EventsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EventsWidget))
        return static_cast<void*>(const_cast< EventsWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int EventsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EventsWidget::anchorClicked(const QUrl & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
