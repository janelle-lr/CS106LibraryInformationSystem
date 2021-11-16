/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *usernameLabel;
    QLineEdit *passwordLineEdit;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QPushButton *loginPushButton;
    QLabel *loginLabel;
    QCheckBox *checkBox;
    QLabel *logoImage;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 953);
        MainWindow->setMinimumSize(QSize(1440, 953));
        MainWindow->setMaximumSize(QSize(1440, 953));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"font-family: Montserrat;\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(360, 200, 331, 281));
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
        usernameLabel = new QLabel(groupBox);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(30, 60, 71, 16));
        passwordLineEdit = new QLineEdit(groupBox);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(30, 140, 271, 31));
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"}"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        usernameLineEdit = new QLineEdit(groupBox);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(30, 80, 271, 31));
        usernameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"}"));
        passwordLabel = new QLabel(groupBox);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(30, 120, 61, 16));
        loginPushButton = new QPushButton(groupBox);
        loginPushButton->setObjectName(QString::fromUtf8("loginPushButton"));
        loginPushButton->setGeometry(QRect(30, 220, 271, 31));
        loginPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        loginLabel = new QLabel(groupBox);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(0, 10, 331, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat Medium"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        loginLabel->setFont(font);
        loginLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 24px \"Montserrat Medium\";\n"
"}"));
        loginLabel->setAlignment(Qt::AlignCenter);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 180, 111, 17));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(300, 110, 441, 81));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(usernameLineEdit, passwordLineEdit);
        QWidget::setTabOrder(passwordLineEdit, loginPushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        usernameLabel->setText(QApplication::translate("MainWindow", "Username", nullptr));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password", nullptr));
        loginPushButton->setText(QApplication::translate("MainWindow", "Log In", nullptr));
        loginLabel->setText(QApplication::translate("MainWindow", "Log In", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Show Password", nullptr));
        logoImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
