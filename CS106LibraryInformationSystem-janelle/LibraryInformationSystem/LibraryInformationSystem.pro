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
    loanedbooknotification.cpp \
    main.cpp \
    mainwindow.cpp \
    member.cpp \
    memberaccountview.cpp \
    membercatalogue.cpp \
    memberviewloans.cpp \
    memberviewreserves.cpp \
    notificationlog.cpp \
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
    loanedbooknotification.h \
    mainwindow.h \
    member.h \
    memberaccountview.h \
    membercatalogue.h \
    memberviewloans.h \
    memberviewreserves.h \
    notificationlog.h \
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
    loanedbooknotification.ui \
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
isEmpty(TARGET_EXT) {
    win32 {
        TARGET_CUSTOM_EXT = .exe
    }
    macx {
        TARGET_CUSTOM_EXT = .app
    }
} else {
    TARGET_CUSTOM_EXT = $${TARGET_EXT}
}
win32 {
    DEPLOY_COMMAND = windeployqt
}
macx {
    DEPLOY_COMMAND = macdeployqt
}
CONFIG( debug, debug|release ) {
    # debug
    DEPLOY_TARGET = $$shell_quote($$shell_path($${OUT_PWD}/debug/$${TARGET}$${TARGET_CUSTOM_EXT}))
} else {
    # release
    DEPLOY_TARGET = $$shell_quote($$shell_path($${OUT_PWD}/release/$${TARGET}$${TARGET_CUSTOM_EXT}))
}
#  # Uncomment the following line to help debug the deploy command when running qmake
#  warning($${DEPLOY_COMMAND} $${DEPLOY_TARGET})
# Use += instead of = if you use multiple QMAKE_POST_LINKs
QMAKE_POST_LINK = $${DEPLOY_COMMAND} $${DEPLOY_TARGET}
RESOURCES += \
    resources.qrc
