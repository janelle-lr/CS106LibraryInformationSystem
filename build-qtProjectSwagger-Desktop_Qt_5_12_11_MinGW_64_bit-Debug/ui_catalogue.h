/********************************************************************************
** Form generated from reading UI file 'catalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGUE_H
#define UI_CATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Catalogue
{
public:
    QAction *actionView_Account;
    QAction *actionView_Catalogue;
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;
    QLabel *img;
    QMenuBar *menubar;
    QMenu *menuAccounr;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Catalogue)
    {
        if (Catalogue->objectName().isEmpty())
            Catalogue->setObjectName(QString::fromUtf8("Catalogue"));
        Catalogue->resize(1007, 600);
        actionView_Account = new QAction(Catalogue);
        actionView_Account->setObjectName(QString::fromUtf8("actionView_Account"));
        actionView_Account->setCheckable(false);
        actionView_Catalogue = new QAction(Catalogue);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        centralwidget = new QWidget(Catalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(740, 0, 261, 21));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 120, 991, 431));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 989, 429));
        label_2 = new QLabel(scrollAreaWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 30, 47, 91));
        scrollArea->setWidget(scrollAreaWidgetContents);
        img = new QLabel(centralwidget);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(10, 10, 651, 101));
        Catalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Catalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1007, 21));
        menuAccounr = new QMenu(menubar);
        menuAccounr->setObjectName(QString::fromUtf8("menuAccounr"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        Catalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(Catalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Catalogue->setStatusBar(statusbar);

        menubar->addAction(menuAccounr->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menuAccounr->addAction(actionView_Account);
        menuCatalogue->addAction(actionView_Catalogue);

        retranslateUi(Catalogue);

        QMetaObject::connectSlotsByName(Catalogue);
    } // setupUi

    void retranslateUi(QMainWindow *Catalogue)
    {
        Catalogue->setWindowTitle(QApplication::translate("Catalogue", "MainWindow", nullptr));
        actionView_Account->setText(QApplication::translate("Catalogue", "View Account", nullptr));
        actionView_Catalogue->setText(QApplication::translate("Catalogue", "View Catalogue", nullptr));
        label->setText(QApplication::translate("Catalogue", "SECOND PAGE after logging in", nullptr));
        label_2->setText(QApplication::translate("Catalogue", "TextLabel", nullptr));
        img->setText(QApplication::translate("Catalogue", "Logo", nullptr));
        menuAccounr->setTitle(QApplication::translate("Catalogue", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("Catalogue", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Catalogue: public Ui_Catalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGUE_H
