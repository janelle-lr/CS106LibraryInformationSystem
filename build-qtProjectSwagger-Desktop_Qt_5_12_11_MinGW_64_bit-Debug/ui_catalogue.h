/********************************************************************************
** Form generated from reading UI file 'catalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATALOGUE_H
#define UI_CATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Catalogue
{
public:
    QAction *actionView_Account;
    QAction *actionView_Catalogue;
    QAction *actionSign_Out;
    QWidget *centralwidget;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *img_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_17;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *img_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *img_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *img_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_20;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_21;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_14;
    QLabel *img_6;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_23;
    QLabel *label_24;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_25;
    QLabel *label_26;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *img;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menuAccounr;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Catalogue)
    {
        if (Catalogue->objectName().isEmpty())
            Catalogue->setObjectName(QString::fromUtf8("Catalogue"));
        Catalogue->resize(1327, 751);
        actionView_Account = new QAction(Catalogue);
        actionView_Account->setObjectName(QString::fromUtf8("actionView_Account"));
        actionView_Account->setCheckable(false);
        actionView_Catalogue = new QAction(Catalogue);
        actionView_Catalogue->setObjectName(QString::fromUtf8("actionView_Catalogue"));
        actionSign_Out = new QAction(Catalogue);
        actionSign_Out->setObjectName(QString::fromUtf8("actionSign_Out"));
        centralwidget = new QWidget(Catalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1000, 0, 311, 81));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 110, 1301, 601));
        scrollArea->setStyleSheet(QString::fromUtf8("/* vertical scrollbar*/\n"
