/********************************************************************************
** Form generated from reading UI file 'membercatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCATALOGUE_H
#define UI_MEMBERCATALOGUE_H

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

class Ui_memberCatalogue
{
public:
    QAction *actiontest;
    QAction *actiontest_2;
    QAction *actiontest_3;
    QWidget *centralwidget;
    QLabel *logoImage;
    QMenuBar *menubar;
    QMenu *menuCatalogue;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *memberCatalogue)
    {
        if (memberCatalogue->objectName().isEmpty())
            memberCatalogue->setObjectName(QString::fromUtf8("memberCatalogue"));
        memberCatalogue->resize(1052, 634);
        memberCatalogue->setMinimumSize(QSize(1052, 634));
        memberCatalogue->setMaximumSize(QSize(1052, 634));
        memberCatalogue->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
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
        actiontest = new QAction(memberCatalogue);
        actiontest->setObjectName(QString::fromUtf8("actiontest"));
        actiontest_2 = new QAction(memberCatalogue);
        actiontest_2->setObjectName(QString::fromUtf8("actiontest_2"));
        actiontest_3 = new QAction(memberCatalogue);
        actiontest_3->setObjectName(QString::fromUtf8("actiontest_3"));
        centralwidget = new QWidget(memberCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        memberCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(memberCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 18));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        memberCatalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(memberCatalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        memberCatalogue->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menuAccount->addAction(actiontest);
        menuAccount->addAction(actiontest_2);
        menuAccount->addSeparator();
        menuAccount->addAction(actiontest_3);

        retranslateUi(memberCatalogue);

        QMetaObject::connectSlotsByName(memberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *memberCatalogue)
    {
        memberCatalogue->setWindowTitle(QApplication::translate("memberCatalogue", "MainWindow", nullptr));
        actiontest->setText(QApplication::translate("memberCatalogue", "test", nullptr));
        actiontest_2->setText(QApplication::translate("memberCatalogue", "test 2", nullptr));
        actiontest_3->setText(QApplication::translate("memberCatalogue", "test 3", nullptr));
        logoImage->setText(QString());
        menuCatalogue->setTitle(QApplication::translate("memberCatalogue", "Catalogue", nullptr));
        menuAccount->setTitle(QApplication::translate("memberCatalogue", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberCatalogue: public Ui_memberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCATALOGUE_H
