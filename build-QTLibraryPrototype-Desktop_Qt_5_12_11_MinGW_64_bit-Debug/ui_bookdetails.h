/********************************************************************************
** Form generated from reading UI file 'bookdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAILS_H
#define UI_BOOKDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookdetails
{
public:
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookdetails)
    {
        if (bookdetails->objectName().isEmpty())
            bookdetails->setObjectName(QString::fromUtf8("bookdetails"));
        bookdetails->resize(800, 600);
        bookdetails->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"/*background: #fff;*/\n"
"font-family: Century Gothic;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}"));
        actionLog_Out = new QAction(bookdetails);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        centralwidget = new QWidget(bookdetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 10, 231, 51));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 90, 151, 181));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 90, 161, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 24px;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 130, 161, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14px;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(250, 190, 161, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14px;\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 231, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 300, 701, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 230, 171, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid;\n"
"border-color: #E78A6B;\n"
"color:  #E78A6B;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.2);\n"
"}"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 320, 701, 221));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background: palette(base);\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 13px;\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(0, 20, 161, 31));
        label_6->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 100, 161, 31));
        label_7->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 180, 161, 31));
        label_8->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        bookdetails->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookdetails);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        bookdetails->setMenuBar(menubar);
        statusbar = new QStatusBar(bookdetails);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bookdetails->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menuAccount->addAction(actionLog_Out);

        retranslateUi(bookdetails);

        QMetaObject::connectSlotsByName(bookdetails);
    } // setupUi

    void retranslateUi(QMainWindow *bookdetails)
    {
        bookdetails->setWindowTitle(QApplication::translate("bookdetails", "MainWindow", nullptr));
        actionLog_Out->setText(QApplication::translate("bookdetails", "Log Out", nullptr));
        label_4->setText(QApplication::translate("bookdetails", "label", nullptr));
        label_5->setText(QApplication::translate("bookdetails", "book image", nullptr));
        label->setText(QApplication::translate("bookdetails", "Title", nullptr));
        label_2->setText(QApplication::translate("bookdetails", "Author", nullptr));
        label_3->setText(QApplication::translate("bookdetails", "Availability", nullptr));
        pushButton->setText(QApplication::translate("bookdetails", "Reserve", nullptr));
        pushButton_2->setText(QApplication::translate("bookdetails", "Other Button for admin", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("bookdetails", "Description", nullptr));
        label_7->setText(QApplication::translate("bookdetails", "Publisher", nullptr));
        label_8->setText(QApplication::translate("bookdetails", "Genre", nullptr));
        menuAccount->setTitle(QApplication::translate("bookdetails", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookdetails: public Ui_bookdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
