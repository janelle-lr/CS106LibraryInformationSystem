/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(683, 600);
        login->setMinimumSize(QSize(683, 600));
        login->setMaximumSize(QSize(683, 600));
        login->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(login);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 150, 321, 251));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background: #fff;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 13px;\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 71, 16));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 140, 261, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 80, 261, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 61, 16));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 200, 261, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"/*background-color: palette(base);*/\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}\n"
"\n"
"/* for secondary button\n"
"QPushButton {\n"
"border: 1px solid;\n"
"border-color: #E78A6B;\n"
"font-size: 15px;\n"
"color:  #E78A6B;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.2);\n"
"}\n"
"*/"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 10, 71, 31));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 21px;\n"
"font-weight: 500;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 60, 541, 81));
        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 683, 21));
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        login->setStatusBar(statusbar);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QApplication::translate("login", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("login", "Username", nullptr));
        label_2->setText(QApplication::translate("login", "Password", nullptr));
        pushButton_5->setText(QApplication::translate("login", "Log In", nullptr));
        label_3->setText(QApplication::translate("login", "Log In", nullptr));
        label_4->setText(QApplication::translate("login", "label", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
