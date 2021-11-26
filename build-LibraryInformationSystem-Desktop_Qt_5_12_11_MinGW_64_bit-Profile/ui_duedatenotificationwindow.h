/********************************************************************************
** Form generated from reading UI file 'duedatenotificationwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DUEDATENOTIFICATIONWINDOW_H
#define UI_DUEDATENOTIFICATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_DuedateNotificationWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;

    void setupUi(QDialog *DuedateNotificationWindow)
    {
        if (DuedateNotificationWindow->objectName().isEmpty())
            DuedateNotificationWindow->setObjectName(QString::fromUtf8("DuedateNotificationWindow"));
        DuedateNotificationWindow->resize(400, 300);
        horizontalLayout = new QHBoxLayout(DuedateNotificationWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(DuedateNotificationWindow);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);


        retranslateUi(DuedateNotificationWindow);

        QMetaObject::connectSlotsByName(DuedateNotificationWindow);
    } // setupUi

    void retranslateUi(QDialog *DuedateNotificationWindow)
    {
        DuedateNotificationWindow->setWindowTitle(QApplication::translate("DuedateNotificationWindow", "Books Expiring Soon", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DuedateNotificationWindow: public Ui_DuedateNotificationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DUEDATENOTIFICATIONWINDOW_H
