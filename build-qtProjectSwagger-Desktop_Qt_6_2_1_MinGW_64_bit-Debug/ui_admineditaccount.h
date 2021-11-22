/********************************************************************************
** Form generated from reading UI file 'admineditaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITACCOUNT_H
#define UI_ADMINEDITACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminEditAccount
{
public:
    QAction *actionView_Catalogue;
    QWidget *centralwidget;
    QLabel *img;
    QGroupBox *groupBox;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminEditAccount)
    {
        if (adminEditAccount->objectName().isEmpty())
            adminEditAccount->setObjectName(QString::fromUtf8("adminEditAccount"));
        adminEditAccount->resize(1052, 634);
        adminEditAccount->setMinimumSize(QSize(1052, 634));
        adminEditAccount->setMaximumSize(QSize(1052, 634));
        actionView_Catalogue = new QAction(adminEditAccount);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        centralwidget = new QWidget(adminEditAccount);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        img = new QLabel(centralwidget);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(20, 10, 651, 101));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 120, 1011, 461));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-size: 18px;\n"
"	font-family: regular;\n"
"}"));
        adminEditAccount->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminEditAccount);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        menuCatalogue->setMinimumSize(QSize(1052, 634));
        adminEditAccount->setMenuBar(menubar);
        statusbar = new QStatusBar(adminEditAccount);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminEditAccount->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menuCatalogue->addAction(actionView_Catalogue);

        retranslateUi(adminEditAccount);

        QMetaObject::connectSlotsByName(adminEditAccount);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditAccount)
    {
        adminEditAccount->setWindowTitle(QCoreApplication::translate("adminEditAccount", "MainWindow", nullptr));
        actionView_Catalogue->setText(QCoreApplication::translate("adminEditAccount", "View Catalogue", nullptr));
        img->setText(QCoreApplication::translate("adminEditAccount", "Logo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("adminEditAccount", "Members", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("adminEditAccount", "Account", nullptr));
        menuCatalogue->setTitle(QCoreApplication::translate("adminEditAccount", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditAccount: public Ui_adminEditAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITACCOUNT_H
