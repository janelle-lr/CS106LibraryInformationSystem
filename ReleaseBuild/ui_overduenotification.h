/********************************************************************************
** Form generated from reading UI file 'overduenotification.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERDUENOTIFICATION_H
#define UI_OVERDUENOTIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_OverdueNotification
{
public:
    QLabel *pageTitle;
    QLabel *pageDesc;
    QListWidget *listWidget;

    void setupUi(QDialog *OverdueNotification)
    {
        if (OverdueNotification->objectName().isEmpty())
            OverdueNotification->setObjectName(QString::fromUtf8("OverdueNotification"));
        OverdueNotification->resize(600, 400);
        OverdueNotification->setStyleSheet(QString::fromUtf8("QDialog{\n"
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
        pageTitle = new QLabel(OverdueNotification);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(20, 20, 441, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(OverdueNotification);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(20, 60, 511, 51));
        listWidget = new QListWidget(OverdueNotification);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 110, 551, 261));
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	border-radius: 25px;\n"
"	background: rgb(255, 255, 255);\n"
"}"));

        retranslateUi(OverdueNotification);

        QMetaObject::connectSlotsByName(OverdueNotification);
    } // setupUi

    void retranslateUi(QDialog *OverdueNotification)
    {
        OverdueNotification->setWindowTitle(QCoreApplication::translate("OverdueNotification", "Dialog", nullptr));
        pageTitle->setText(QCoreApplication::translate("OverdueNotification", "Hey! You have books expiring soon!", nullptr));
        pageDesc->setText(QCoreApplication::translate("OverdueNotification", "Here's a list of books expiring tomorrow:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OverdueNotification: public Ui_OverdueNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERDUENOTIFICATION_H
