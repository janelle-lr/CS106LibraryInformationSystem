/********************************************************************************
** Form generated from reading UI file 'adminmembercatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMEMBERCATALOGUE_H
#define UI_ADMINMEMBERCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminMemberCatalogue
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminMemberCatalogue)
    {
        if (adminMemberCatalogue->objectName().isEmpty())
            adminMemberCatalogue->setObjectName(QString::fromUtf8("adminMemberCatalogue"));
        adminMemberCatalogue->resize(1280, 640);
        adminMemberCatalogue->setMinimumSize(QSize(1280, 640));
        adminMemberCatalogue->setMaximumSize(QSize(1280, 640));
        centralwidget = new QWidget(adminMemberCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(190, 100, 1081, 511));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1081, 511));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: #FFE5D0;\n"
"	/*border: none;*/\n"
"}\n"
"\n"
"QGridLayout {\n"
"	/*border: none;*/\n"
"}\n"
"\n"
"QPushButton {\n"
"	margin-right: 10px; \n"
"	height: 31px; \n"
"	/*max-width: 100px; */\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));

        horizontalLayout->addLayout(gridLayout_3);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 40, 75, 23));
        adminMemberCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminMemberCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminMemberCatalogue->setMenuBar(menubar);

        retranslateUi(adminMemberCatalogue);

        QMetaObject::connectSlotsByName(adminMemberCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminMemberCatalogue)
    {
        adminMemberCatalogue->setWindowTitle(QApplication::translate("adminMemberCatalogue", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("adminMemberCatalogue", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminMemberCatalogue: public Ui_adminMemberCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMEMBERCATALOGUE_H
