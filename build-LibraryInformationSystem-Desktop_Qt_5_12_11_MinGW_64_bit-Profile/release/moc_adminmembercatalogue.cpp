/****************************************************************************
** Meta object code from reading C++ file 'adminmembercatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../libraryInformationSystem/LibraryInformationSystem/adminmembercatalogue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmembercatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminMemberCatalogue_t {
    QByteArrayData data[11];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminMemberCatalogue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminMemberCatalogue_t qt_meta_stringdata_adminMemberCatalogue = {
    {
QT_MOC_LITERAL(0, 0, 20), // "adminMemberCatalogue"
QT_MOC_LITERAL(1, 21, 9), // "showAdmin"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "getMainWindow"
QT_MOC_LITERAL(4, 46, 17), // "editButtonClicked"
QT_MOC_LITERAL(5, 64, 19), // "deleteButtonClicked"
QT_MOC_LITERAL(6, 84, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(7, 106, 25), // "on_catalogueBtn_2_clicked"
QT_MOC_LITERAL(8, 132, 23), // "on_signoutBtn_2_clicked"
QT_MOC_LITERAL(9, 156, 23), // "on_addMemberBtn_clicked"
QT_MOC_LITERAL(10, 180, 16) // "deleteAllRecords"

    },
    "adminMemberCatalogue\0showAdmin\0\0"
    "getMainWindow\0editButtonClicked\0"
    "deleteButtonClicked\0on_pushButton_clicked\0"
    "on_catalogueBtn_2_clicked\0"
    "on_signoutBtn_2_clicked\0on_addMemberBtn_clicked\0"
    "deleteAllRecords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminMemberCatalogue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void adminMemberCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminMemberCatalogue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showAdmin(); break;
        case 1: _t->getMainWindow(); break;
        case 2: _t->editButtonClicked(); break;
        case 3: _t->deleteButtonClicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_catalogueBtn_2_clicked(); break;
        case 6: _t->on_signoutBtn_2_clicked(); break;
        case 7: _t->on_addMemberBtn_clicked(); break;
        case 8: _t->deleteAllRecords(); break;
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
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject adminMemberCatalogue::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_adminMemberCatalogue.data,
    qt_meta_data_adminMemberCatalogue,
    qt_static_metacall,
    nullptr,
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
