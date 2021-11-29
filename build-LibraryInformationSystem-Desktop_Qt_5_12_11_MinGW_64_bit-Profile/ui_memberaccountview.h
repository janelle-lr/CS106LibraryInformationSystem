/********************************************************************************
** Form generated from reading UI file 'memberaccountview.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERACCOUNTVIEW_H
#define UI_MEMBERACCOUNTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberAccountView
{
public:
    QAction *actionView_Catalogue;
    QAction *actionSign_Out;
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
    QFrame *line;
    QLabel *logoImage;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *userName;
    QLineEdit *memberUser;
    QLabel *pass;
    QLineEdit *memberPass;
    QLabel *email;
    QLineEdit *memberEmail;
    QLabel *lastName;
    QLineEdit *memberLastName;
    QLabel *dob;
    QDateEdit *memberDOB;
    QLabel *firstName;
    QLineEdit *memberFirstName;
    QLabel *pageTitle;
    QLabel *pageDesc;

    void setupUi(QMainWindow *memberAccountView)
    {
        if (memberAccountView->objectName().isEmpty())
            memberAccountView->setObjectName(QString::fromUtf8("memberAccountView"));
        memberAccountView->resize(1280, 640);
        memberAccountView->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
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
        actionView_Catalogue = new QAction(memberAccountView);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        actionSign_Out = new QAction(memberAccountView);
        actionSign_Out->setObjectName(QString::fromUtf8("actionSign_Out"));
        centralwidget = new QWidget(memberAccountView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
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
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 170, 931, 401));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	border-radius: 25px;\n"
"	background: rgb(255, 255, 255);\n"
"}\n"
"\n"
"/*QLineEdit{\n"
"	background:rgb(255, 229, 208);\n"
"	border-radius: 15px;\n"
"}*/\n"
"\n"
"QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background:rgb(255, 229, 208);\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"}\n"
"\n"
"QDateEdit{\n"
"	background:rgb(255, 229, 208);\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"}\n"
"\n"
"QFormLayout{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"	border-radius: 15px; \n"
"	font-size: 13px;\n"
"}\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 340, 281, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 20, 141, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"\n"
"}"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 120, 181, 31));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"\n"
"}"));
        userName = new QLabel(groupBox);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(50, 50, 69, 31));
        memberUser = new QLineEdit(groupBox);
        memberUser->setObjectName(QString::fromUtf8("memberUser"));
        memberUser->setEnabled(false);
        memberUser->setGeometry(QRect(290, 50, 551, 31));
        pass = new QLabel(groupBox);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setGeometry(QRect(50, 80, 67, 31));
        memberPass = new QLineEdit(groupBox);
        memberPass->setObjectName(QString::fromUtf8("memberPass"));
        memberPass->setGeometry(QRect(290, 90, 551, 31));
        email = new QLabel(groupBox);
        email->setObjectName(QString::fromUtf8("email"));
        email->setEnabled(true);
        email->setGeometry(QRect(50, 270, 61, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(124);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy1);
        email->setMinimumSize(QSize(36, 0));
        memberEmail = new QLineEdit(groupBox);
        memberEmail->setObjectName(QString::fromUtf8("memberEmail"));
        memberEmail->setGeometry(QRect(290, 273, 551, 31));
        sizePolicy.setHeightForWidth(memberEmail->sizePolicy().hasHeightForWidth());
        memberEmail->setSizePolicy(sizePolicy);
        lastName = new QLabel(groupBox);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        lastName->setGeometry(QRect(50, 190, 81, 31));
        memberLastName = new QLineEdit(groupBox);
        memberLastName->setObjectName(QString::fromUtf8("memberLastName"));
        memberLastName->setGeometry(QRect(290, 190, 551, 31));
        dob = new QLabel(groupBox);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setGeometry(QRect(50, 230, 121, 31));
        memberDOB = new QDateEdit(groupBox);
        memberDOB->setObjectName(QString::fromUtf8("memberDOB"));
        memberDOB->setGeometry(QRect(290, 230, 250, 31));
        firstName = new QLabel(groupBox);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setGeometry(QRect(50, 160, 91, 31));
        memberFirstName = new QLineEdit(groupBox);
        memberFirstName->setObjectName(QString::fromUtf8("memberFirstName"));
        memberFirstName->setGeometry(QRect(290, 150, 551, 31));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 40, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 80, 971, 51));
        memberAccountView->setCentralWidget(centralwidget);

        retranslateUi(memberAccountView);

        QMetaObject::connectSlotsByName(memberAccountView);
    } // setupUi

    void retranslateUi(QMainWindow *memberAccountView)
    {
        memberAccountView->setWindowTitle(QApplication::translate("memberAccountView", "MainWindow", nullptr));
        actionView_Catalogue->setText(QApplication::translate("memberAccountView", "View Catalogue", nullptr));
        actionSign_Out->setText(QApplication::translate("memberAccountView", "Sign-Out", nullptr));
        loanedBooksIcon->setText(QApplication::translate("memberAccountView", "Catalogue", nullptr));
        loanedBooksBtn->setText(QApplication::translate("memberAccountView", "Loaned Books", nullptr));
        reservedBooksIcon->setText(QApplication::translate("memberAccountView", "member", nullptr));
        reservedBooksBtn->setText(QApplication::translate("memberAccountView", "Reserved Books", nullptr));
        editAccountIcon->setText(QApplication::translate("memberAccountView", "Reserved Books", nullptr));
        editAccountBtn->setText(QApplication::translate("memberAccountView", "Account Details", nullptr));
        signoutIcon->setText(QApplication::translate("memberAccountView", "signOut", nullptr));
        signoutBtn->setText(QApplication::translate("memberAccountView", "Sign Out", nullptr));
        logoImage->setText(QString());
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("memberAccountView", "DONE", nullptr));
        label_6->setText(QApplication::translate("memberAccountView", "Log-in Details", nullptr));
        label_12->setText(QApplication::translate("memberAccountView", "Full Name", nullptr));
        userName->setText(QApplication::translate("memberAccountView", "Username", nullptr));
        pass->setText(QApplication::translate("memberAccountView", "Password", nullptr));
        email->setText(QApplication::translate("memberAccountView", "Email", nullptr));
        lastName->setText(QApplication::translate("memberAccountView", "Last name", nullptr));
        dob->setText(QApplication::translate("memberAccountView", "Date of Birth", nullptr));
        firstName->setText(QApplication::translate("memberAccountView", "First Name", nullptr));
        pageTitle->setText(QApplication::translate("memberAccountView", "Edit Account Details", nullptr));
        pageDesc->setText(QApplication::translate("memberAccountView", "Hey user, chnage your shit here. If you don't like it then yikes \n"
" if you have any complaints, please DM the admin or something.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberAccountView: public Ui_memberAccountView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERACCOUNTVIEW_H
