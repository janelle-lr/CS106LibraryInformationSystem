/****************************************************************************
** Meta object code from reading C++ file 'memberaccountview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/memberaccountview.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberaccountview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_memberAccountView_t {
    const uint offsetsAndSize[36];
    char stringdata0[348];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_memberAccountView_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_memberAccountView_t qt_meta_stringdata_memberAccountView = {
    {
QT_MOC_LITERAL(0, 17), // "memberAccountView"
QT_MOC_LITERAL(18, 13), // "showCatalogue"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 7), // "signOut"
QT_MOC_LITERAL(41, 25), // "on_loanedBooksBtn_clicked"
QT_MOC_LITERAL(67, 24), // "on_memberPass_textEdited"
QT_MOC_LITERAL(92, 4), // "arg1"
QT_MOC_LITERAL(97, 29), // "on_memberFirstName_textEdited"
QT_MOC_LITERAL(127, 26), // "on_memberMobile_textEdited"
QT_MOC_LITERAL(154, 25), // "on_memberEmail_textEdited"
QT_MOC_LITERAL(180, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(202, 27), // "on_reservedBooksBtn_clicked"
QT_MOC_LITERAL(230, 18), // "showReservedWindow"
QT_MOC_LITERAL(249, 16), // "showLoanedWindow"
QT_MOC_LITERAL(266, 10), // "signOutAcc"
QT_MOC_LITERAL(277, 19), // "showCatalogueWindow"
QT_MOC_LITERAL(297, 28), // "on_bcktoCatologueBtn_clicked"
QT_MOC_LITERAL(326, 21) // "on_signoutBtn_clicked"

    },
    "memberAccountView\0showCatalogue\0\0"
    "signOut\0on_loanedBooksBtn_clicked\0"
    "on_memberPass_textEdited\0arg1\0"
    "on_memberFirstName_textEdited\0"
    "on_memberMobile_textEdited\0"
    "on_memberEmail_textEdited\0"
    "on_pushButton_clicked\0on_reservedBooksBtn_clicked\0"
    "showReservedWindow\0showLoanedWindow\0"
    "signOutAcc\0showCatalogueWindow\0"
    "on_bcktoCatologueBtn_clicked\0"
    "on_signoutBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_memberAccountView[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,
       3,    0,  105,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  106,    2, 0x08,    3 /* Private */,
       5,    1,  107,    2, 0x08,    4 /* Private */,
       7,    1,  110,    2, 0x08,    6 /* Private */,
       8,    1,  113,    2, 0x08,    8 /* Private */,
       9,    1,  116,    2, 0x08,   10 /* Private */,
      10,    0,  119,    2, 0x08,   12 /* Private */,
      11,    0,  120,    2, 0x08,   13 /* Private */,
      12,    0,  121,    2, 0x08,   14 /* Private */,
      13,    0,  122,    2, 0x08,   15 /* Private */,
      14,    0,  123,    2, 0x08,   16 /* Private */,
      15,    0,  124,    2, 0x08,   17 /* Private */,
      16,    0,  125,    2, 0x08,   18 /* Private */,
      17,    0,  126,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void memberAccountView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<memberAccountView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showCatalogue(); break;
        case 1: _t->signOut(); break;
        case 2: _t->on_loanedBooksBtn_clicked(); break;
        case 3: _t->on_memberPass_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_memberFirstName_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_memberMobile_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_memberEmail_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_reservedBooksBtn_clicked(); break;
        case 9: _t->showReservedWindow(); break;
        case 10: _t->showLoanedWindow(); break;
        case 11: _t->signOutAcc(); break;
        case 12: _t->showCatalogueWindow(); break;
        case 13: _t->on_bcktoCatologueBtn_clicked(); break;
        case 14: _t->on_signoutBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (memberAccountView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberAccountView::showCatalogue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (memberAccountView::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&memberAccountView::signOut)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject memberAccountView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_memberAccountView.offsetsAndSize,
    qt_meta_data_memberAccountView,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_memberAccountView_t
, QtPrivate::TypeAndForceComplete<memberAccountView, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *memberAccountView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *memberAccountView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_memberAccountView.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int memberAccountView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void memberAccountView::showCatalogue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void memberAccountView::signOut()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
