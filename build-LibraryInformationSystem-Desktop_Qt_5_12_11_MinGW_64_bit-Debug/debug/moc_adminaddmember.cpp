/****************************************************************************
** Meta object code from reading C++ file 'adminaddmember.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../CS106LibraryInformationSystem/LibraryInformationSystem/adminaddmember.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminaddmember.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminAddMember_t {
    QByteArrayData data[4];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminAddMember_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminAddMember_t qt_meta_stringdata_adminAddMember = {
    {
QT_MOC_LITERAL(0, 0, 14), // "adminAddMember"
QT_MOC_LITERAL(1, 15, 27), // "on_adddMemberButton_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23) // "on_catalogueBtn_clicked"

    },
    "adminAddMember\0on_adddMemberButton_clicked\0"
    "\0on_catalogueBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminAddMember[] = {

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
       1,    1,   24,    2, 0x08 /* Private */,
       3,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void adminAddMember::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminAddMember *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_adddMemberButton_clicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_catalogueBtn_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject adminAddMember::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_adminAddMember.data,
    qt_meta_data_adminAddMember,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *adminAddMember::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminAddMember::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminAddMember.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminAddMember::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
