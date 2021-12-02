/********************************************************************************
** Form generated from reading UI file 'loanedbooknotification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANEDBOOKNOTIFICATION_H
#define UI_LOANEDBOOKNOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_LoanedBookNotification
{
public:
    QLabel *pageTitle;
    QLabel *pageDesc;
    QListWidget *listWidget;

    void setupUi(QDialog *LoanedBookNotification)
    {
        if (LoanedBookNotification->objectName().isEmpty())
            LoanedBookNotification->setObjectName(QString::fromUtf8("LoanedBookNotification"));
        LoanedBookNotification->resize(600, 400);
        LoanedBookNotification->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        pageTitle = new QLabel(LoanedBookNotification);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(20, 20, 441, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(LoanedBookNotification);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(20, 60, 511, 51));
        listWidget = new QListWidget(LoanedBookNotification);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 120, 551, 261));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	border-radius: 25px;\n"
"	background: rgb(255, 255, 255);\n"
"}"));

        retranslateUi(LoanedBookNotification);

        QMetaObject::connectSlotsByName(LoanedBookNotification);
    } // setupUi

    void retranslateUi(QDialog *LoanedBookNotification)
    {
        LoanedBookNotification->setWindowTitle(QApplication::translate("LoanedBookNotification", "Dialog", nullptr));
        pageTitle->setText(QApplication::translate("LoanedBookNotification", "Book has been loaned!", nullptr));
        pageDesc->setText(QApplication::translate("LoanedBookNotification", "Congrats! This book is now in your account.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoanedBookNotification: public Ui_LoanedBookNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANEDBOOKNOTIFICATION_H
