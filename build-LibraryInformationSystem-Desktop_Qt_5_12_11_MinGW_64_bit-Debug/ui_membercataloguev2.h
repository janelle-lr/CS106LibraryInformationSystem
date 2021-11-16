/********************************************************************************
** Form generated from reading UI file 'membercataloguev2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERCATALOGUEV2_H
#define UI_MEMBERCATALOGUEV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_memberCatalogueV2
{
public:
    QLabel *logoImage;
    QGroupBox *groupBox;
    QComboBox *comboBox;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *book_1;
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
    QHBoxLayout *book_2;
    QLabel *img_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_18;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *book_3;
    QLabel *img_4;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_19;
    QLabel *label_13;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *book_4;
    QLabel *img_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_20;
    QLabel *label_16;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_21;
    QLabel *label_22;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *viewCatalogue;
    QPushButton *viewAccount;
    QPushButton *viewCatalogue_2;

    void setupUi(QDialog *memberCatalogueV2)
    {
        if (memberCatalogueV2->objectName().isEmpty())
            memberCatalogueV2->setObjectName(QString::fromUtf8("memberCatalogueV2"));
        memberCatalogueV2->resize(1250, 1014);
        memberCatalogueV2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}"));
        logoImage = new QLabel(memberCatalogueV2);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(404, 70, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        groupBox = new QGroupBox(memberCatalogueV2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 240, 1181, 761));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 18px \"Montserrat\";\n"
"\n"
"	background-color: rgb(255, 229, 208);\n"
"\n"
"}"));
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1040, 0, 131, 22));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 40, 1181, 711));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color: rgb(255, 229, 208);\n"
"}\n"
"\n"
"/* vertical scrollbar*/\n"
"QScrollBar:vertical{\n"
"	border: none;\n"
"	background-color: rgb(255, 229, 208);\n"
"	margin: 15px 0 15px 0;\n"
"	width: 14px;\n"
"}\n"
"\n"
"/* hande bar verticall */\n"
"QScrollBar::handle:vertical{\n"
"	border-radius: 5px;\n"
"	background-color: rgb(255, 213, 164);\n"
"	min-height: 30px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"	background-color: rgb(255, 210, 158);\n"
"}\n"
"\n"
"/* top button scrollbar */\n"
"QScrollBar::sub-line:vertical{\n"
"	border: none;\n"
"	background-color: rgb(255, 180, 126);\n"
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
"QScrollBar::add-line:verti"
                        "cal{\n"
