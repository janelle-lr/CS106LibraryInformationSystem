/****************************************************************************
** Meta object code from reading C++ file 'adminbookdetails.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_mainwindow.cpp
#include "../../LibraryInformationSystem/mainwindow.h"
=======
#include "../../backup/LibraryInformationSystem/adminbookdetails.h"
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_adminbookdetails.cpp
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminbookdetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_mainwindow.cpp
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[5];
    char stringdata0[69];
=======
struct qt_meta_stringdata_AdminBookDetails_t {
    QByteArrayData data[3];
    char stringdata0[44];
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_adminbookdetails.cpp
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminBookDetails_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminBookDetails_t qt_meta_stringdata_AdminBookDetails = {
    {
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_mainwindow.cpp
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_loginPushButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(4, 64, 4) // "arg1"

    },
    "MainWindow\0on_loginPushButton_clicked\0"
    "\0on_checkBox_stateChanged\0arg1"
=======
QT_MOC_LITERAL(0, 0, 16), // "AdminBookDetails"
QT_MOC_LITERAL(1, 17, 25), // "on_savePushButton_clicked"
QT_MOC_LITERAL(2, 43, 0) // ""

    },
    "AdminBookDetails\0on_savePushButton_clicked\0"
    ""
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_adminbookdetails.cpp
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminBookDetails[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void AdminBookDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminBookDetails *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_mainwindow.cpp
        case 0: _t->on_loginPushButton_clicked(); break;
        case 1: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
=======
        case 0: _t->on_savePushButton_clicked(); break;
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:build-LibraryInformationSystem-Desktop_Qt_5_12_11_MinGW_64_bit-Debug/debug/moc_adminbookdetails.cpp
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AdminBookDetails::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_AdminBookDetails.data,
    qt_meta_data_AdminBookDetails,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminBookDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminBookDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminBookDetails.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int AdminBookDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
