/********************************************************************************
** Form generated from reading UI file 'adminaddmember.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINADDMEMBER_H
#define UI_ADMINADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddMember
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QMenu *menuMember;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminAddMember)
    {
        if (adminAddMember->objectName().isEmpty())
            adminAddMember->setObjectName(QString::fromUtf8("adminAddMember"));
        adminAddMember->resize(1440, 953);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminAddMember->sizePolicy().hasHeightForWidth());
        adminAddMember->setSizePolicy(sizePolicy);
        adminAddMember->setMinimumSize(QSize(0, 0));
        adminAddMember->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 lightgray, stop:1 darkgray);\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"    background: #a8a8a8;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: #888888;\n"
"}"));
        centralwidget = new QWidget(adminAddMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        adminAddMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminAddMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 18));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        menuMember = new QMenu(menubar);
        menuMember->setObjectName(QString::fromUtf8("menuMember"));
        adminAddMember->setMenuBar(menubar);
        statusbar = new QStatusBar(adminAddMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminAddMember->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menubar->addAction(menuMember->menuAction());

        retranslateUi(adminAddMember);

        QMetaObject::connectSlotsByName(adminAddMember);
    } // setupUi

    void retranslateUi(QMainWindow *adminAddMember)
    {
        adminAddMember->setWindowTitle(QApplication::translate("adminAddMember", "MainWindow", nullptr));
        logoImage->setText(QString());
        menuAccount->setTitle(QApplication::translate("adminAddMember", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("adminAddMember", "Catalogue", nullptr));
        menuMember->setTitle(QApplication::translate("adminAddMember", "Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminAddMember: public Ui_adminAddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDMEMBER_H
