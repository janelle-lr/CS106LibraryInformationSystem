/****************************************************************************
** Meta object code from reading C++ file 'admineditcatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LibraryInformationSystem/admineditcatalogue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admineditcatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminEditCatalogue_t {
    QByteArrayData data[8];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminEditCatalogue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminEditCatalogue_t qt_meta_stringdata_adminEditCatalogue = {
    {
QT_MOC_LITERAL(0, 0, 18), // "adminEditCatalogue"
QT_MOC_LITERAL(1, 19, 22), // "openadminEditCatalogue"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 19), // "showadminMemberEdit"
QT_MOC_LITERAL(4, 63, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 85, 29), // "on_confirmBookDetails_clicked"
QT_MOC_LITERAL(6, 115, 28), // "on_selectedImage_3_activated"
QT_MOC_LITERAL(7, 144, 4) // "arg1"

    },
    "adminEditCatalogue\0openadminEditCatalogue\0"
    "\0showadminMemberEdit\0on_pushButton_clicked\0"
    "on_confirmBookDetails_clicked\0"
    "on_selectedImage_3_activated\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminEditCatalogue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    1,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void adminEditCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminEditCatalogue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openadminEditCatalogue(); break;
        case 1: _t->showadminMemberEdit(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_confirmBookDetails_clicked(); break;
        case 4: _t->on_selectedImage_3_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (adminEditCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminEditCatalogue::openadminEditCatalogue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (adminEditCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminEditCatalogue::showadminMemberEdit)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adminEditCatalogue::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_adminEditCatalogue.data,
    qt_meta_data_adminEditCatalogue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adminEditCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminEditCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminEditCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminEditCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void adminEditCatalogue::openadminEditCatalogue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void adminEditCatalogue::showadminMemberEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