"QScrollBar:vertical{\n"
"	border: none;\n"
"	background-color: rgb(34, 159, 255);\n"
"	margin: 15px 0 15px 0;\n"
"	width: 14px;\n"
"}\n"
"\n"
"/* hande bar verticall */\n"
"QScrollBar::handle:vertical{\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 85, 0);\n"
"	min-height: 30px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"	background-color:  rgb(0, 0, 255);\n"
"}\n"
"\n"
"/* top button scrollbar */\n"
"QScrollBar::sub-line:vertical{\n"
"	border: none;\n"
"	background-color: rgb(170, 0, 127);\n"
"	height: 15px;\n"
"	border-top-left-radius: 7px;\n"
"	border-top-right-radius: 7px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"	background-color: rgb(255, 85, 127);\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed{\n"
"	background-color: rgb(255, 0, 127);\n"
"}\n"
"\n"
"/* bottom button scrollbar */\n"
"QScrollBar::add-line:vertical{\n"
"	border: none;\n"
"	background-color: rgb(170, 0, 127);\n"
"	height: 15"
                        "px;\n"
"	border-bottom-left-radius: 7px;\n"
"	border-bottom-right-radius: 7px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::add-line:vertical:hover{\n"
"	background-color: rgb(255, 85, 127);\n"
"}\n"
"QScrollBar::add-line:vertical:pressed{\n"
"	background-color: rgb(255, 0, 127);\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1285, 1018));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 1000));
        frame->setStyleSheet(QString::fromUtf8("Qframe{\n"
"	\n"
"	background-color: rgb(0, 85, 127);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 20, 1251, 171));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        img_2 = new QLabel(horizontalLayoutWidget_2);
        img_2->setObjectName(QString::fromUtf8("img_2"));

        horizontalLayout_2->addWidget(img_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_17 = new QLabel(horizontalLayoutWidget_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_4->addWidget(label_17);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_4->addWidget(label_7);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_3->addWidget(label_8);

        label_9 = new QLabel(horizontalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_3->addWidget(label_9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

        pushButton_2 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(horizontalLayoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_7->addWidget(pushButton_3);


        horizontalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 200, 1251, 171));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        img_3 = new QLabel(horizontalLayoutWidget_3);
        img_3->setObjectName(QString::fromUtf8("img_3"));

        horizontalLayout_4->addWidget(img_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_18 = new QLabel(horizontalLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_5->addWidget(label_18);

        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_5->addWidget(label_10);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_5->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_5);


        horizontalLayout_4->addLayout(verticalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);

        pushButton_4 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(horizontalLayoutWidget_3);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_8->addWidget(pushButton_5);


        horizontalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(10, 380, 1251, 171));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        img_4 = new QLabel(horizontalLayoutWidget_4);
        img_4->setObjectName(QString::fromUtf8("img_4"));

        horizontalLayout_6->addWidget(img_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_19 = new QLabel(horizontalLayoutWidget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_6->addWidget(label_19);

        label_13 = new QLabel(horizontalLayoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_6->addWidget(label_13);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_14 = new QLabel(horizontalLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_9->addWidget(label_14);

        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_9->addWidget(label_15);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_9);


        horizontalLayout_6->addLayout(verticalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_7);


        horizontalLayout_6->addLayout(horizontalLayout_10);

        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(10, 560, 1251, 171));
        horizontalLayout_11 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        img_5 = new QLabel(horizontalLayoutWidget_5);
        img_5->setObjectName(QString::fromUtf8("img_5"));

        horizontalLayout_11->addWidget(img_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_20 = new QLabel(horizontalLayoutWidget_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_7->addWidget(label_20);

        label_16 = new QLabel(horizontalLayoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_7->addWidget(label_16);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_21 = new QLabel(horizontalLayoutWidget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_12->addWidget(label_21);

        label_22 = new QLabel(horizontalLayoutWidget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 85, 0);\n"
"}"));

        horizontalLayout_12->addWidget(label_22);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_12);


        horizontalLayout_11->addLayout(verticalLayout_7);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_13->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_13->addWidget(pushButton_9);


        horizontalLayout_11->addLayout(horizontalLayout_13);

        horizontalLayoutWidget_6 = new QWidget(frame);
        horizontalLayoutWidget_6->setObjectName(QString::fromUtf8("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(10, 740, 1251, 171));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        img_6 = new QLabel(horizontalLayoutWidget_6);
        img_6->setObjectName(QString::fromUtf8("img_6"));

        horizontalLayout_14->addWidget(img_6);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_23 = new QLabel(horizontalLayoutWidget_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_8->addWidget(label_23);

        label_24 = new QLabel(horizontalLayoutWidget_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_8->addWidget(label_24);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_5);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_25 = new QLabel(horizontalLayoutWidget_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_15->addWidget(label_25);

        label_26 = new QLabel(horizontalLayoutWidget_6);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 85, 0);\n"
"}"));

        horizontalLayout_15->addWidget(label_26);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_9);


        verticalLayout_8->addLayout(horizontalLayout_15);


        horizontalLayout_14->addLayout(verticalLayout_8);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);

        pushButton_10 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_16->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(horizontalLayoutWidget_6);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_16->addWidget(pushButton_11);


        horizontalLayout_14->addLayout(horizontalLayout_16);


        horizontalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);
        img = new QLabel(centralwidget);
        img->setObjectName(QString::fromUtf8("img"));
        img->setGeometry(QRect(10, 10, 651, 101));
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1181, 80, 131, 22));
        Catalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Catalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1327, 21));
        menuAccounr = new QMenu(menubar);
        menuAccounr->setObjectName(QString::fromUtf8("menuAccounr"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        Catalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(Catalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Catalogue->setStatusBar(statusbar);

        menubar->addAction(menuAccounr->menuAction());
        menubar->addAction(menuCatalogue->menuAction());
        menuAccounr->addAction(actionView_Account);
        menuAccounr->addAction(actionSign_Out);
        menuCatalogue->addAction(actionView_Catalogue);

        retranslateUi(Catalogue);

        QMetaObject::connectSlotsByName(Catalogue);
    } // setupUi

    void retranslateUi(QMainWindow *Catalogue)
    {
        Catalogue->setWindowTitle(QApplication::translate("Catalogue", "MainWindow", nullptr));
        actionView_Account->setText(QApplication::translate("Catalogue", "View Account", nullptr));
        actionView_Catalogue->setText(QApplication::translate("Catalogue", "View Catalogue", nullptr));
        actionSign_Out->setText(QApplication::translate("Catalogue", "Sign-Out", nullptr));
        label->setText(QApplication::translate("Catalogue", "SECOND PAGE after logging in \n"
" AYO I GOT A FUCKN SCROLL BAR LETS GO \n"
" idk what to add here? maybe like user details or something tbh", nullptr));
        img_2->setText(QApplication::translate("Catalogue", "Book 1", nullptr));
        label_17->setText(QApplication::translate("Catalogue", "50 Shades of Swag", nullptr));
        label_7->setText(QApplication::translate("Catalogue", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_8->setText(QApplication::translate("Catalogue", "Status:", nullptr));
        label_9->setText(QApplication::translate("Catalogue", "12 days", nullptr));
        pushButton_2->setText(QApplication::translate("Catalogue", "READ", nullptr));
        pushButton_3->setText(QApplication::translate("Catalogue", "RETURN", nullptr));
        img_3->setText(QApplication::translate("Catalogue", "Book 1", nullptr));
        label_18->setText(QApplication::translate("Catalogue", "50 Shades of Swag but its here again cuz I ran out of ideas", nullptr));
        label_10->setText(QApplication::translate("Catalogue", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_11->setText(QApplication::translate("Catalogue", "Status:", nullptr));
        label_12->setText(QApplication::translate("Catalogue", "12 days", nullptr));
        pushButton_4->setText(QApplication::translate("Catalogue", "READ", nullptr));
        pushButton_5->setText(QApplication::translate("Catalogue", "RETURN", nullptr));
        img_4->setText(QApplication::translate("Catalogue", "Book 1", nullptr));
        label_19->setText(QApplication::translate("Catalogue", "Fortress of Blood ( XXX Expllict ver. )", nullptr));
        label_13->setText(QApplication::translate("Catalogue", "I am legit losing my mind bro please someone just send a hitman \n"
"This book isnt even good. I haven't read it yet but I can tell its going to be shit\n"
"", nullptr));
        label_14->setText(QApplication::translate("Catalogue", "Status:", nullptr));
        label_15->setText(QApplication::translate("Catalogue", "12 days", nullptr));
        pushButton_6->setText(QApplication::translate("Catalogue", "READ", nullptr));
        pushButton_7->setText(QApplication::translate("Catalogue", "RETURN", nullptr));
        img_5->setText(QApplication::translate("Catalogue", "Book 2", nullptr));
        label_20->setText(QApplication::translate("Catalogue", "Dunes and shit", nullptr));
        label_16->setText(QApplication::translate("Catalogue", "Idk I heard the movies shit so don't bother", nullptr));
        label_21->setText(QApplication::translate("Catalogue", "Status:", nullptr));
        label_22->setText(QApplication::translate("Catalogue", "6 days", nullptr));
        pushButton_8->setText(QApplication::translate("Catalogue", "READ", nullptr));
        pushButton_9->setText(QApplication::translate("Catalogue", "RETURN", nullptr));
        img_6->setText(QApplication::translate("Catalogue", "Book 2", nullptr));
        label_23->setText(QApplication::translate("Catalogue", "Meow", nullptr));
        label_24->setText(QApplication::translate("Catalogue", "meowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeowmeow \n"
" meowmeowmeowmeowmeowmeowmeowmeowmeowmeow", nullptr));
        label_25->setText(QApplication::translate("Catalogue", "Status:", nullptr));
        label_26->setText(QApplication::translate("Catalogue", "6 days", nullptr));
        pushButton_10->setText(QApplication::translate("Catalogue", "READ", nullptr));
        pushButton_11->setText(QApplication::translate("Catalogue", "RETURN", nullptr));
        img->setText(QApplication::translate("Catalogue", "Logo", nullptr));
        comboBox->setItemText(0, QApplication::translate("Catalogue", "Sort By", nullptr));
        comboBox->setItemText(1, QApplication::translate("Catalogue", "Title", nullptr));
        comboBox->setItemText(2, QApplication::translate("Catalogue", "Author", nullptr));
        comboBox->setItemText(3, QApplication::translate("Catalogue", "Genre", nullptr));
        comboBox->setItemText(4, QApplication::translate("Catalogue", "Release date", nullptr));

        menuAccounr->setTitle(QApplication::translate("Catalogue", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("Catalogue", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Catalogue: public Ui_Catalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATALOGUE_H
