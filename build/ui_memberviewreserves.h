/********************************************************************************
** Form generated from reading UI file 'memberviewreserves.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERVIEWRESERVES_H
#define UI_MEMBERVIEWRESERVES_H

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

class Ui_memberViewReserves
{
public:
    QWidget *centralwidget;
    QLabel *pageTitle;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_11;
    QLabel *loanedBooksIcon;
    QPushButton *loanedBooksBtn;
    QLabel *reservedBooksIcon;
    QPushButton *reservedBooksBtn;
    QLabel *editAccountIcon;
    QPushButton *editAccountBtn;
    QSpacerItem *verticalSpacer_4;
    QLabel *signoutIcon;
    QPushButton *signoutBtn;
    QLabel *pageDesc;
    QLabel *logoImage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;
    QFrame *line;

    void setupUi(QMainWindow *memberViewReserves)
    {
        if (memberViewReserves->objectName().isEmpty())
            memberViewReserves->setObjectName(QString::fromUtf8("memberViewReserves"));
        memberViewReserves->resize(1280, 640);
        centralwidget = new QWidget(memberViewReserves);
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
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 40, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout_11 = new QVBoxLayout(layoutWidget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        loanedBooksIcon = new QLabel(layoutWidget);
        loanedBooksIcon->setObjectName(QString::fromUtf8("loanedBooksIcon"));
        loanedBooksIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        loanedBooksIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(loanedBooksIcon);

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

        verticalLayout_11->addWidget(loanedBooksBtn);

        reservedBooksIcon = new QLabel(layoutWidget);
        reservedBooksIcon->setObjectName(QString::fromUtf8("reservedBooksIcon"));
        reservedBooksIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(reservedBooksIcon);

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

        verticalLayout_11->addWidget(reservedBooksBtn);

        editAccountIcon = new QLabel(layoutWidget);
        editAccountIcon->setObjectName(QString::fromUtf8("editAccountIcon"));
        editAccountIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(editAccountIcon);

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

        verticalLayout_11->addWidget(editAccountBtn);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        signoutIcon = new QLabel(layoutWidget);
        signoutIcon->setObjectName(QString::fromUtf8("signoutIcon"));
        signoutIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(signoutIcon);

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

        verticalLayout_11->addWidget(signoutBtn);

        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 80, 971, 51));
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
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1051, 511));
        scrollAreaWidgetContents_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));

        horizontalLayout_2->addLayout(gridLayout_4);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        memberViewReserves->setCentralWidget(centralwidget);

        retranslateUi(memberViewReserves);

        QMetaObject::connectSlotsByName(memberViewReserves);
    } // setupUi

    void retranslateUi(QMainWindow *memberViewReserves)
    {
        memberViewReserves->setWindowTitle(QApplication::translate("memberViewReserves", "MainWindow", nullptr));
        pageTitle->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        loanedBooksIcon->setText(QApplication::translate("memberViewReserves", "Catalogue", nullptr));
        loanedBooksBtn->setText(QApplication::translate("memberViewReserves", "Loaned Books", nullptr));
        reservedBooksIcon->setText(QApplication::translate("memberViewReserves", "member", nullptr));
        reservedBooksBtn->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        editAccountIcon->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        editAccountBtn->setText(QApplication::translate("memberViewReserves", "Account Details", nullptr));
        signoutIcon->setText(QApplication::translate("memberViewReserves", "signOut", nullptr));
        signoutBtn->setText(QApplication::translate("memberViewReserves", "Sign Out", nullptr));
        pageDesc->setText(QApplication::translate("memberViewReserves", "Here are the books reserved under your account!", nullptr));
        logoImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberViewReserves: public Ui_memberViewReserves {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERVIEWRESERVES_H
