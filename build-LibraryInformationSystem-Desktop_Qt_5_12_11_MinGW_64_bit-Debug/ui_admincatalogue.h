/********************************************************************************
** Form generated from reading UI file 'admincatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCATALOGUE_H
#define UI_ADMINCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCatalogue
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *catalogueIcon;
    QPushButton *catalogueBtn;
    QLabel *memberIcon;
    QPushButton *memberBtn;
    QLabel *accountIcon;
    QPushButton *accountBtn;
    QSpacerItem *verticalSpacer;
    QLabel *signoutIcon;
    QPushButton *signoutBtn;
    QLabel *logoImage;
    QFrame *line;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QLabel *pageDesc;
    QLabel *pageTitle;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *addBookIcon;
    QPushButton *addBookBtn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminCatalogue)
    {
        if (adminCatalogue->objectName().isEmpty())
            adminCatalogue->setObjectName(QString::fromUtf8("adminCatalogue"));
        adminCatalogue->resize(1280, 640);
        adminCatalogue->setMinimumSize(QSize(1280, 640));
        adminCatalogue->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(adminCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(1280, 0));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"	font-size: 13px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	border-radius: 15px; \n"
"	font-size: 13px;\n"
"	height: 31px; \n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 110, 191, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        catalogueIcon = new QLabel(layoutWidget);
        catalogueIcon->setObjectName(QString::fromUtf8("catalogueIcon"));
        catalogueIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        catalogueIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(catalogueIcon);

        catalogueBtn = new QPushButton(layoutWidget);
        catalogueBtn->setObjectName(QString::fromUtf8("catalogueBtn"));
        catalogueBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout->addWidget(catalogueBtn);

        memberIcon = new QLabel(layoutWidget);
        memberIcon->setObjectName(QString::fromUtf8("memberIcon"));
        memberIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(memberIcon);

        memberBtn = new QPushButton(layoutWidget);
        memberBtn->setObjectName(QString::fromUtf8("memberBtn"));
        memberBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout->addWidget(memberBtn);

        accountIcon = new QLabel(layoutWidget);
        accountIcon->setObjectName(QString::fromUtf8("accountIcon"));
        accountIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(accountIcon);

        accountBtn = new QPushButton(layoutWidget);
        accountBtn->setObjectName(QString::fromUtf8("accountBtn"));
        accountBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout->addWidget(accountBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        signoutIcon = new QLabel(layoutWidget);
        signoutIcon->setObjectName(QString::fromUtf8("signoutIcon"));
        signoutIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(signoutIcon);

        signoutBtn = new QPushButton(layoutWidget);
        signoutBtn->setObjectName(QString::fromUtf8("signoutBtn"));
        signoutBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout->addWidget(signoutBtn);

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 10, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 100, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(230, 140, 1051, 461));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1051, 461));
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
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 90, 971, 51));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 50, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1010, 80, 189, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addBookIcon = new QLabel(layoutWidget_2);
        addBookIcon->setObjectName(QString::fromUtf8("addBookIcon"));
        addBookIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background:rgba(0,0,0,0);\n"
"}"));

        horizontalLayout_2->addWidget(addBookIcon);

        addBookBtn = new QPushButton(layoutWidget_2);
        addBookBtn->setObjectName(QString::fromUtf8("addBookBtn"));
        addBookBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 12px \"Montserrat\";\n"
"	background-color:rgba(0,0,0,0);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        horizontalLayout_2->addWidget(addBookBtn);

        adminCatalogue->setCentralWidget(centralwidget);
        layoutWidget->raise();
        logoImage->raise();
        line->raise();
        scrollArea->raise();
        pageTitle->raise();
        pageDesc->raise();
        layoutWidget_2->raise();
        menubar = new QMenuBar(adminCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminCatalogue->setMenuBar(menubar);

        retranslateUi(adminCatalogue);

        QMetaObject::connectSlotsByName(adminCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminCatalogue)
    {
        adminCatalogue->setWindowTitle(QApplication::translate("adminCatalogue", "MainWindow", nullptr));
        catalogueIcon->setText(QApplication::translate("adminCatalogue", "Catalogue", nullptr));
        catalogueBtn->setText(QApplication::translate("adminCatalogue", "Catalogue", nullptr));
        memberIcon->setText(QApplication::translate("adminCatalogue", "member", nullptr));
        memberBtn->setText(QApplication::translate("adminCatalogue", "Member", nullptr));
        accountIcon->setText(QApplication::translate("adminCatalogue", "account", nullptr));
        accountBtn->setText(QApplication::translate("adminCatalogue", "Account", nullptr));
        signoutIcon->setText(QApplication::translate("adminCatalogue", "signOut", nullptr));
        signoutBtn->setText(QApplication::translate("adminCatalogue", "Sign Out", nullptr));
        logoImage->setText(QString());
        pageDesc->setText(QApplication::translate("adminCatalogue", "Here admin can view all books that exist in the catalogue. You can choose to view, edit, and delete books. \n"
" You can also choose to add books if you want to. You literally have all the power in the world as an admin. \n"
"DONT ABUSE IT  OR YOU USE LOSE YOUR PIZZA EATING PRIVLLAGES", nullptr));
        pageTitle->setText(QApplication::translate("adminCatalogue", "Catalogue", nullptr));
        addBookIcon->setText(QApplication::translate("adminCatalogue", "TextLabel", nullptr));
        addBookBtn->setText(QApplication::translate("adminCatalogue", "Add Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminCatalogue: public Ui_adminCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCATALOGUE_H
