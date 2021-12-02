/********************************************************************************
** Form generated from reading UI file 'adminmembercatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMEMBERCATALOGUE_H
#define UI_ADMINMEMBERCATALOGUE_H

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

class Ui_adminMemberCatalogue
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *catalogueIcon_2;
    QPushButton *catalogueBtn_2;
    QLabel *memberIcon_2;
    QPushButton *memberBtn_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *signoutIcon_2;
    QPushButton *signoutBtn_2;
    QLabel *logoImage;
    QFrame *line;
    QLabel *pageTitle;
    QLabel *pageDesc;
    QLabel *addMemberIcon;
    QPushButton *addMemberBtn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminMemberCatalogue)
    {
        if (adminMemberCatalogue->objectName().isEmpty())
            adminMemberCatalogue->setObjectName(QString::fromUtf8("adminMemberCatalogue"));
        adminMemberCatalogue->resize(1280, 640);
        adminMemberCatalogue->setMinimumSize(QSize(1280, 640));
        adminMemberCatalogue->setMaximumSize(QSize(1280, 640));
        centralwidget = new QWidget(adminMemberCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(260, 140, 1011, 471));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1011, 471));
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        catalogueIcon_2 = new QLabel(layoutWidget);
        catalogueIcon_2->setObjectName(QString::fromUtf8("catalogueIcon_2"));
        catalogueIcon_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        catalogueIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(catalogueIcon_2);

        catalogueBtn_2 = new QPushButton(layoutWidget);
        catalogueBtn_2->setObjectName(QString::fromUtf8("catalogueBtn_2"));
        catalogueBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_2->addWidget(catalogueBtn_2);

        memberIcon_2 = new QLabel(layoutWidget);
        memberIcon_2->setObjectName(QString::fromUtf8("memberIcon_2"));
        memberIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(memberIcon_2);

        memberBtn_2 = new QPushButton(layoutWidget);
        memberBtn_2->setObjectName(QString::fromUtf8("memberBtn_2"));
        memberBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_2->addWidget(memberBtn_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        signoutIcon_2 = new QLabel(layoutWidget);
        signoutIcon_2->setObjectName(QString::fromUtf8("signoutIcon_2"));
        signoutIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(signoutIcon_2);

        signoutBtn_2 = new QPushButton(layoutWidget);
        signoutBtn_2->setObjectName(QString::fromUtf8("signoutBtn_2"));
        signoutBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_2->addWidget(signoutBtn_2);

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 40, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 80, 771, 51));
        addMemberIcon = new QLabel(centralwidget);
        addMemberIcon->setObjectName(QString::fromUtf8("addMemberIcon"));
        addMemberIcon->setGeometry(QRect(1080, 80, 47, 31));
        addMemberBtn = new QPushButton(centralwidget);
        addMemberBtn->setObjectName(QString::fromUtf8("addMemberBtn"));
        addMemberBtn->setGeometry(QRect(1140, 80, 121, 31));
        addMemberBtn->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));
        adminMemberCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminMemberCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminMemberCatalogue->setMenuBar(menubar);

        retranslateUi(adminMemberCatalogue);

        QMetaObject::connectSlotsByName(adminMemberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminMemberCatalogue)
    {
        adminMemberCatalogue->setWindowTitle(QApplication::translate("adminMemberCatalogue", "MainWindow", nullptr));
        catalogueIcon_2->setText(QApplication::translate("adminMemberCatalogue", "Catalogue", nullptr));
        catalogueBtn_2->setText(QApplication::translate("adminMemberCatalogue", "Catalogue", nullptr));
        memberIcon_2->setText(QApplication::translate("adminMemberCatalogue", "member", nullptr));
        memberBtn_2->setText(QApplication::translate("adminMemberCatalogue", "Members", nullptr));
        signoutIcon_2->setText(QApplication::translate("adminMemberCatalogue", "signOut", nullptr));
        signoutBtn_2->setText(QApplication::translate("adminMemberCatalogue", "Sign Out", nullptr));
        logoImage->setText(QString());
        pageTitle->setText(QApplication::translate("adminMemberCatalogue", "View Existing Members", nullptr));
        pageDesc->setText(QApplication::translate("adminMemberCatalogue", "Here admin can view all books that exist in the catalogue. You can choose to view, edit, and delete books. \n"
" You can also choose to add books if you want to. You literally have all the power in the world as an admin. \n"
"DONT ABUSE IT  OR YOU USE LOSE YOUR PIZZA EATING PRIVLLAGES", nullptr));
        addMemberIcon->setText(QApplication::translate("adminMemberCatalogue", "TextLabel", nullptr));
        addMemberBtn->setText(QApplication::translate("adminMemberCatalogue", "Add New Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminMemberCatalogue: public Ui_adminMemberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEMBERCATALOGUE_H
