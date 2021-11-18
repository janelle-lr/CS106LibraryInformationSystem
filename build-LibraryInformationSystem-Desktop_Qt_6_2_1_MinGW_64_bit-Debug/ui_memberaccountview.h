/********************************************************************************
** Form generated from reading UI file 'memberaccountview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERACCOUNTVIEW_H
#define UI_MEMBERACCOUNTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberAccountView
{
public:
    QAction *actionView_Catalogue;
    QAction *actionSign_Out;
    QWidget *centralwidget;
    QLabel *logoImage;
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_12;
    QFormLayout *formLayout_4;
    QLabel *label_13;
    QLineEdit *lineEdit_7;
    QLabel *label_14;
    QLineEdit *lineEdit_8;
    QLabel *label_25;
    QDateEdit *dateEdit;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_15;
    QFormLayout *formLayout_5;
    QLabel *label_16;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton;
    QWidget *tab_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *tab_3;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *img_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_26;
    QLabel *label_27;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_28;
    QLabel *label_29;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *img_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_30;
    QLabel *label_31;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_32;
    QLabel *label_33;
    QWidget *tab_4;
    QLabel *label_24;
    QWidget *horizontalLayoutWidget_7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *img_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_34;
    QLabel *label_35;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_36;
    QLabel *label_37;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *memberAccountView)
    {
        if (memberAccountView->objectName().isEmpty())
            memberAccountView->setObjectName(QString::fromUtf8("memberAccountView"));
        memberAccountView->resize(1440, 953);
        memberAccountView->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QMenuBar {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"                                      stop:0 lightgray, stop:1 darkgray);\n"
"    spacing: 3px; /* spacing between menu bar items */\n"
"}\n"
"\n"
"QMenuBar::item {\n"
"    padding: 1px 4px;\n"
"    background: transparent;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QMenuBar::item:selected { /* when selected using mouse or keyboard */\n"
"    background: #a8a8a8;\n"
"}\n"
"\n"
"QMenuBar::item:pressed {\n"
"    background: #888888;\n"
"}"));
        actionView_Catalogue = new QAction(memberAccountView);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        actionSign_Out = new QAction(memberAccountView);
        actionSign_Out->setObjectName(QString::fromUtf8("actionSign_Out"));
        centralwidget = new QWidget(memberAccountView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"\n"
"	font-family: Montserrat;\n"
"\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(29, 120, 1381, 771));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border-radius: 15px;\n"
"	background-color: rgb(255, 213, 178)\n"
"}"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 140, 1281, 531));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 601, 61));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 32px;\n"
"}"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 80, 1221, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout->addWidget(label_6);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setMinimumSize(QSize(0, 0));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEdit = new QLineEdit(verticalLayoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);


        verticalLayout->addLayout(formLayout);

        verticalLayoutWidget_2 = new QWidget(tab);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(30, 170, 1221, 106));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout_2->addWidget(label_12);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_13);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lineEdit_7);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_14);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lineEdit_8);

        label_25 = new QLabel(verticalLayoutWidget_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_25);

        dateEdit = new QDateEdit(verticalLayoutWidget_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy2);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, dateEdit);


        verticalLayout_2->addLayout(formLayout_4);

        verticalLayoutWidget_3 = new QWidget(tab);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(30, 280, 1221, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 14px;\n"
"\n"
"}"));

        verticalLayout_3->addWidget(label_15);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setHorizontalSpacing(30);
        label_16 = new QLabel(verticalLayoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(124);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy3);
        label_16->setMinimumSize(QSize(46, 0));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_16);

        lineEdit_9 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lineEdit_9);


        verticalLayout_3->addLayout(formLayout_5);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 390, 281, 61));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border-radius: 25px;\n"
