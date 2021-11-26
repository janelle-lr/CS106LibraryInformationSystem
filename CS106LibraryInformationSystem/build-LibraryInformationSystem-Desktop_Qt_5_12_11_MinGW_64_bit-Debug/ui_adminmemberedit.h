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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminMemberEdit
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *firstNameLineEdit;
    QLabel *label_13;
    QLineEdit *emailLineEdit;
    QLabel *label_20;
    QLineEdit *dobLineEdit;
    QLabel *label_21;
    QLineEdit *usernameLineEdit;
    QLabel *label_16;
    QLineEdit *passwordLineEdit;
    QLabel *label_6;
    QPushButton *updateMemberButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminMemberEdit)
    {
        if (adminMemberEdit->objectName().isEmpty())
            adminMemberEdit->setObjectName(QString::fromUtf8("adminMemberEdit"));
        adminMemberEdit->resize(1350, 640);
        adminMemberEdit->setMinimumSize(QSize(1350, 640));
        adminMemberEdit->setMaximumSize(QSize(1350, 640));
        centralwidget = new QWidget(adminMemberEdit);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(270, 200, 811, 247));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        firstNameLineEdit = new QLineEdit(layoutWidget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameLineEdit);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_13);

        emailLineEdit = new QLineEdit(layoutWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));
        emailLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(1, QFormLayout::FieldRole, emailLineEdit);

        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_20);

        dobLineEdit = new QLineEdit(layoutWidget);
        dobLineEdit->setObjectName(QString::fromUtf8("dobLineEdit"));
        sizePolicy.setHeightForWidth(dobLineEdit->sizePolicy().hasHeightForWidth());
        dobLineEdit->setSizePolicy(sizePolicy);
        dobLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(2, QFormLayout::FieldRole, dobLineEdit);

        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_21);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(usernameLineEdit->sizePolicy().hasHeightForWidth());
        usernameLineEdit->setSizePolicy(sizePolicy);
        usernameLineEdit->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(3, QFormLayout::FieldRole, usernameLineEdit);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_16);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        sizePolicy.setHeightForWidth(passwordLineEdit->sizePolicy().hasHeightForWidth());
        passwordLineEdit->setSizePolicy(sizePolicy);
        passwordLineEdit->setMinimumSize(QSize(0, 60));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        passwordLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        formLayout->setWidget(4, QFormLayout::FieldRole, passwordLineEdit);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(271, 137, 1019, 81));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));
        updateMemberButton = new QPushButton(centralwidget);
        updateMemberButton->setObjectName(QString::fromUtf8("updateMemberButton"));
        updateMemberButton->setGeometry(QRect(460, 460, 75, 23));
        adminMemberEdit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminMemberEdit);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1350, 21));
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
        label_4->setText(QApplication::translate("adminMemberEdit", "Full Name", nullptr));
        firstNameLineEdit->setText(QString());
        label_13->setText(QApplication::translate("adminMemberEdit", "Email", nullptr));
        label_20->setText(QApplication::translate("adminMemberEdit", "Date of Birth (DD/MM/YYYY)", nullptr));
        label_21->setText(QApplication::translate("adminMemberEdit", "Username", nullptr));
        label_16->setText(QApplication::translate("adminMemberEdit", "Password", nullptr));
        label_6->setText(QApplication::translate("adminMemberEdit", "edit Member", nullptr));
        updateMemberButton->setText(QApplication::translate("adminMemberEdit", "Add Memebr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminMemberEdit: public Ui_adminMemberEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEMBEREDIT_H
