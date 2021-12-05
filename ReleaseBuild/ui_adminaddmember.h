/********************************************************************************
** Form generated from reading UI file 'adminaddmember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINADDMEMBER_H
#define UI_ADMINADDMEMBER_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddMember
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QLabel *pageTitle;
    QLabel *pageDesc;
    QGroupBox *groupBox;
    QPushButton *addMember;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_16;
    QLineEdit *usernameLineEdit;
    QLabel *label_4;
    QLineEdit *emailLineEdit;
    QLineEdit *firstNameLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *mobileNumLineEdit;
    QLineEdit *lastNameLineEdit;
    QDateEdit *dateEdit;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *memberIcon;
    QPushButton *memberBtn;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminAddMember)
    {
        if (adminAddMember->objectName().isEmpty())
            adminAddMember->setObjectName(QString::fromUtf8("adminAddMember"));
        adminAddMember->resize(1280, 640);
        adminAddMember->setStyleSheet(QString::fromUtf8("/* Change Background Color */\n"
"QMainWindow{\n"
"	background: #FFE5D0;\n"
"}"));
        centralwidget = new QWidget(adminAddMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("/* Change Background Color */\n"
"QWidget{\n"
"	background: #FFE5D0;\n"
"	font-family: \"Montserrat\";\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 20, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 80, 511, 51));
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
        addMember = new QPushButton(groupBox);
        addMember->setObjectName(QString::fromUtf8("addMember"));
        addMember->setGeometry(QRect(380, 320, 241, 31));
        addMember->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"/*background-color: palette(base);*/\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 72, 111, 31));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(50, 109, 111, 31));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(50, 254, 141, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777185, 16777215));
        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setEnabled(false);
        usernameLineEdit->setGeometry(QRect(290, 220, 551, 31));
        sizePolicy.setHeightForWidth(usernameLineEdit->sizePolicy().hasHeightForWidth());
        usernameLineEdit->setSizePolicy(sizePolicy);
        usernameLineEdit->setMinimumSize(QSize(0, 31));
        usernameLineEdit->setMaximumSize(QSize(16777215, 0));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 35, 111, 31));
        label_4->setStyleSheet(QString::fromUtf8(""));
        emailLineEdit = new QLineEdit(groupBox);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(290, 109, 551, 31));
        emailLineEdit->setMinimumSize(QSize(0, 31));
        firstNameLineEdit = new QLineEdit(groupBox);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setGeometry(QRect(290, 35, 551, 31));
        firstNameLineEdit->setMinimumSize(QSize(0, 31));
        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(290, 257, 551, 31));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumSize(QSize(0, 31));
        passwordLineEdit->setMaximumSize(QSize(16777215, 0));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        passwordLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        mobileNumLineEdit = new QLineEdit(groupBox);
        mobileNumLineEdit->setObjectName(QString::fromUtf8("mobileNumLineEdit"));
        mobileNumLineEdit->setGeometry(QRect(290, 146, 551, 31));
        mobileNumLineEdit->setMinimumSize(QSize(0, 31));
        mobileNumLineEdit->setMaximumSize(QSize(16777215, 16777215));
        mobileNumLineEdit->setBaseSize(QSize(0, 31));
        lastNameLineEdit = new QLineEdit(groupBox);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));
        lastNameLineEdit->setGeometry(QRect(290, 72, 551, 31));
        lastNameLineEdit->setMinimumSize(QSize(0, 31));
        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(290, 183, 250, 31));
        dateEdit->setMinimumSize(QSize(0, 31));
        dateEdit->setMaximumSize(QSize(16777215, 0));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(50, 183, 211, 31));
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777185, 16777215));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(50, 220, 141, 31));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777185, 16777215));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 146, 161, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        adminAddMember->setCentralWidget(centralwidget);
        layoutWidget->raise();
        logoImage->raise();
        pageTitle->raise();
        pageDesc->raise();
        groupBox->raise();
        line->raise();
        menubar = new QMenuBar(adminAddMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminAddMember->setMenuBar(menubar);

        retranslateUi(adminAddMember);

        QMetaObject::connectSlotsByName(adminAddMember);
    } // setupUi

    void retranslateUi(QMainWindow *adminAddMember)
    {
        adminAddMember->setWindowTitle(QCoreApplication::translate("adminAddMember", "MainWindow", nullptr));
        logoImage->setText(QString());
        pageTitle->setText(QCoreApplication::translate("adminAddMember", "Add New Member", nullptr));
        pageDesc->setText(QCoreApplication::translate("adminAddMember", "Create a new member so we can share our books!", nullptr));
        groupBox->setTitle(QString());
        addMember->setText(QCoreApplication::translate("adminAddMember", "Add Member", nullptr));
        label_5->setText(QCoreApplication::translate("adminAddMember", "Last Name", nullptr));
        label_13->setText(QCoreApplication::translate("adminAddMember", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("adminAddMember", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("adminAddMember", "First Name", nullptr));
        firstNameLineEdit->setText(QString());
        mobileNumLineEdit->setText(QString());
        label_20->setText(QCoreApplication::translate("adminAddMember", "Date of Birth (DD/MM/YYYY)", nullptr));
        label_21->setText(QCoreApplication::translate("adminAddMember", "Username", nullptr));
        label->setText(QCoreApplication::translate("adminAddMember", "Mobile Number", nullptr));
        memberIcon->setText(QCoreApplication::translate("adminAddMember", "member", nullptr));
        memberBtn->setText(QCoreApplication::translate("adminAddMember", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminAddMember: public Ui_adminAddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDMEMBER_H
