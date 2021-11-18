QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminaddmember.cpp \
    admineditaccount.cpp \
    catalogue.cpp \
    main.cpp \
    mainwindow.cpp \
    useraccount.cpp

HEADERS += \
    adminaddmember.h \
    admineditaccount.h \
    catalogue.h \
    mainwindow.h \
    useraccount.h

FORMS += \
    adminaddmember.ui \
    admineditaccount.ui \
    catalogue.ui \
    mainwindow.ui \
    useraccount.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
