QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    admin.cpp \
    author.cpp \
    book.cpp \
    bookitem.cpp \
    librarydatabase.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    preorderbook.cpp \
    publisher.cpp \
    systemlibrary.cpp

HEADERS += \
    account.h \
    admin.h \
    author.h \
    book.h \
    bookitem.h \
    librarydatabase.h \
    mainwindow.h \
    member.h \
    preorderbook.h \
    publisher.h \
    systemlibrary.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
