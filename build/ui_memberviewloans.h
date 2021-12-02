/********************************************************************************
** Form generated from reading UI file 'memberviewloans.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERVIEWLOANS_H
#define UI_MEMBERVIEWLOANS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_memberViewLoans
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_10;
    QLabel *loanedBooksIcon;
    QPushButton *loanedBooksBtn;
    QLabel *reservedBooksIcon;
    QPushButton *reservedBooksBtn;
    QLabel *editAccountIcon;
    QPushButton *editAccountBtn;
    QSpacerItem *verticalSpacer_3;
    QLabel *signoutIcon;
    QPushButton *signoutBtn;
    QLabel *pageDesc;
    QLabel *pageTitle;
    QLabel *logoImage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QFrame *line;

    void setupUi(QMainWindow *memberViewLoans)
    {
        if (memberViewLoans->objectName().isEmpty())
            memberViewLoans->setObjectName(QString::fromUtf8("memberViewLoans"));
        memberViewLoans->resize(1280, 640);
        memberViewLoans->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
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
        centralwidget = new QWidget(memberViewLoans);
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
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout_10 = new QVBoxLayout(layoutWidget);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        loanedBooksIcon = new QLabel(layoutWidget);
        loanedBooksIcon->setObjectName(QString::fromUtf8("loanedBooksIcon"));
        loanedBooksIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        loanedBooksIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(loanedBooksIcon);

        loanedBooksBtn = new QPushButton(layoutWidget);
        loanedBooksBtn->setObjectName(QString::fromUtf8("loanedBooksBtn"));
        loanedBooksBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_10->addWidget(loanedBooksBtn);

        reservedBooksIcon = new QLabel(layoutWidget);
        reservedBooksIcon->setObjectName(QString::fromUtf8("reservedBooksIcon"));
        reservedBooksIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(reservedBooksIcon);

        reservedBooksBtn = new QPushButton(layoutWidget);
        reservedBooksBtn->setObjectName(QString::fromUtf8("reservedBooksBtn"));
        reservedBooksBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_10->addWidget(reservedBooksBtn);

        editAccountIcon = new QLabel(layoutWidget);
        editAccountIcon->setObjectName(QString::fromUtf8("editAccountIcon"));
        editAccountIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(editAccountIcon);

        editAccountBtn = new QPushButton(layoutWidget);
        editAccountBtn->setObjectName(QString::fromUtf8("editAccountBtn"));
        editAccountBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_10->addWidget(editAccountBtn);

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

        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 80, 971, 51));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 40, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(220, 120, 1051, 511));
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
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        memberViewLoans->setCentralWidget(centralwidget);

        retranslateUi(memberViewLoans);

        QMetaObject::connectSlotsByName(memberViewLoans);
    } // setupUi

    void retranslateUi(QMainWindow *memberViewLoans)
    {
        memberViewLoans->setWindowTitle(QApplication::translate("memberViewLoans", "MainWindow", nullptr));
        loanedBooksIcon->setText(QApplication::translate("memberViewLoans", "Catalogue", nullptr));
        loanedBooksBtn->setText(QApplication::translate("memberViewLoans", "Loaned Books", nullptr));
        reservedBooksIcon->setText(QApplication::translate("memberViewLoans", "member", nullptr));
        reservedBooksBtn->setText(QApplication::translate("memberViewLoans", "Reserved Books", nullptr));
        editAccountIcon->setText(QApplication::translate("memberViewLoans", "Reserved Books", nullptr));
        editAccountBtn->setText(QApplication::translate("memberViewLoans", "Account Details", nullptr));
        signoutIcon->setText(QApplication::translate("memberViewLoans", "signOut", nullptr));
        signoutBtn->setText(QApplication::translate("memberViewLoans", "Sign Out", nullptr));
        pageDesc->setText(QApplication::translate("memberViewLoans", "Here are the books loaned under your account!", nullptr));
        pageTitle->setText(QApplication::translate("memberViewLoans", "Loaned Books", nullptr));
        logoImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberViewLoans: public Ui_memberViewLoans {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERVIEWLOANS_H
