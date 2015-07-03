/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   12,   11,   11, 0x08,
      67,   63,   11,   11, 0x08,
     110,  106,   11,   11, 0x08,
     130,   11,   11,   11, 0x08,
     155,  148,   11,   11, 0x08,
     198,  148,   11,   11, 0x08,
     243,  148,   11,   11, 0x08,
     288,  148,   11,   11, 0x08,
     339,  148,   11,   11, 0x08,
     392,  148,   11,   11, 0x08,
     442,  148,   11,   11, 0x08,
     496,  148,   11,   11, 0x08,
     549,  148,   11,   11, 0x08,
     602,  148,   11,   11, 0x08,
     654,  148,   11,   11, 0x08,
     707,  148,   11,   11, 0x08,
     762,  148,   11,   11, 0x08,
     820,  148,   11,   11, 0x08,
     880,  148,   11,   11, 0x08,
     930,  148,   11,   11, 0x08,
     981,  148,   11,   11, 0x08,
    1030,  148,   11,   11, 0x08,
    1081,  148,   11,   11, 0x08,
    1131,  148,   11,   11, 0x08,
    1203, 1183,   11,   11, 0x08,
    1284, 1266,   11,   11, 0x08,
    1336, 1266,   11,   11, 0x08,
    1390,  148,   11,   11, 0x08,
    1446,  148,   11,   11, 0x08,
    1500,  148,   11,   11, 0x08,
    1550,  148,   11,   11, 0x08,
    1611, 1600,   11,   11, 0x08,
    1667,  148,   11,   11, 0x08,
    1759, 1725,   11,   11, 0x08,
    1824, 1725,   11,   11, 0x08,
    1890, 1725,   11,   11, 0x08,
    1955,  148,   11,   11, 0x08,
    2014,  148,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0current,\0"
    "selectionChanged(QModelIndex,QModelIndex)\0"
    "pos\0treeCustomContextMenuRequested(QPoint)\0"
    "url\0anchorClicked(QUrl)\0showClientCache()\0"
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
    "object,childIndex\0"
    "childAdded(QAccessibleClient::AccessibleObject,int)\0"
    "childRemoved(QAccessibleClient::AccessibleObject,int)\0"
    "visibleDataChanged(QAccessibleClient::AccessibleObject)\0"
    "selectionChanged(QAccessibleClient::AccessibleObject)\0"
    "modelChanged(QAccessibleClient::AccessibleObject)\0"
    "focusChanged(QAccessibleClient::AccessibleObject)\0"
    "object,pos\0"
    "textCaretMoved(QAccessibleClient::AccessibleObject,int)\0"
    "textSelectionChanged(QAccessibleClient::AccessibleObject)\0"
    "object,text,startOffset,endOffset\0"
    "textChanged(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "textInserted(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "textRemoved(QAccessibleClient::AccessibleObject,QString,int,int)\0"
    "accessibleNameChanged(QAccessibleClient::AccessibleObject)\0"
    "accessibleDescriptionChanged(QAccessibleClient::AccessibleObject)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 1: _t->treeCustomContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 2: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->showClientCache(); break;
        case 4: _t->added((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 5: _t->removed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 6: _t->defunct((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 7: _t->windowCreated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 8: _t->windowDestroyed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 9: _t->windowClosed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 10: _t->windowReparented((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 11: _t->windowMinimized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 12: _t->windowMaximized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 13: _t->windowRestored((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 14: _t->windowActivated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 15: _t->windowDeactivated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 16: _t->windowDesktopCreated((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 17: _t->windowDesktopDestroyed((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 18: _t->windowRaised((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 19: _t->windowLowered((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 20: _t->windowMoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 21: _t->windowResized((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 22: _t->windowShaded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 23: _t->windowUnshaded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 24: _t->stateChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 25: _t->childAdded((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 26: _t->childRemoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 27: _t->visibleDataChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 28: _t->selectionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 29: _t->modelChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 30: _t->focusChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 31: _t->textCaretMoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 32: _t->textSelectionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 33: _t->textChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 34: _t->textInserted((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 35: _t->textRemoved((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 36: _t->accessibleNameChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        case 37: _t->accessibleDescriptionChanged((*reinterpret_cast< const QAccessibleClient::AccessibleObject(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