"	background-color: rgb(255, 212, 181)\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 20, 271, 61));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 32px;\n"
"}"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 90, 1261, 401));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1259, 399));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 20, 311, 61));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 32px;\n"
"}"));
        horizontalLayoutWidget_5 = new QWidget(tab_3);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(20, 80, 881, 171));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        img_4 = new QLabel(horizontalLayoutWidget_5);
        img_4->setObjectName(QString::fromUtf8("img_4"));

        horizontalLayout_9->addWidget(img_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_26 = new QLabel(horizontalLayoutWidget_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_7->addWidget(label_26);

        label_27 = new QLabel(horizontalLayoutWidget_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_7->addWidget(label_27);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);


        horizontalLayout_9->addLayout(verticalLayout_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_28 = new QLabel(horizontalLayoutWidget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_10->addWidget(label_28);

        label_29 = new QLabel(horizontalLayoutWidget_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_10->addWidget(label_29);


        horizontalLayout_9->addLayout(horizontalLayout_10);

        horizontalLayoutWidget_6 = new QWidget(tab_3);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(20, 270, 881, 171));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        img_5 = new QLabel(horizontalLayoutWidget_6);
        img_5->setObjectName(QString::fromUtf8("img_5"));

        horizontalLayout_11->addWidget(img_5);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_30 = new QLabel(horizontalLayoutWidget_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_8->addWidget(label_30);

        label_31 = new QLabel(horizontalLayoutWidget_6);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_8->addWidget(label_31);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);


        horizontalLayout_11->addLayout(verticalLayout_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_32 = new QLabel(horizontalLayoutWidget_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_12->addWidget(label_32);

        label_33 = new QLabel(horizontalLayoutWidget_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_12->addWidget(label_33);


        horizontalLayout_11->addLayout(horizontalLayout_12);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(30, 20, 311, 61));
        label_24->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 32px;\n"
"}"));
        horizontalLayoutWidget_7 = new QWidget(tab_4);
        horizontalLayoutWidget_7->setObjectName(QString::fromUtf8("horizontalLayoutWidget_7"));
        horizontalLayoutWidget_7->setGeometry(QRect(20, 80, 881, 171));
        horizontalLayout_13 = new QHBoxLayout(horizontalLayoutWidget_7);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        img_6 = new QLabel(horizontalLayoutWidget_7);
        img_6->setObjectName(QString::fromUtf8("img_6"));

        horizontalLayout_13->addWidget(img_6);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_34 = new QLabel(horizontalLayoutWidget_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_9->addWidget(label_34);

        label_35 = new QLabel(horizontalLayoutWidget_7);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_9->addWidget(label_35);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_6);


        horizontalLayout_13->addLayout(verticalLayout_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_36 = new QLabel(horizontalLayoutWidget_7);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_14->addWidget(label_36);

        label_37 = new QLabel(horizontalLayoutWidget_7);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 0, 0);\n"
"}"));

        horizontalLayout_14->addWidget(label_37);


        horizontalLayout_13->addLayout(horizontalLayout_14);

        tabWidget->addTab(tab_4, QString());
        memberAccountView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(memberAccountView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1440, 18));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        memberAccountView->setMenuBar(menubar);
        statusbar = new QStatusBar(memberAccountView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        memberAccountView->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menuAccount->addAction(actionSign_Out);
        menuCatalogue->addAction(actionView_Catalogue);

        retranslateUi(memberAccountView);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(memberAccountView);
    } // setupUi

    void retranslateUi(QMainWindow *memberAccountView)
    {
        memberAccountView->setWindowTitle(QCoreApplication::translate("memberAccountView", "MainWindow", nullptr));
        actionView_Catalogue->setText(QCoreApplication::translate("memberAccountView", "View Catalogue", nullptr));
        actionSign_Out->setText(QCoreApplication::translate("memberAccountView", "Sign-Out", nullptr));
        logoImage->setText(QString());
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("memberAccountView", "Member Name / ID", nullptr));
        label_6->setText(QCoreApplication::translate("memberAccountView", "Log-in Details", nullptr));
        label_4->setText(QCoreApplication::translate("memberAccountView", "Username", nullptr));
        label_5->setText(QCoreApplication::translate("memberAccountView", "Password", nullptr));
        label_12->setText(QCoreApplication::translate("memberAccountView", "First name & Last Name", nullptr));
        label_13->setText(QCoreApplication::translate("memberAccountView", "First Name", nullptr));
        label_14->setText(QCoreApplication::translate("memberAccountView", "Last name", nullptr));
        label_25->setText(QCoreApplication::translate("memberAccountView", "Date of Birth", nullptr));
        label_15->setText(QCoreApplication::translate("memberAccountView", "Email", nullptr));
        label_16->setText(QCoreApplication::translate("memberAccountView", "email", nullptr));
        pushButton->setText(QCoreApplication::translate("memberAccountView", "DONE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("memberAccountView", "Account Details", nullptr));
        label_2->setText(QCoreApplication::translate("memberAccountView", "Books You Have", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("memberAccountView", "Books on Hand", nullptr));
        label_3->setText(QCoreApplication::translate("memberAccountView", "Books in Reserve", nullptr));
        img_4->setText(QCoreApplication::translate("memberAccountView", "Book 3", nullptr));
        label_26->setText(QCoreApplication::translate("memberAccountView", "Sands in your Pants", nullptr));
        label_27->setText(QCoreApplication::translate("memberAccountView", "Lmao something about sands and shit. Might need some sun screen ", nullptr));
        label_28->setText(QCoreApplication::translate("memberAccountView", "Available: ", nullptr));
        label_29->setText(QCoreApplication::translate("memberAccountView", "69/69/2069", nullptr));
        img_5->setText(QCoreApplication::translate("memberAccountView", "Book 4", nullptr));
        label_30->setText(QCoreApplication::translate("memberAccountView", "This is literally Castlevania ripoff DON'T READ", nullptr));
        label_31->setText(QCoreApplication::translate("memberAccountView", "Shit, get a bucked and a mop THATS A WET ASS PUSSY", nullptr));
        label_32->setText(QCoreApplication::translate("memberAccountView", "Available: ", nullptr));
        label_33->setText(QCoreApplication::translate("memberAccountView", "69/69/2069", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("memberAccountView", "Reserved Books", nullptr));
        label_24->setText(QCoreApplication::translate("memberAccountView", "Loan History", nullptr));
        img_6->setText(QCoreApplication::translate("memberAccountView", "Book 5", nullptr));
        label_34->setText(QCoreApplication::translate("memberAccountView", "Sex but with words", nullptr));
        label_35->setText(QCoreApplication::translate("memberAccountView", "Get a therapist.", nullptr));
        label_36->setText(QCoreApplication::translate("memberAccountView", "Borrowed at: ", nullptr));
        label_37->setText(QCoreApplication::translate("memberAccountView", "1/23/4567", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("memberAccountView", "Loan History", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("memberAccountView", "Account", nullptr));
        menuCatalogue->setTitle(QCoreApplication::translate("memberAccountView", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberAccountView: public Ui_memberAccountView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERACCOUNTVIEW_H
