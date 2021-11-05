/********************************************************************************
** Form generated from reading UI file 'useraccount.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACCOUNT_H
#define UI_USERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userAccount
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *userAccount)
    {
        if (userAccount->objectName().isEmpty())
            userAccount->setObjectName(QString::fromUtf8("userAccount"));
        userAccount->resize(800, 600);
        centralwidget = new QWidget(userAccount);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        userAccount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(userAccount);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        userAccount->setMenuBar(menubar);
        statusbar = new QStatusBar(userAccount);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        userAccount->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());

        retranslateUi(userAccount);

        QMetaObject::connectSlotsByName(userAccount);
    } // setupUi

    void retranslateUi(QMainWindow *userAccount)
    {
        userAccount->setWindowTitle(QApplication::translate("userAccount", "MainWindow", nullptr));
        menuAccount->setTitle(QApplication::translate("userAccount", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("userAccount", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userAccount: public Ui_userAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACCOUNT_H