"	border: none;\n"
"	background-color: rgb(255, 180, 126);\n"
"	height: 15px;\n"
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1165, 918));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 900));
        frame->setStyleSheet(QString::fromUtf8("QScrollArea{\n"
"	background-color: rgb(255, 229, 208);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 1141, 171));
        book_1 = new QHBoxLayout(horizontalLayoutWidget_2);
        book_1->setObjectName(QString::fromUtf8("book_1"));
        book_1->setContentsMargins(0, 0, 0, 0);
        img_2 = new QLabel(horizontalLayoutWidget_2);
        img_2->setObjectName(QString::fromUtf8("img_2"));

        book_1->addWidget(img_2);

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


        book_1->addLayout(verticalLayout_4);

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


        book_1->addLayout(horizontalLayout_7);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 180, 1141, 171));
        book_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        book_2->setObjectName(QString::fromUtf8("book_2"));
        book_2->setContentsMargins(0, 0, 0, 0);
        img_3 = new QLabel(horizontalLayoutWidget_3);
        img_3->setObjectName(QString::fromUtf8("img_3"));

        book_2->addWidget(img_3);

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

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        label_12 = new QLabel(horizontalLayoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_4->addWidget(label_12);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_5->addLayout(horizontalLayout_4);


        book_2->addLayout(verticalLayout_5);

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


        book_2->addLayout(horizontalLayout_8);

        horizontalLayoutWidget_4 = new QWidget(frame);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(0, 360, 1141, 171));
        book_3 = new QHBoxLayout(horizontalLayoutWidget_4);
        book_3->setObjectName(QString::fromUtf8("book_3"));
        book_3->setContentsMargins(0, 0, 0, 0);
        img_4 = new QLabel(horizontalLayoutWidget_4);
        img_4->setObjectName(QString::fromUtf8("img_4"));

        book_3->addWidget(img_4);

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

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_14 = new QLabel(horizontalLayoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_5->addWidget(label_14);

        label_15 = new QLabel(horizontalLayoutWidget_4);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_5->addWidget(label_15);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_6->addLayout(horizontalLayout_5);


        book_3->addLayout(verticalLayout_6);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        pushButton_6 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_9->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(horizontalLayoutWidget_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_9->addWidget(pushButton_7);


        book_3->addLayout(horizontalLayout_9);

        horizontalLayoutWidget_5 = new QWidget(frame);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(0, 540, 1141, 171));
        book_4 = new QHBoxLayout(horizontalLayoutWidget_5);
        book_4->setObjectName(QString::fromUtf8("book_4"));
        book_4->setContentsMargins(0, 0, 0, 0);
        img_5 = new QLabel(horizontalLayoutWidget_5);
        img_5->setObjectName(QString::fromUtf8("img_5"));

        book_4->addWidget(img_5);

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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_21 = new QLabel(horizontalLayoutWidget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_6->addWidget(label_21);

        label_22 = new QLabel(horizontalLayoutWidget_5);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_6->addWidget(label_22);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);


        verticalLayout_7->addLayout(horizontalLayout_6);


        book_4->addLayout(verticalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_8);

        pushButton_8 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color:rgb(85, 170, 0);\n"
"	font-weight: bold;\n"
"	color: rgb(0, 85, 0);\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(horizontalLayoutWidget_5);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(170, 0, 0);\n"
"	font-weight: bold;\n"
"}"));

        horizontalLayout_10->addWidget(pushButton_9);


        book_4->addLayout(horizontalLayout_10);


        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);
        viewCatalogue = new QPushButton(memberCatalogueV2);
        viewCatalogue->setObjectName(QString::fromUtf8("viewCatalogue"));
        viewCatalogue->setGeometry(QRect(450, 190, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(62);
        viewCatalogue->setFont(font);
        viewCatalogue->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));
        viewAccount = new QPushButton(memberCatalogueV2);
        viewAccount->setObjectName(QString::fromUtf8("viewAccount"));
        viewAccount->setGeometry(QRect(590, 190, 81, 41));
        viewAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));
        viewCatalogue_2 = new QPushButton(memberCatalogueV2);
        viewCatalogue_2->setObjectName(QString::fromUtf8("viewCatalogue_2"));
        viewCatalogue_2->setGeometry(QRect(710, 190, 81, 41));
        viewCatalogue_2->setFont(font);
        viewCatalogue_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));

        retranslateUi(memberCatalogueV2);

        QMetaObject::connectSlotsByName(memberCatalogueV2);
    } // setupUi

    void retranslateUi(QDialog *memberCatalogueV2)
    {
        memberCatalogueV2->setWindowTitle(QApplication::translate("memberCatalogueV2", "Dialog", nullptr));
        logoImage->setText(QString());
        groupBox->setTitle(QString());
        comboBox->setItemText(0, QApplication::translate("memberCatalogueV2", "Sort By", nullptr));
        comboBox->setItemText(1, QApplication::translate("memberCatalogueV2", "Title", nullptr));
        comboBox->setItemText(2, QApplication::translate("memberCatalogueV2", "Author", nullptr));
        comboBox->setItemText(3, QApplication::translate("memberCatalogueV2", "Genre", nullptr));
        comboBox->setItemText(4, QApplication::translate("memberCatalogueV2", "Release date", nullptr));

        img_2->setText(QApplication::translate("memberCatalogueV2", "Book 1", nullptr));
        label_17->setText(QApplication::translate("memberCatalogueV2", "50 Shades of Swag", nullptr));
        label_7->setText(QApplication::translate("memberCatalogueV2", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_8->setText(QApplication::translate("memberCatalogueV2", "Status:", nullptr));
        label_9->setText(QApplication::translate("memberCatalogueV2", "Available", nullptr));
        pushButton_2->setText(QApplication::translate("memberCatalogueV2", "READ", nullptr));
        pushButton_3->setText(QApplication::translate("memberCatalogueV2", "RESERVE", nullptr));
        img_3->setText(QApplication::translate("memberCatalogueV2", "Book 2", nullptr));
        label_18->setText(QApplication::translate("memberCatalogueV2", "50 Shades of Swag", nullptr));
        label_10->setText(QApplication::translate("memberCatalogueV2", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_11->setText(QApplication::translate("memberCatalogueV2", "Status:", nullptr));
        label_12->setText(QApplication::translate("memberCatalogueV2", "Available", nullptr));
        pushButton_4->setText(QApplication::translate("memberCatalogueV2", "READ", nullptr));
        pushButton_5->setText(QApplication::translate("memberCatalogueV2", "RESERVE", nullptr));
        img_4->setText(QApplication::translate("memberCatalogueV2", "Book 3", nullptr));
        label_19->setText(QApplication::translate("memberCatalogueV2", "50 Shades of Swag", nullptr));
        label_13->setText(QApplication::translate("memberCatalogueV2", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_14->setText(QApplication::translate("memberCatalogueV2", "Status:", nullptr));
        label_15->setText(QApplication::translate("memberCatalogueV2", "Available", nullptr));
        pushButton_6->setText(QApplication::translate("memberCatalogueV2", "READ", nullptr));
        pushButton_7->setText(QApplication::translate("memberCatalogueV2", "RESERVE", nullptr));
        img_5->setText(QApplication::translate("memberCatalogueV2", "Book 4", nullptr));
        label_20->setText(QApplication::translate("memberCatalogueV2", "50 Shades of Swag", nullptr));
        label_16->setText(QApplication::translate("memberCatalogueV2", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_21->setText(QApplication::translate("memberCatalogueV2", "Status:", nullptr));
        label_22->setText(QApplication::translate("memberCatalogueV2", "Available", nullptr));
        pushButton_8->setText(QApplication::translate("memberCatalogueV2", "READ", nullptr));
        pushButton_9->setText(QApplication::translate("memberCatalogueV2", "RESERVE", nullptr));
        viewCatalogue->setText(QApplication::translate("memberCatalogueV2", "CATALOGUE", nullptr));
        viewAccount->setText(QApplication::translate("memberCatalogueV2", "ACCOUNT", nullptr));
        viewCatalogue_2->setText(QApplication::translate("memberCatalogueV2", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberCatalogueV2: public Ui_memberCatalogueV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERCATALOGUEV2_H
