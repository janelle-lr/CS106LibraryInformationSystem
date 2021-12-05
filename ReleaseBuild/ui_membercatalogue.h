/********************************************************************************
** Form generated from reading UI file 'membercatalogue.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCATALOGUE_H
#define UI_MEMBERCATALOGUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
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
    QComboBox *comboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QLabel *catalogueIcon;
    QPushButton *catalogueBtn;
    QLabel *accountIcon;
    QPushButton *accountBtn;
    QSpacerItem *verticalSpacer_3;
    QLabel *signoutIcon;
    QPushButton *signoutBtn;
    QFrame *line;
    QLabel *logoImage;
    QLabel *pageTitle;

    void setupUi(QMainWindow *memberCatalogue)
    {
        if (memberCatalogue->objectName().isEmpty())
            memberCatalogue->setObjectName(QString::fromUtf8("memberCatalogue"));
        memberCatalogue->resize(1280, 640);
        memberCatalogue->setMinimumSize(QSize(1280, 640));
        memberCatalogue->setMaximumSize(QSize(1280, 640));
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
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1100, 70, 131, 31));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"	background:rgb(255, 229, 208);\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"}"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(230, 110, 1051, 511));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1051, 511));
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
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        catalogueIcon = new QLabel(layoutWidget);
        catalogueIcon->setObjectName(QString::fromUtf8("catalogueIcon"));
        catalogueIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        catalogueIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(catalogueIcon);

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

        verticalLayout_10->addWidget(catalogueBtn);

        accountIcon = new QLabel(layoutWidget);
        accountIcon->setObjectName(QString::fromUtf8("accountIcon"));
        accountIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(accountIcon);

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

        verticalLayout_10->addWidget(accountBtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        signoutIcon = new QLabel(layoutWidget);
        signoutIcon->setObjectName(QString::fromUtf8("signoutIcon"));
        signoutIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(signoutIcon);

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

        verticalLayout_10->addWidget(signoutBtn);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(270, 30, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        memberCatalogue->setCentralWidget(centralwidget);

        retranslateUi(memberCatalogue);

        QMetaObject::connectSlotsByName(memberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *memberCatalogue)
    {
        memberCatalogue->setWindowTitle(QCoreApplication::translate("memberCatalogue", "MainWindow", nullptr));
        viewAccount->setText(QCoreApplication::translate("memberCatalogue", "View account", nullptr));
        actiontest_2->setText(QCoreApplication::translate("memberCatalogue", "test 2", nullptr));
        actiontest_3->setText(QCoreApplication::translate("memberCatalogue", "Log-Out", nullptr));
        actionView_Catalogue->setText(QCoreApplication::translate("memberCatalogue", "View Catalogue", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("memberCatalogue", "Sort By", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("memberCatalogue", "Title ( A - Z )", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("memberCatalogue", "Title ( Z - A )", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("memberCatalogue", "Author ( A - Z )", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("memberCatalogue", "Author ( Z - A )", nullptr));
        comboBox->setItemText(5, QString());

        catalogueIcon->setText(QCoreApplication::translate("memberCatalogue", "Catalogue", nullptr));
        catalogueBtn->setText(QCoreApplication::translate("memberCatalogue", "Catalogue", nullptr));
        accountIcon->setText(QCoreApplication::translate("memberCatalogue", "account", nullptr));
        accountBtn->setText(QCoreApplication::translate("memberCatalogue", "Account", nullptr));
        signoutIcon->setText(QCoreApplication::translate("memberCatalogue", "signOut", nullptr));
        signoutBtn->setText(QCoreApplication::translate("memberCatalogue", "Sign Out", nullptr));
        logoImage->setText(QString());
        pageTitle->setText(QCoreApplication::translate("memberCatalogue", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberCatalogue: public Ui_memberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCATALOGUE_H
