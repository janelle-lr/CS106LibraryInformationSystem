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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberCatalogue
{
public:
    QAction *viewAccount;
    QAction *actiontest_2;
    QAction *actiontest_3;
    QAction *actionView_Catalogue;
    QWidget *centralwidget;
    QLabel *logoImage;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QMenuBar *menubar;
    QMenu *menuCatalogue;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *memberCatalogue)
    {
        if (memberCatalogue->objectName().isEmpty())
            memberCatalogue->setObjectName(QString::fromUtf8("memberCatalogue"));
        memberCatalogue->resize(1080, 640);
        memberCatalogue->setMinimumSize(QSize(1080, 640));
        memberCatalogue->setMaximumSize(QSize(1080, 640));
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
        viewAccount = new QAction(memberCatalogue);
        viewAccount->setObjectName(QString::fromUtf8("viewAccount"));
        actiontest_2 = new QAction(memberCatalogue);
        actiontest_2->setObjectName(QString::fromUtf8("actiontest_2"));
        actiontest_3 = new QAction(memberCatalogue);
        actiontest_3->setObjectName(QString::fromUtf8("actiontest_3"));
        actionView_Catalogue = new QAction(memberCatalogue);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        centralwidget = new QWidget(memberCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(880, 30, 131, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 30, 75, 23));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 90, 1081, 461));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1081, 461));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #FFE5D0;\n"
"	/*border: none;*/\n"
"}\n"
"\n"
"QGridLayout {\n"
"	/*border: none;*/\n"
"}\n"
"\n"
"QPushButton {\n"
"	margin-right: 10px; \n"
"	height: 31px; \n"
"	/*max-width: 100px; */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        horizontalLayout->addLayout(gridLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        memberCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(memberCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 18));
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
        menuCatalogue->addAction(actionView_Catalogue);
        menuAccount->addAction(viewAccount);
        menuAccount->addAction(actiontest_2);
        menuAccount->addSeparator();
        menuAccount->addAction(actiontest_3);

        retranslateUi(memberCatalogue);

        QMetaObject::connectSlotsByName(memberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *memberCatalogue)
    {
        memberCatalogue->setWindowTitle(QApplication::translate("memberCatalogue", "MainWindow", nullptr));
        viewAccount->setText(QApplication::translate("memberCatalogue", "View account", nullptr));
        actiontest_2->setText(QApplication::translate("memberCatalogue", "test 2", nullptr));
        actiontest_3->setText(QApplication::translate("memberCatalogue", "Log-Out", nullptr));
        actionView_Catalogue->setText(QApplication::translate("memberCatalogue", "View Catalogue", nullptr));
        logoImage->setText(QString());
        comboBox->setItemText(0, QApplication::translate("memberCatalogue", "Sort By", nullptr));
        comboBox->setItemText(1, QApplication::translate("memberCatalogue", "Title", nullptr));
        comboBox->setItemText(2, QApplication::translate("memberCatalogue", "Author", nullptr));
        comboBox->setItemText(3, QApplication::translate("memberCatalogue", "Genre", nullptr));
        comboBox->setItemText(4, QApplication::translate("memberCatalogue", "Release date", nullptr));

        pushButton->setText(QApplication::translate("memberCatalogue", "PushButton", nullptr));
        menuCatalogue->setTitle(QApplication::translate("memberCatalogue", "Catalogue", nullptr));
        menuAccount->setTitle(QApplication::translate("memberCatalogue", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberCatalogue: public Ui_memberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCATALOGUE_H
