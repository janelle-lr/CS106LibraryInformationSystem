/********************************************************************************
** Form generated from reading UI file 'returnbooksnotification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOKSNOTIFICATION_H
#define UI_RETURNBOOKSNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_ReturnBooksNotification
{
public:
    QLabel *pageDesc;
    QLabel *pageTitle;
    QListWidget *listWidget;

    void setupUi(QDialog *ReturnBooksNotification)
    {
        if (ReturnBooksNotification->objectName().isEmpty())
            ReturnBooksNotification->setObjectName(QString::fromUtf8("ReturnBooksNotification"));
        ReturnBooksNotification->resize(600, 400);
        ReturnBooksNotification->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"	font-size: 13px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	border-radius: 15px; \n"
"	font-size: 13px;\n"
"	height: 31px; \n"
"}"));
        pageDesc = new QLabel(ReturnBooksNotification);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(20, 60, 511, 51));
        pageTitle = new QLabel(ReturnBooksNotification);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(20, 20, 441, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        listWidget = new QListWidget(ReturnBooksNotification);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 120, 551, 261));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	border-radius: 25px;\n"
"	background: rgb(255, 255, 255);\n"
"}"));

        retranslateUi(ReturnBooksNotification);

        QMetaObject::connectSlotsByName(ReturnBooksNotification);
    } // setupUi

    void retranslateUi(QDialog *ReturnBooksNotification)
    {
        ReturnBooksNotification->setWindowTitle(QApplication::translate("ReturnBooksNotification", "Dialog", nullptr));
        pageDesc->setText(QApplication::translate("ReturnBooksNotification", "I hope You had a good time reading!", nullptr));
        pageTitle->setText(QApplication::translate("ReturnBooksNotification", "Thanks for returning our books!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReturnBooksNotification: public Ui_ReturnBooksNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOKSNOTIFICATION_H
