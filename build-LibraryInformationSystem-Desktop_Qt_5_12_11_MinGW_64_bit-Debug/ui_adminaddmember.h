/********************************************************************************
** Form generated from reading UI file 'adminaddmember.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINADDMEMBER_H
#define UI_ADMINADDMEMBER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddMember
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_8;
    QLabel *logoImage;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_17;
    QFormLayout *formLayout_6;
    QLabel *label_18;
    QLineEdit *firstName;
    QLabel *label_19;
    QLineEdit *lastName;
    QLabel *label_26;
    QDateEdit *DOB;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_20;
    QFormLayout *formLayout_7;
    QLabel *label_21;
    QLineEdit *email;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QFormLayout *formLayout_2;
    QLabel *label_8;
    QLineEdit *userName;
    QLabel *label_9;
    QLineEdit *passWord;
    QPushButton *addNewMember;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QMenu *menuMember;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminAddMember)
    {
        if (adminAddMember->objectName().isEmpty())
            adminAddMember->setObjectName(QString::fromUtf8("adminAddMember"));
        adminAddMember->resize(1440, 953);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminAddMember->sizePolicy().hasHeightForWidth());
        adminAddMember->setSizePolicy(sizePolicy);
        adminAddMember->setMinimumSize(QSize(0, 0));
        adminAddMember->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
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
        centralwidget = new QWidget(adminAddMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_8 = new QVBoxLayout(centralwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));

        verticalLayout_8->addWidget(logoImage);

        verticalSpacer_2 = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);
        label_17->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout_5->addWidget(label_17);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(71, 0));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_18);

        firstName = new QLineEdit(centralwidget);
        firstName->setObjectName(QString::fromUtf8("firstName"));
        firstName->setMinimumSize(QSize(0, 35));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, firstName);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_19);

        lastName = new QLineEdit(centralwidget);
        lastName->setObjectName(QString::fromUtf8("lastName"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lastName->sizePolicy().hasHeightForWidth());
        lastName->setSizePolicy(sizePolicy2);
        lastName->setMinimumSize(QSize(0, 35));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, lastName);

        label_26 = new QLabel(centralwidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_26);

        DOB = new QDateEdit(centralwidget);
        DOB->setObjectName(QString::fromUtf8("DOB"));
        DOB->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(DOB->sizePolicy().hasHeightForWidth());
        DOB->setSizePolicy(sizePolicy3);
        DOB->setMinimumSize(QSize(0, 35));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, DOB);


        verticalLayout_5->addLayout(formLayout_6);


        verticalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout_6->addWidget(label_20);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setHorizontalSpacing(30);
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(124);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy4);
        label_21->setMinimumSize(QSize(46, 0));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_21);

        email = new QLineEdit(centralwidget);
        email->setObjectName(QString::fromUtf8("email"));
        sizePolicy1.setHeightForWidth(email->sizePolicy().hasHeightForWidth());
        email->setSizePolicy(sizePolicy1);
        email->setMinimumSize(QSize(0, 35));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, email);


        verticalLayout_6->addLayout(formLayout_7);


        verticalLayout_4->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout_7->addWidget(label_7);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(71, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_8);

        userName = new QLineEdit(centralwidget);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setMinimumSize(QSize(0, 35));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, userName);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_9);

        passWord = new QLineEdit(centralwidget);
        passWord->setObjectName(QString::fromUtf8("passWord"));
        passWord->setMinimumSize(QSize(0, 35));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, passWord);


        verticalLayout_7->addLayout(formLayout_2);

        addNewMember = new QPushButton(centralwidget);
        addNewMember->setObjectName(QString::fromUtf8("addNewMember"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(addNewMember->sizePolicy().hasHeightForWidth());
        addNewMember->setSizePolicy(sizePolicy5);
        addNewMember->setMinimumSize(QSize(0, 60));
        addNewMember->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 25px;\n"
"	background-color: rgb(255, 212, 181)\n"
"}"));

        verticalLayout_7->addWidget(addNewMember);


        verticalLayout_4->addLayout(verticalLayout_7);


        verticalLayout_8->addLayout(verticalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        adminAddMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminAddMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 18));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        menuMember = new QMenu(menubar);
        menuMember->setObjectName(QString::fromUtf8("menuMember"));
        adminAddMember->setMenuBar(menubar);
        statusbar = new QStatusBar(adminAddMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminAddMember->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menubar->addAction(menuMember->menuAction());

        retranslateUi(adminAddMember);

        QMetaObject::connectSlotsByName(adminAddMember);
    } // setupUi

    void retranslateUi(QMainWindow *adminAddMember)
    {
        adminAddMember->setWindowTitle(QApplication::translate("adminAddMember", "MainWindow", nullptr));
        logoImage->setText(QString());
        label_17->setText(QApplication::translate("adminAddMember", "First name & Last Name", nullptr));
        label_18->setText(QApplication::translate("adminAddMember", "First Name", nullptr));
        label_19->setText(QApplication::translate("adminAddMember", "Last name", nullptr));
        label_26->setText(QApplication::translate("adminAddMember", "Date of Birth", nullptr));
        label_20->setText(QApplication::translate("adminAddMember", "Email", nullptr));
        label_21->setText(QApplication::translate("adminAddMember", "email", nullptr));
        label_7->setText(QApplication::translate("adminAddMember", "Log-in Details", nullptr));
        label_8->setText(QApplication::translate("adminAddMember", "Username", nullptr));
        label_9->setText(QApplication::translate("adminAddMember", "Password", nullptr));
        addNewMember->setText(QApplication::translate("adminAddMember", "DONE", nullptr));
        menuAccount->setTitle(QApplication::translate("adminAddMember", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("adminAddMember", "Catalogue", nullptr));
        menuMember->setTitle(QApplication::translate("adminAddMember", "Member", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminAddMember: public Ui_adminAddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDMEMBER_H
