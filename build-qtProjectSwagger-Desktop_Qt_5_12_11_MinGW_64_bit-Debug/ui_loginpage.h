/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_Name;
    QLabel *label_2;
    QLineEdit *lineEdit_Age;
    QLabel *label_3;
    QLineEdit *lineEdit_Dob;
    QLabel *label_4;
    QLineEdit *lineEdit_Email;
    QLabel *label_5;
    QLineEdit *lineEdit_MoNum;
    QLabel *label_6;
    QLineEdit *lineEdit_Username;
    QLabel *label_7;
    QLineEdit *lineEdit_Password;
    QLabel *label_10;
    QLineEdit *lineEdit_VerifyPass;
    QPushButton *pushButton_3;
    QLabel *img;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(800, 600);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(80, 90, 651, 421));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 621, 171));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        horizontalLayout = new QHBoxLayout(tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        lineEdit_Name = new QLineEdit(groupBox_2);
        lineEdit_Name->setObjectName(QString::fromUtf8("lineEdit_Name"));

        verticalLayout_2->addWidget(lineEdit_Name);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_Age = new QLineEdit(groupBox_2);
        lineEdit_Age->setObjectName(QString::fromUtf8("lineEdit_Age"));

        verticalLayout_2->addWidget(lineEdit_Age);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);

        lineEdit_Dob = new QLineEdit(groupBox_2);
        lineEdit_Dob->setObjectName(QString::fromUtf8("lineEdit_Dob"));

        verticalLayout_2->addWidget(lineEdit_Dob);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        lineEdit_Email = new QLineEdit(groupBox_2);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        verticalLayout_2->addWidget(lineEdit_Email);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        lineEdit_MoNum = new QLineEdit(groupBox_2);
        lineEdit_MoNum->setObjectName(QString::fromUtf8("lineEdit_MoNum"));

        verticalLayout_2->addWidget(lineEdit_MoNum);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        lineEdit_Username = new QLineEdit(groupBox_2);
        lineEdit_Username->setObjectName(QString::fromUtf8("lineEdit_Username"));

        verticalLayout_2->addWidget(lineEdit_Username);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        lineEdit_Password = new QLineEdit(groupBox_2);
        lineEdit_Password->setObjectName(QString::fromUtf8("lineEdit_Password"));

        verticalLayout_2->addWidget(lineEdit_Password);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_2->addWidget(label_10);

        lineEdit_VerifyPass = new QLineEdit(groupBox_2);
        lineEdit_VerifyPass->setObjectName(QString::fromUtf8("lineEdit_VerifyPass"));

        verticalLayout_2->addWidget(lineEdit_VerifyPass);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        horizontalLayout->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        img = new QLabel(centralwidget);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(16, 10, 371, 61));
        LoginPage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginPage);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        LoginPage->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginPage);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        LoginPage->setStatusBar(statusbar);

        retranslateUi(LoginPage);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QApplication::translate("LoginPage", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("LoginPage", "Please Enter your Log in Details", nullptr));
        label_8->setText(QApplication::translate("LoginPage", "Username", nullptr));
        label_9->setText(QApplication::translate("LoginPage", "Password", nullptr));
        lineEdit_2->setInputMask(QString());
        pushButton->setText(QApplication::translate("LoginPage", "Login Test", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("LoginPage", "Log in", nullptr));
        groupBox_2->setTitle(QApplication::translate("LoginPage", "Account Creation", nullptr));
        label->setText(QApplication::translate("LoginPage", "Name", nullptr));
        label_2->setText(QApplication::translate("LoginPage", "Age", nullptr));
        label_3->setText(QApplication::translate("LoginPage", "Date of Birth", nullptr));
        label_4->setText(QApplication::translate("LoginPage", "Email", nullptr));
        label_5->setText(QApplication::translate("LoginPage", "Mobile Number", nullptr));
        label_6->setText(QApplication::translate("LoginPage", "Username", nullptr));
        label_7->setText(QApplication::translate("LoginPage", "Password", nullptr));
        label_10->setText(QApplication::translate("LoginPage", "Re-enter Password", nullptr));
        pushButton_3->setText(QApplication::translate("LoginPage", "Test Add Acc", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("LoginPage", "Create New Account", nullptr));
        img->setText(QApplication::translate("LoginPage", "App Logo Here", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
