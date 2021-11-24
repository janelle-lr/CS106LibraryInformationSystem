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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddMember
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *firstNameLineEdit;
    QLabel *label_5;
    QLineEdit *lastNameLineEdit;
    QLabel *label_13;
    QLineEdit *emailLineEdit;
    QLabel *label_20;
    QLineEdit *dobLineEdit;
    QLabel *label_21;
    QLineEdit *usernameLineEdit;
    QLabel *label_16;
    QLineEdit *passwordLineEdit;
    QPushButton *adddMemberButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminAddMember)
    {
        if (adminAddMember->objectName().isEmpty())
            adminAddMember->setObjectName(QString::fromUtf8("adminAddMember"));
        adminAddMember->resize(1090, 600);
        centralwidget = new QWidget(adminAddMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 120, 1021, 349));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
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

        verticalLayout->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        firstNameLineEdit = new QLineEdit(verticalLayoutWidget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameLineEdit);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lastNameLineEdit = new QLineEdit(verticalLayoutWidget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));
        lastNameLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(1, QFormLayout::FieldRole, lastNameLineEdit);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        emailLineEdit = new QLineEdit(verticalLayoutWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy1);
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_20);

        dobLineEdit = new QLineEdit(verticalLayoutWidget);
        dobLineEdit->setObjectName(QString::fromUtf8("dobLineEdit"));
        sizePolicy1.setHeightForWidth(dobLineEdit->sizePolicy().hasHeightForWidth());
        dobLineEdit->setSizePolicy(sizePolicy1);
        dobLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(3, QFormLayout::FieldRole, dobLineEdit);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_21);

        usernameLineEdit = new QLineEdit(verticalLayoutWidget);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        sizePolicy1.setHeightForWidth(usernameLineEdit->sizePolicy().hasHeightForWidth());
        usernameLineEdit->setSizePolicy(sizePolicy1);
        usernameLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(4, QFormLayout::FieldRole, usernameLineEdit);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_16);

        passwordLineEdit = new QLineEdit(verticalLayoutWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        sizePolicy1.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy1);
        passwordLineEdit->setMinimumSize(QSize(0, 60));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        passwordLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(5, QFormLayout::FieldRole, passwordLineEdit);


        verticalLayout->addLayout(formLayout);

        adddMemberButton = new QPushButton(centralwidget);
        adddMemberButton->setObjectName(QString::fromUtf8("adddMemberButton"));
        adddMemberButton->setGeometry(QRect(260, 510, 75, 23));
        adminAddMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminAddMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1090, 21));
        adminAddMember->setMenuBar(menubar);
        statusbar = new QStatusBar(adminAddMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminAddMember->setStatusBar(statusbar);

        retranslateUi(adminAddMember);

        QMetaObject::connectSlotsByName(adminAddMember);
    } // setupUi

    void retranslateUi(QMainWindow *adminAddMember)
    {
        adminAddMember->setWindowTitle(QApplication::translate("adminAddMember", "MainWindow", nullptr));
        label_6->setText(QApplication::translate("adminAddMember", "Add Member", nullptr));
        label_4->setText(QApplication::translate("adminAddMember", "First Name", nullptr));
        firstNameLineEdit->setText(QString());
        label_5->setText(QApplication::translate("adminAddMember", "Last Name", nullptr));
        label_13->setText(QApplication::translate("adminAddMember", "Email", nullptr));
        label_20->setText(QApplication::translate("adminAddMember", "Date of Birth (DD/MM/YYYY)", nullptr));
        label_21->setText(QApplication::translate("adminAddMember", "Username", nullptr));
        label_16->setText(QApplication::translate("adminAddMember", "Password", nullptr));
        adddMemberButton->setText(QApplication::translate("adminAddMember", "Add Memebr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminAddMember: public Ui_adminAddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDMEMBER_H
