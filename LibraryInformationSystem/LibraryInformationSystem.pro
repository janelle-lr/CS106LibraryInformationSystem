QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    admin.cpp \
    admineditcatalogue.cpp \
    author.cpp \
    book.cpp \
    bookdetails.cpp \
    bookitem.cpp \
    librarydatabase.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    memberaccountview.cpp \
    memberaccountviewv2.cpp \
    membercatalogue.cpp \
    membercataloguev2.cpp \
    preorderbook.cpp \
    publisher.cpp \
    systemlibrary.cpp

HEADERS += \
    account.h \
    admin.h \
    admineditcatalogue.h \
    author.h \
    book.h \
    bookdetails.h \
    bookitem.h \
    librarydatabase.h \
    mainwindow.h \
    member.h \
    memberaccountview.h \
    memberaccountviewv2.h \
    membercatalogue.h \
    membercataloguev2.h \
    preorderbook.h \
    publisher.h \
    systemlibrary.h

FORMS += \
    admineditcatalogue.ui \
    bookdetails.ui \
    mainwindow.ui \
    memberaccountview.ui \
    memberaccountviewv2.ui \
    membercatalogue.ui \
    membercataloguev2.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
