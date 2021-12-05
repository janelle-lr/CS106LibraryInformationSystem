/****************************************************************************
** Meta object code from reading C++ file 'admincatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/admincatalogue.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admincatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminCatalogue_t {
    const uint offsetsAndSize[20];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_adminCatalogue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_adminCatalogue_t qt_meta_stringdata_adminCatalogue = {
    {
QT_MOC_LITERAL(0, 14), // "adminCatalogue"
QT_MOC_LITERAL(15, 14), // "showMainWindow"
QT_MOC_LITERAL(30, 0), // ""
QT_MOC_LITERAL(31, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(53, 17), // "editButtonClicked"
QT_MOC_LITERAL(71, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(91, 16), // "deleteAllRecords"
QT_MOC_LITERAL(108, 20), // "on_memberBtn_clicked"
QT_MOC_LITERAL(129, 21), // "on_signoutBtn_clicked"
QT_MOC_LITERAL(151, 10) // "signOutBtn"

    },
    "adminCatalogue\0showMainWindow\0\0"
    "on_pushButton_clicked\0editButtonClicked\0"
    "deleteButtonClicked\0deleteAllRecords\0"
    "on_memberBtn_clicked\0on_signoutBtn_clicked\0"
    "signOutBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminCatalogue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminCatalogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMainWindow(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->editButtonClicked(); break;
        case 3: _t->deleteButtonClicked(); break;
        case 4: _t->deleteAllRecords(); break;
        case 5: _t->on_memberBtn_clicked(); break;
        case 6: _t->on_signoutBtn_clicked(); break;
        case 7: _t->signOutBtn(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (adminCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminCatalogue::showMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject adminCatalogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminCatalogue.offsetsAndSize,
    qt_meta_data_adminCatalogue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_adminCatalogue_t
, QtPrivate::TypeAndForceComplete<adminCatalogue, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *adminCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void adminCatalogue::showMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
