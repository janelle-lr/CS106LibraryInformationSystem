/****************************************************************************
** Meta object code from reading C++ file 'membercatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/membercatalogue.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'membercatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberCatalogue_t {
    const uint offsetsAndSize[22];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_memberCatalogue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_memberCatalogue_t qt_meta_stringdata_memberCatalogue = {
    {
QT_MOC_LITERAL(0, 15), // "memberCatalogue"
QT_MOC_LITERAL(16, 14), // "showMainWindow"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 18), // "issueButtonClicked"
QT_MOC_LITERAL(51, 17), // "viewButtonClicked"
QT_MOC_LITERAL(69, 21), // "on_accountBtn_clicked"
QT_MOC_LITERAL(91, 21), // "on_signoutBtn_clicked"
QT_MOC_LITERAL(113, 10), // "signOutAcc"
QT_MOC_LITERAL(124, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(146, 5), // "index"
QT_MOC_LITERAL(152, 13) // "deleteRecords"

    },
    "memberCatalogue\0showMainWindow\0\0"
    "issueButtonClicked\0viewButtonClicked\0"
    "on_accountBtn_clicked\0on_signoutBtn_clicked\0"
    "signOutAcc\0on_comboBox_activated\0index\0"
    "deleteRecords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberCatalogue[] = {

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
       8,    1,   68,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,

       0        // eod
};

void memberCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberCatalogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showMainWindow(); break;
        case 1: _t->issueButtonClicked(); break;
        case 2: _t->viewButtonClicked(); break;
        case 3: _t->on_accountBtn_clicked(); break;
        case 4: _t->on_signoutBtn_clicked(); break;
        case 5: _t->signOutAcc(); break;
        case 6: _t->on_comboBox_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->deleteRecords(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (memberCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberCatalogue::showMainWindow)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject memberCatalogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_memberCatalogue.offsetsAndSize,
    qt_meta_data_memberCatalogue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_memberCatalogue_t
, QtPrivate::TypeAndForceComplete<memberCatalogue, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *memberCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int memberCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void memberCatalogue::showMainWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
