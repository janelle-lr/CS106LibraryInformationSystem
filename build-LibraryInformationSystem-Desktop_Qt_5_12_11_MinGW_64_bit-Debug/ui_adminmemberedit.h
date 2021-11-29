/********************************************************************************
** Form generated from reading UI file 'adminmemberedit.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMEMBEREDIT_H
#define UI_ADMINMEMBEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminMemberEdit
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QLabel *label_6;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *catalogueIcon;
    QPushButton *catalogueBtn;
    QLabel *memberIcon;
    QPushButton *memberBtn;
    QSpacerItem *verticalSpacer;
    QLabel *signoutIcon;
    QPushButton *signoutBtn;
    QGroupBox *groupBox;
    QPushButton *updateMemberButton;
    QLineEdit *emailLineEdit;
    QLineEdit *mobileNumLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_20;
    QLabel *label;
    QDateEdit *dateEdit;
    QLineEdit *usernameLineEdit;
    QLabel *label_13;
    QLabel *label_21;
    QLabel *label_16;
    QLabel *label_4;
    QLineEdit *firstNameLineEdit;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminMemberEdit)
    {
        if (adminMemberEdit->objectName().isEmpty())
            adminMemberEdit->setObjectName(QString::fromUtf8("adminMemberEdit"));
        adminMemberEdit->resize(1280, 640);
        adminMemberEdit->setMinimumSize(QSize(0, 0));
        adminMemberEdit->setMaximumSize(QSize(16777215, 16777215));
        centralwidget = new QWidget(adminMemberEdit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 30, 131, 81));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        catalogueIcon = new QLabel(layoutWidget_2);
        catalogueIcon->setObjectName(QString::fromUtf8("catalogueIcon"));
        catalogueIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        catalogueIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(catalogueIcon);

        catalogueBtn = new QPushButton(layoutWidget_2);
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

        memberIcon = new QLabel(layoutWidget_2);
        memberIcon->setObjectName(QString::fromUtf8("memberIcon"));
        memberIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(memberIcon);

        memberBtn = new QPushButton(layoutWidget_2);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        signoutIcon = new QLabel(layoutWidget_2);
        signoutIcon->setObjectName(QString::fromUtf8("signoutIcon"));
        signoutIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(signoutIcon);

        signoutBtn = new QPushButton(layoutWidget_2);
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

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 170, 911, 381));
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
        updateMemberButton = new QPushButton(groupBox);
        updateMemberButton->setObjectName(QString::fromUtf8("updateMemberButton"));
        updateMemberButton->setGeometry(QRect(330, 320, 221, 31));
        emailLineEdit = new QLineEdit(groupBox);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(300, 90, 551, 31));
        emailLineEdit->setMinimumSize(QSize(0, 31));
        mobileNumLineEdit = new QLineEdit(groupBox);
        mobileNumLineEdit->setObjectName(QString::fromUtf8("mobileNumLineEdit"));
        mobileNumLineEdit->setGeometry(QRect(300, 127, 551, 31));
        mobileNumLineEdit->setMinimumSize(QSize(0, 31));
        mobileNumLineEdit->setMaximumSize(QSize(16777215, 16777215));
        mobileNumLineEdit->setBaseSize(QSize(0, 31));
        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(300, 238, 551, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy1);
        passwordLineEdit->setMinimumSize(QSize(0, 31));
        passwordLineEdit->setMaximumSize(QSize(16777215, 0));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        passwordLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(60, 164, 211, 31));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777185, 16777215));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 127, 161, 31));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(300, 164, 551, 31));
        dateEdit->setMinimumSize(QSize(0, 31));
        dateEdit->setMaximumSize(QSize(16777215, 0));
        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setEnabled(false);
        usernameLineEdit->setGeometry(QRect(300, 201, 551, 31));
        sizePolicy1.setHeightForWidth(usernameLineEdit->sizePolicy().hasHeightForWidth());
        usernameLineEdit->setSizePolicy(sizePolicy1);
        usernameLineEdit->setMinimumSize(QSize(0, 31));
        usernameLineEdit->setMaximumSize(QSize(16777215, 0));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(60, 90, 111, 31));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(60, 201, 141, 31));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777185, 16777215));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(60, 235, 141, 31));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777185, 16777215));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 60, 101, 16));
        firstNameLineEdit = new QLineEdit(groupBox);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setGeometry(QRect(300, 51, 551, 31));
        firstNameLineEdit->setMinimumSize(QSize(0, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        adminMemberEdit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminMemberEdit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminMemberEdit->setMenuBar(menubar);
        statusbar = new QStatusBar(adminMemberEdit);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminMemberEdit->setStatusBar(statusbar);

        retranslateUi(adminMemberEdit);

        QMetaObject::connectSlotsByName(adminMemberEdit);
    } // setupUi

    void retranslateUi(QMainWindow *adminMemberEdit)
    {
        adminMemberEdit->setWindowTitle(QApplication::translate("adminMemberEdit", "MainWindow", nullptr));
        logoImage->setText(QString());
        label_6->setText(QApplication::translate("adminMemberEdit", "Edit Member", nullptr));
        catalogueIcon->setText(QApplication::translate("adminMemberEdit", "Catalogue", nullptr));
        catalogueBtn->setText(QApplication::translate("adminMemberEdit", "Catalogue", nullptr));
        memberIcon->setText(QApplication::translate("adminMemberEdit", "member", nullptr));
        memberBtn->setText(QApplication::translate("adminMemberEdit", "Member", nullptr));
        signoutIcon->setText(QApplication::translate("adminMemberEdit", "signOut", nullptr));
        signoutBtn->setText(QApplication::translate("adminMemberEdit", "Sign Out", nullptr));
        groupBox->setTitle(QString());
        updateMemberButton->setText(QApplication::translate("adminMemberEdit", "Save Changes", nullptr));
        mobileNumLineEdit->setText(QString());
        label_20->setText(QApplication::translate("adminMemberEdit", "Date of Birth (DD/MM/YYYY)", nullptr));
        label->setText(QApplication::translate("adminMemberEdit", "Mobile Number", nullptr));
        label_13->setText(QApplication::translate("adminMemberEdit", "Email", nullptr));
        label_21->setText(QApplication::translate("adminMemberEdit", "Username", nullptr));
        label_16->setText(QApplication::translate("adminMemberEdit", "Password", nullptr));
        label_4->setText(QApplication::translate("adminMemberEdit", "Full Name", nullptr));
        firstNameLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminMemberEdit: public Ui_adminMemberEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEMBEREDIT_H
