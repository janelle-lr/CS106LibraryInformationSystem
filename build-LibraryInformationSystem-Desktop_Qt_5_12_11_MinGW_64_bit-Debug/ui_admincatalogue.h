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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCatalogue
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QLabel *logoImage;
    QPushButton *catalogueButton;
    QPushButton *membersButton;
    QPushButton *logoutButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *catalogueButton_2;
    QPushButton *membersButton_2;
    QPushButton *savePushButton_3;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminCatalogue)
    {
        if (adminCatalogue->objectName().isEmpty())
            adminCatalogue->setObjectName(QString::fromUtf8("adminCatalogue"));
        adminCatalogue->resize(1080, 640);
        adminCatalogue->setMinimumSize(QSize(1080, 640));
        adminCatalogue->setMaximumSize(QSize(1080, 640));
        centralwidget = new QWidget(adminCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 110, 1081, 511));
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
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1081, 101));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton {\n"
"	color: #E78A6B;\n"
"	font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	 text-decoration: underline; \n"
"}"));
        logoImage = new QLabel(groupBox);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(20, 30, 351, 51));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        catalogueButton = new QPushButton(groupBox);
        catalogueButton->setObjectName(QString::fromUtf8("catalogueButton"));
        catalogueButton->setGeometry(QRect(550, 30, 71, 51));
        membersButton = new QPushButton(groupBox);
        membersButton->setObjectName(QString::fromUtf8("membersButton"));
        membersButton->setGeometry(QRect(770, 31, 61, 51));
        logoutButton = new QPushButton(groupBox);
        logoutButton->setObjectName(QString::fromUtf8("logoutButton"));
        logoutButton->setGeometry(QRect(999, 31, 51, 51));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 80, 50, 23));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(440, 80, 50, 23));
        catalogueButton_2 = new QPushButton(groupBox);
        catalogueButton_2->setObjectName(QString::fromUtf8("catalogueButton_2"));
        catalogueButton_2->setGeometry(QRect(660, 30, 71, 51));
        membersButton_2 = new QPushButton(groupBox);
        membersButton_2->setObjectName(QString::fromUtf8("membersButton_2"));
        membersButton_2->setGeometry(QRect(870, 30, 91, 51));
        savePushButton_3 = new QPushButton(centralwidget);
        savePushButton_3->setObjectName(QString::fromUtf8("savePushButton_3"));
        savePushButton_3->setGeometry(QRect(0, 105, 1081, 2));
        savePushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgba(0,0,0,0.1);\n"
"border-radius: 1px;\n"
"}"));
        adminCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1080, 21));
        adminCatalogue->setMenuBar(menubar);

        retranslateUi(adminCatalogue);

        QMetaObject::connectSlotsByName(adminCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminCatalogue)
    {
        adminCatalogue->setWindowTitle(QApplication::translate("adminCatalogue", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        logoImage->setText(QString());
        catalogueButton->setText(QApplication::translate("adminCatalogue", "Catalogue", nullptr));
        membersButton->setText(QApplication::translate("adminCatalogue", "Members", nullptr));
        logoutButton->setText(QApplication::translate("adminCatalogue", "Log Out", nullptr));
        pushButton_2->setText(QApplication::translate("adminCatalogue", "delete record", nullptr));
        pushButton->setText(QApplication::translate("adminCatalogue", "print record", nullptr));
        catalogueButton_2->setText(QApplication::translate("adminCatalogue", "Add Book", nullptr));
        membersButton_2->setText(QApplication::translate("adminCatalogue", "Add Member", nullptr));
        savePushButton_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminCatalogue: public Ui_adminCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCATALOGUE_H
