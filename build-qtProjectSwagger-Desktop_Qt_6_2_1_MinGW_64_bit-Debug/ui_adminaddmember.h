/********************************************************************************
** Form generated from reading UI file 'adminaddmember.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINADDMEMBER_H
#define UI_ADMINADDMEMBER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminAddMember
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *memberName;
    QLabel *label_12;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QLineEdit *newFirstName;
    QLabel *label_14;
    QLineEdit *newLastName;
    QLabel *label_25;
    QDateEdit *DOB;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *emailDetails;
    QLabel *label_15;
    QFormLayout *formLayout_5;
    QLabel *label_16;
    QLineEdit *newEmail;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *userPass;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *newUsername;
    QLabel *label_5;
    QLineEdit *newPassword;
    QPushButton *pushButton;
    QToolBox *toolBox;
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QToolBox *toolBox_2;
    QWidget *widget1;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QWidget *page_4;
    QPushButton *pushButton_9;
    QWidget *page_5;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QWidget *page_2;
    QPushButton *pushButton_4;
    QWidget *page_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QMenu *menuMembers;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminAddMember)
    {
        if (adminAddMember->objectName().isEmpty())
            adminAddMember->setObjectName(QString::fromUtf8("adminAddMember"));
        adminAddMember->resize(1400, 953);
        centralwidget = new QWidget(adminAddMember);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(110, 120, 1181, 125));
        memberName = new QVBoxLayout(verticalLayoutWidget_2);
        memberName->setObjectName(QString::fromUtf8("memberName"));
        memberName->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        memberName->addWidget(label_12);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        newFirstName = new QLineEdit(verticalLayoutWidget_2);
        newFirstName->setObjectName(QString::fromUtf8("newFirstName"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, newFirstName);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_14);

        newLastName = new QLineEdit(verticalLayoutWidget_2);
        newLastName->setObjectName(QString::fromUtf8("newLastName"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, newLastName);

        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_25);

        DOB = new QDateEdit(verticalLayoutWidget_2);
        DOB->setObjectName(QString::fromUtf8("DOB"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, DOB);


        memberName->addLayout(formLayout_4);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(110, 370, 1181, 61));
        emailDetails = new QVBoxLayout(verticalLayoutWidget_3);
        emailDetails->setObjectName(QString::fromUtf8("emailDetails"));
        emailDetails->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        emailDetails->addWidget(label_15);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setHorizontalSpacing(30);
        label_16 = new QLabel(verticalLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(124);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy1);
        label_16->setMinimumSize(QSize(36, 0));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_16);

        newEmail = new QLineEdit(verticalLayoutWidget_3);
        newEmail->setObjectName(QString::fromUtf8("newEmail"));
        sizePolicy.setHeightForWidth(newEmail->sizePolicy().hasHeightForWidth());
        newEmail->setSizePolicy(sizePolicy);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, newEmail);


        emailDetails->addLayout(formLayout_5);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 270, 1181, 81));
        userPass = new QVBoxLayout(verticalLayoutWidget);
        userPass->setObjectName(QString::fromUtf8("userPass"));
        userPass->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        userPass->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        newUsername = new QLineEdit(verticalLayoutWidget);
        newUsername->setObjectName(QString::fromUtf8("newUsername"));

        formLayout->setWidget(0, QFormLayout::FieldRole, newUsername);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        newPassword = new QLineEdit(verticalLayoutWidget);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));

        formLayout->setWidget(1, QFormLayout::FieldRole, newPassword);


        userPass->addLayout(formLayout);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 800, 281, 61));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(350, 510, 251, 141));
        toolBox->setCursor(QCursor(Qt::ArrowCursor));
        toolBox->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolBox->setToolTipDuration(-1);
        toolBox->setAutoFillBackground(false);
        toolBox->setFrameShape(QFrame::NoFrame);
        toolBox->setLineWidth(1);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 251, 60));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 75, 23));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 30, 75, 23));
        toolBox_2 = new QToolBox(widget);
        toolBox_2->setObjectName(QString::fromUtf8("toolBox_2"));
        toolBox_2->setGeometry(QRect(0, 0, 251, 141));
        toolBox_2->setCursor(QCursor(Qt::ArrowCursor));
        toolBox_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        toolBox_2->setToolTipDuration(-1);
        toolBox_2->setAutoFillBackground(false);
        toolBox_2->setFrameShape(QFrame::NoFrame);
        toolBox_2->setLineWidth(1);
        widget1 = new QWidget();
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 0, 251, 60));
        pushButton_7 = new QPushButton(widget1);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 0, 75, 23));
        pushButton_8 = new QPushButton(widget1);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 30, 75, 23));
        toolBox_2->addItem(widget1, QString::fromUtf8("Account"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 100, 30));
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 0, 75, 23));
        toolBox_2->addItem(page_4, QString::fromUtf8("Catalogue"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 100, 30));
        pushButton_10 = new QPushButton(page_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(10, 0, 75, 23));
        pushButton_11 = new QPushButton(page_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(100, 0, 75, 23));
        toolBox_2->addItem(page_5, QString::fromUtf8("Member"));
        toolBox->addItem(widget, QString::fromUtf8("Account"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 251, 60));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 0, 75, 23));
        toolBox->addItem(page_2, QString::fromUtf8("Catalogue"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        pushButton_5 = new QPushButton(page_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 0, 75, 23));
        pushButton_6 = new QPushButton(page_3);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(100, 0, 75, 23));
        toolBox->addItem(page_3, QString::fromUtf8("Member"));
        adminAddMember->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminAddMember);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1400, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        menuMembers = new QMenu(menubar);
        menuMembers->setObjectName(QString::fromUtf8("menuMembers"));
        adminAddMember->setMenuBar(menubar);
        statusbar = new QStatusBar(adminAddMember);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminAddMember->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menubar->addAction(menuMembers->menuAction());

        retranslateUi(adminAddMember);

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(6);
        toolBox_2->setCurrentIndex(0);
        toolBox_2->layout()->setSpacing(6);


        QMetaObject::connectSlotsByName(adminAddMember);
    } // setupUi

    void retranslateUi(QMainWindow *adminAddMember)
    {
        adminAddMember->setWindowTitle(QCoreApplication::translate("adminAddMember", "MainWindow", nullptr));
        label_12->setText(QCoreApplication::translate("adminAddMember", "First name & Last Name", nullptr));
        label_13->setText(QCoreApplication::translate("adminAddMember", "First Name", nullptr));
        label_14->setText(QCoreApplication::translate("adminAddMember", "Last name", nullptr));
        label_25->setText(QCoreApplication::translate("adminAddMember", "Date of Birth", nullptr));
        label_15->setText(QCoreApplication::translate("adminAddMember", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("adminAddMember", "email", nullptr));
        label_6->setText(QCoreApplication::translate("adminAddMember", "Log-in Details", nullptr));
        label_4->setText(QCoreApplication::translate("adminAddMember", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("adminAddMember", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("adminAddMember", "DONE", nullptr));
        pushButton_2->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(widget1), QCoreApplication::translate("adminAddMember", "Account", nullptr));
        pushButton_9->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_4), QCoreApplication::translate("adminAddMember", "Catalogue", nullptr));
        pushButton_10->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        toolBox_2->setItemText(toolBox_2->indexOf(page_5), QCoreApplication::translate("adminAddMember", "Member", nullptr));
        toolBox->setItemText(toolBox->indexOf(widget), QCoreApplication::translate("adminAddMember", "Account", nullptr));
        pushButton_4->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("adminAddMember", "Catalogue", nullptr));
        pushButton_5->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("adminAddMember", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("adminAddMember", "Member", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("adminAddMember", "Account", nullptr));
        menuCatalogue->setTitle(QCoreApplication::translate("adminAddMember", "Catalogue", nullptr));
        menuMembers->setTitle(QCoreApplication::translate("adminAddMember", "Members", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminAddMember: public Ui_adminAddMember {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINADDMEMBER_H
