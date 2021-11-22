/********************************************************************************
** Form generated from reading UI file 'admincatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCATALOGUE_H
#define UI_ADMINCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
<<<<<<< HEAD
#include <QtWidgets/QVBoxLayout>
=======
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCatalogue
{
public:
    QWidget *centralwidget;
<<<<<<< HEAD
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
=======
    QPushButton *pushButton;
    QPushButton *pushButton_2;
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminCatalogue)
    {
        if (adminCatalogue->objectName().isEmpty())
            adminCatalogue->setObjectName(QString::fromUtf8("adminCatalogue"));
        adminCatalogue->resize(1440, 953);
<<<<<<< HEAD
        adminCatalogue->setMinimumSize(QSize(0, 0));
        adminCatalogue->setMaximumSize(QSize(16777215, 16777215));
=======
        adminCatalogue->setMinimumSize(QSize(1440, 953));
        adminCatalogue->setMaximumSize(QSize(1440, 953));
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
        centralwidget = new QWidget(adminCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"font-family: Montserrat;\n"
"}"));
<<<<<<< HEAD
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1420, 834));
=======
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 10, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 10, 75, 23));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 50, 1421, 851));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1419, 849));
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        horizontalLayout->addLayout(gridLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
<<<<<<< HEAD

        verticalLayout->addWidget(scrollArea);

=======
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
        adminCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 21));
        adminCatalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(adminCatalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminCatalogue->setStatusBar(statusbar);

        retranslateUi(adminCatalogue);

        QMetaObject::connectSlotsByName(adminCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminCatalogue)
    {
        adminCatalogue->setWindowTitle(QApplication::translate("adminCatalogue", "MainWindow", nullptr));
<<<<<<< HEAD
        pushButton_2->setText(QApplication::translate("adminCatalogue", "delete record", nullptr));
        pushButton->setText(QApplication::translate("adminCatalogue", "print all records", nullptr));
=======
        pushButton->setText(QApplication::translate("adminCatalogue", "print record", nullptr));
        pushButton_2->setText(QApplication::translate("adminCatalogue", "delete record", nullptr));
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113
    } // retranslateUi

};

namespace Ui {
    class adminCatalogue: public Ui_adminCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCATALOGUE_H
