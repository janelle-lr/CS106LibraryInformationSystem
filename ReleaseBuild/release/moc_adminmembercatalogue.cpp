/****************************************************************************
** Meta object code from reading C++ file 'adminmembercatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/adminmembercatalogue.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmembercatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminMemberCatalogue_t {
    const uint offsetsAndSize[20];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_adminMemberCatalogue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_adminMemberCatalogue_t qt_meta_stringdata_adminMemberCatalogue = {
    {
QT_MOC_LITERAL(0, 20), // "adminMemberCatalogue"
QT_MOC_LITERAL(21, 9), // "showAdmin"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 13), // "getMainWindow"
QT_MOC_LITERAL(46, 17), // "editButtonClicked"
QT_MOC_LITERAL(64, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(84, 25), // "on_catalogueBtn_2_clicked"
QT_MOC_LITERAL(110, 23), // "on_signoutBtn_2_clicked"
QT_MOC_LITERAL(134, 23), // "on_addMemberBtn_clicked"
QT_MOC_LITERAL(158, 16) // "deleteAllRecords"

    },
    "adminMemberCatalogue\0showAdmin\0\0"
    "getMainWindow\0editButtonClicked\0"
    "deleteButtonClicked\0on_catalogueBtn_2_clicked\0"
    "on_signoutBtn_2_clicked\0on_addMemberBtn_clicked\0"
    "deleteAllRecords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminMemberCatalogue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminMemberCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminMemberCatalogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showAdmin(); break;
        case 1: _t->getMainWindow(); break;
        case 2: _t->editButtonClicked(); break;
        case 3: _t->deleteButtonClicked(); break;
        case 4: _t->on_catalogueBtn_2_clicked(); break;
        case 5: _t->on_signoutBtn_2_clicked(); break;
        case 6: _t->on_addMemberBtn_clicked(); break;
        case 7: _t->deleteAllRecords(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (adminMemberCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminMemberCatalogue::showAdmin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (adminMemberCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminMemberCatalogue::getMainWindow)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject adminMemberCatalogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminMemberCatalogue.offsetsAndSize,
    qt_meta_data_adminMemberCatalogue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_adminMemberCatalogue_t
, QtPrivate::TypeAndForceComplete<adminMemberCatalogue, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *adminMemberCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminMemberCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminMemberCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminMemberCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void adminMemberCatalogue::showAdmin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void adminMemberCatalogue::getMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
