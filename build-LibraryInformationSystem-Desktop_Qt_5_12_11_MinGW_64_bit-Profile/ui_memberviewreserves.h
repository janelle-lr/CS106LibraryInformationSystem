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
    QLabel *loanedBooksIcon_2;
    QPushButton *loanedBooksBtn_2;
    QLabel *reservedBooksIcon_2;
    QPushButton *reservedBooksBtn_2;
    QLabel *editAccountIcon_2;
    QPushButton *editAccountBtn_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *signoutIcon_2;
    QPushButton *signoutBtn_2;
    QLabel *pageDesc;
    QLabel *logoImage;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_4;

    void setupUi(QMainWindow *memberViewReserves)
    {
        if (memberViewReserves->objectName().isEmpty())
            memberViewReserves->setObjectName(QString::fromUtf8("memberViewReserves"));
        memberViewReserves->resize(1280, 640);
        centralwidget = new QWidget(memberViewReserves);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
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
        loanedBooksIcon_2 = new QLabel(layoutWidget);
        loanedBooksIcon_2->setObjectName(QString::fromUtf8("loanedBooksIcon_2"));
        loanedBooksIcon_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        loanedBooksIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(loanedBooksIcon_2);

        loanedBooksBtn_2 = new QPushButton(layoutWidget);
        loanedBooksBtn_2->setObjectName(QString::fromUtf8("loanedBooksBtn_2"));
        loanedBooksBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_11->addWidget(loanedBooksBtn_2);

        reservedBooksIcon_2 = new QLabel(layoutWidget);
        reservedBooksIcon_2->setObjectName(QString::fromUtf8("reservedBooksIcon_2"));
        reservedBooksIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(reservedBooksIcon_2);

        reservedBooksBtn_2 = new QPushButton(layoutWidget);
        reservedBooksBtn_2->setObjectName(QString::fromUtf8("reservedBooksBtn_2"));
        reservedBooksBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_11->addWidget(reservedBooksBtn_2);

        editAccountIcon_2 = new QLabel(layoutWidget);
        editAccountIcon_2->setObjectName(QString::fromUtf8("editAccountIcon_2"));
        editAccountIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(editAccountIcon_2);

        editAccountBtn_2 = new QPushButton(layoutWidget);
        editAccountBtn_2->setObjectName(QString::fromUtf8("editAccountBtn_2"));
        editAccountBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_11->addWidget(editAccountBtn_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_4);

        signoutIcon_2 = new QLabel(layoutWidget);
        signoutIcon_2->setObjectName(QString::fromUtf8("signoutIcon_2"));
        signoutIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(signoutIcon_2);

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

        verticalLayout_11->addWidget(signoutBtn_2);

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
        memberViewReserves->setCentralWidget(centralwidget);

        retranslateUi(memberViewReserves);

        QMetaObject::connectSlotsByName(memberViewReserves);
    } // setupUi

    void retranslateUi(QMainWindow *memberViewReserves)
    {
        memberViewReserves->setWindowTitle(QApplication::translate("memberViewReserves", "MainWindow", nullptr));
        pageTitle->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        loanedBooksIcon_2->setText(QApplication::translate("memberViewReserves", "Catalogue", nullptr));
        loanedBooksBtn_2->setText(QApplication::translate("memberViewReserves", "Loaned Books", nullptr));
        reservedBooksIcon_2->setText(QApplication::translate("memberViewReserves", "member", nullptr));
        reservedBooksBtn_2->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        editAccountIcon_2->setText(QApplication::translate("memberViewReserves", "Reserved Books", nullptr));
        editAccountBtn_2->setText(QApplication::translate("memberViewReserves", "Account Details", nullptr));
        signoutIcon_2->setText(QApplication::translate("memberViewReserves", "signOut", nullptr));
        signoutBtn_2->setText(QApplication::translate("memberViewReserves", "Sign Out", nullptr));
        pageDesc->setText(QApplication::translate("memberViewReserves", "LOREM IPSUM LMAO", nullptr));
        logoImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class memberViewReserves: public Ui_memberViewReserves {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERVIEWRESERVES_H
