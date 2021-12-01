QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    admin.cpp \
    adminaddmember.cpp \
    admincatalogue.cpp \
    admineditbook.cpp \
    admineditcatalogue.cpp \
    adminmembercatalogue.cpp \
    adminmemberedit.cpp \
    author.cpp \
    book.cpp \
    bookdetails.cpp \
    bookitem.cpp \
    librarydatabase.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    memberaccountview.cpp \
    membercatalogue.cpp \
    memberviewloans.cpp \
    memberviewreserves.cpp \
    overduenotification.cpp \
    preorderbook.cpp \
    publisher.cpp \
    returnbooksnotification.cpp \
    systemlibrary.cpp

HEADERS += \
    account.h \
    admin.h \
    adminaddmember.h \
    admincatalogue.h \
    admineditbook.h \
    admineditcatalogue.h \
    adminmembercatalogue.h \
    adminmemberedit.h \
    author.h \
    book.h \
    bookdetails.h \
    bookitem.h \
    librarydatabase.h \
    mainwindow.h \
    member.h \
    memberaccountview.h \
    membercatalogue.h \
    memberviewloans.h \
    memberviewreserves.h \
    overduenotification.h \
    preorderbook.h \
    publisher.h \
    returnbooksnotification.h \
    systemlibrary.h

FORMS += \
    adminaddmember.ui \
    admincatalogue.ui \
    admineditbook.ui \
    admineditcatalogue.ui \
    adminmembercatalogue.ui \
    adminmemberedit.ui \
    bookdetails.ui \
    mainwindow.ui \
    memberaccountview.ui \
    membercatalogue.ui \
    memberviewloans.ui \
    memberviewreserves.ui \
    overduenotification.ui \
    returnbooksnotification.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
