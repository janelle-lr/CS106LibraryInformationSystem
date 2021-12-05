/****************************************************************************
** Meta object code from reading C++ file 'memberviewloans.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/memberviewloans.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberviewloans.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberViewLoans_t {
    const uint offsetsAndSize[26];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_memberViewLoans_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_memberViewLoans_t qt_meta_stringdata_memberViewLoans = {
    {
QT_MOC_LITERAL(0, 15), // "memberViewLoans"
QT_MOC_LITERAL(16, 15), // "showAccountView"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 18), // "showReservesWindow"
QT_MOC_LITERAL(52, 7), // "signOut"
QT_MOC_LITERAL(60, 13), // "showCatalogue"
QT_MOC_LITERAL(74, 19), // "returnButtonClicked"
QT_MOC_LITERAL(94, 17), // "viewButtonClicked"
QT_MOC_LITERAL(112, 25), // "on_editAccountBtn_clicked"
QT_MOC_LITERAL(138, 27), // "on_reservedBooksBtn_clicked"
QT_MOC_LITERAL(166, 21), // "on_signoutBtn_clicked"
QT_MOC_LITERAL(188, 28), // "on_bcktoCatologueBtn_clicked"
QT_MOC_LITERAL(217, 13) // "deleteRecords"

    },
    "memberViewLoans\0showAccountView\0\0"
    "showReservesWindow\0signOut\0showCatalogue\0"
    "returnButtonClicked\0viewButtonClicked\0"
    "on_editAccountBtn_clicked\0"
    "on_reservedBooksBtn_clicked\0"
    "on_signoutBtn_clicked\0"
    "on_bcktoCatologueBtn_clicked\0deleteRecords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberViewLoans[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,
       5,    0,   83,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    0,   86,    2, 0x08,    7 /* Private */,
       9,    0,   87,    2, 0x08,    8 /* Private */,
      10,    0,   88,    2, 0x08,    9 /* Private */,
      11,    0,   89,    2, 0x08,   10 /* Private */,
      12,    0,   90,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void memberViewLoans::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberViewLoans *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showAccountView(); break;
        case 1: _t->showReservesWindow(); break;
        case 2: _t->signOut(); break;
        case 3: _t->showCatalogue(); break;
        case 4: _t->returnButtonClicked(); break;
        case 5: _t->viewButtonClicked(); break;
        case 6: _t->on_editAccountBtn_clicked(); break;
        case 7: _t->on_reservedBooksBtn_clicked(); break;
        case 8: _t->on_signoutBtn_clicked(); break;
        case 9: _t->on_bcktoCatologueBtn_clicked(); break;
        case 10: _t->deleteRecords(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (memberViewLoans::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberViewLoans::showAccountView)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (memberViewLoans::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberViewLoans::showReservesWindow)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (memberViewLoans::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberViewLoans::signOut)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (memberViewLoans::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberViewLoans::showCatalogue)) {
                *result = 3;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject memberViewLoans::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_memberViewLoans.offsetsAndSize,
    qt_meta_data_memberViewLoans,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_memberViewLoans_t
, QtPrivate::TypeAndForceComplete<memberViewLoans, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *memberViewLoans::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberViewLoans::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberViewLoans.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int memberViewLoans::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void memberViewLoans::showAccountView()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void memberViewLoans::showReservesWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void memberViewLoans::signOut()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void memberViewLoans::showCatalogue()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
