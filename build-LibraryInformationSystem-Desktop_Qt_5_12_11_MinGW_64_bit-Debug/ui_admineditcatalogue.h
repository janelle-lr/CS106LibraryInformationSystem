/********************************************************************************
** Form generated from reading UI file 'admineditcatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITCATALOGUE_H
#define UI_ADMINEDITCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
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

class Ui_adminEditCatalogue
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *bookTitle;
    QLabel *label_5;
    QLineEdit *bookGenre;
    QLabel *label_13;
    QLineEdit *bookCopies;
    QLabel *label_14;
    QComboBox *selectedImage;
    QLineEdit *bookDescription;
    QLabel *label_16;
    QLabel *label_20;
    QLineEdit *bookAuthor;
    QLabel *label_21;
    QLineEdit *bookPublisher;
    QLabel *label;
    QPushButton *confirmBookDetails;
    QWidget *tab_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
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
    QVBoxLayout *verticalLayout_6;
    QLabel *label_18;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLabel *label_19;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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

    void setupUi(QMainWindow *adminEditCatalogue)
    {
        if (adminEditCatalogue->objectName().isEmpty())
            adminEditCatalogue->setObjectName(QString::fromUtf8("adminEditCatalogue"));
        adminEditCatalogue->resize(1052, 634);
        adminEditCatalogue->setMinimumSize(QSize(1052, 634));
        adminEditCatalogue->setMaximumSize(QSize(1052, 634));
        adminEditCatalogue->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
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
        centralwidget = new QWidget(adminEditCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background: #FFE5D0;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 100, 1051, 501));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 1021, 251));
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

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        bookTitle = new QLineEdit(verticalLayoutWidget);
        bookTitle->setObjectName(QString::fromUtf8("bookTitle"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bookTitle);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        bookGenre = new QLineEdit(verticalLayoutWidget);
        bookGenre->setObjectName(QString::fromUtf8("bookGenre"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bookGenre);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        bookCopies = new QLineEdit(verticalLayoutWidget);
        bookCopies->setObjectName(QString::fromUtf8("bookCopies"));

        formLayout->setWidget(2, QFormLayout::FieldRole, bookCopies);

        label_14 = new QLabel(verticalLayoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMaximumSize(QSize(73, 16777215));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_14);

        selectedImage = new QComboBox(verticalLayoutWidget);
        selectedImage->addItem(QString());
        selectedImage->addItem(QString());
        selectedImage->addItem(QString());
        selectedImage->setObjectName(QString::fromUtf8("selectedImage"));

        formLayout->setWidget(3, QFormLayout::FieldRole, selectedImage);

        bookDescription = new QLineEdit(verticalLayoutWidget);
        bookDescription->setObjectName(QString::fromUtf8("bookDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookDescription->sizePolicy().hasHeightForWidth());
        bookDescription->setSizePolicy(sizePolicy2);
        bookDescription->setMinimumSize(QSize(0, 60));

        formLayout->setWidget(6, QFormLayout::FieldRole, bookDescription);

        label_16 = new QLabel(verticalLayoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setMinimumSize(QSize(0, 0));
        label_16->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_16);

        label_20 = new QLabel(verticalLayoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setMinimumSize(QSize(0, 0));
        label_20->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_20);

        bookAuthor = new QLineEdit(verticalLayoutWidget);
        bookAuthor->setObjectName(QString::fromUtf8("bookAuthor"));
        sizePolicy2.setHeightForWidth(bookAuthor->sizePolicy().hasHeightForWidth());
        bookAuthor->setSizePolicy(sizePolicy2);
        bookAuthor->setMinimumSize(QSize(0, 20));

        formLayout->setWidget(4, QFormLayout::FieldRole, bookAuthor);

        label_21 = new QLabel(verticalLayoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);
        label_21->setMinimumSize(QSize(0, 0));
        label_21->setMaximumSize(QSize(16777185, 16777215));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_21);

        bookPublisher = new QLineEdit(verticalLayoutWidget);
        bookPublisher->setObjectName(QString::fromUtf8("bookPublisher"));
        sizePolicy2.setHeightForWidth(bookPublisher->sizePolicy().hasHeightForWidth());
        bookPublisher->setSizePolicy(sizePolicy2);
        bookPublisher->setMinimumSize(QSize(0, 20));

        formLayout->setWidget(5, QFormLayout::FieldRole, bookPublisher);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 47, 13));
        confirmBookDetails = new QPushButton(tab);
        confirmBookDetails->setObjectName(QString::fromUtf8("confirmBookDetails"));
        confirmBookDetails->setGeometry(QRect(530, 380, 75, 23));
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
        scrollArea->setGeometry(QRect(0, 90, 1031, 351));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1012, 818));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 800));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 10, 951, 171));
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
        horizontalLayoutWidget_3->setGeometry(QRect(0, 190, 951, 171));
        book_2 = new QHBoxLayout(horizontalLayoutWidget_3);
        book_2->setObjectName(QString::fromUtf8("book_2"));
        book_2->setContentsMargins(0, 0, 0, 0);
        img_3 = new QLabel(horizontalLayoutWidget_3);
        img_3->setObjectName(QString::fromUtf8("img_3"));

        book_2->addWidget(img_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_18 = new QLabel(horizontalLayoutWidget_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	font-weight:bold;\n"
"	font-size: 14px;\n"
"\n"
"	\n"
"}"));

        verticalLayout_6->addWidget(label_18);

        label_10 = new QLabel(horizontalLayoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_6->addWidget(label_10);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_11 = new QLabel(horizontalLayoutWidget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        label_19 = new QLabel(horizontalLayoutWidget_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(85, 170, 0);\n"
"}"));

        horizontalLayout_4->addWidget(label_19);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_4);


        book_2->addLayout(verticalLayout_6);

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


        verticalLayout_5->addWidget(frame);

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
        adminEditCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminEditCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 18));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        adminEditCatalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(adminEditCatalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminEditCatalogue->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());

        retranslateUi(adminEditCatalogue);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(adminEditCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditCatalogue)
    {
        adminEditCatalogue->setWindowTitle(QApplication::translate("adminEditCatalogue", "MainWindow", nullptr));
        logoImage->setText(QString());
        label_6->setText(QApplication::translate("adminEditCatalogue", "Book Details", nullptr));
        label_4->setText(QApplication::translate("adminEditCatalogue", "Enter Book TItle", nullptr));
        label_5->setText(QApplication::translate("adminEditCatalogue", "Enter Genre", nullptr));
        label_13->setText(QApplication::translate("adminEditCatalogue", "Amount of Copies", nullptr));
        label_14->setText(QApplication::translate("adminEditCatalogue", "Select Image", nullptr));
        selectedImage->setItemText(0, QApplication::translate("adminEditCatalogue", "Image 1", nullptr));
        selectedImage->setItemText(1, QApplication::translate("adminEditCatalogue", "Image 2", nullptr));
        selectedImage->setItemText(2, QApplication::translate("adminEditCatalogue", "Image 3", nullptr));

        label_16->setText(QApplication::translate("adminEditCatalogue", "Enter book \n"
" desription", nullptr));
        label_20->setText(QApplication::translate("adminEditCatalogue", "Enter Author Name", nullptr));
        label_21->setText(QApplication::translate("adminEditCatalogue", "Enter Publisher Name", nullptr));
        label->setText(QApplication::translate("adminEditCatalogue", "TextLabel", nullptr));
        confirmBookDetails->setText(QApplication::translate("adminEditCatalogue", "Add Book", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("adminEditCatalogue", "Add Books", nullptr));
        label_2->setText(QApplication::translate("adminEditCatalogue", "Books You Have", nullptr));
        img_2->setText(QApplication::translate("adminEditCatalogue", "Book 1", nullptr));
        label_17->setText(QApplication::translate("adminEditCatalogue", "50 Shades of Swag", nullptr));
        label_7->setText(QApplication::translate("adminEditCatalogue", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_8->setText(QApplication::translate("adminEditCatalogue", "Status:", nullptr));
        label_9->setText(QApplication::translate("adminEditCatalogue", "12 Days", nullptr));
        pushButton_2->setText(QApplication::translate("adminEditCatalogue", "READ", nullptr));
        pushButton_3->setText(QApplication::translate("adminEditCatalogue", "RESERVE", nullptr));
        img_3->setText(QApplication::translate("adminEditCatalogue", "Book 1", nullptr));
        label_18->setText(QApplication::translate("adminEditCatalogue", "50 Shades of Swag", nullptr));
        label_10->setText(QApplication::translate("adminEditCatalogue", "The FitnessGram\342\204\242 Pacer Test is a multistage aerobic capacity test that progressively \n"
"gets more difficult as it continues. \n"
"The second time you fail to complete a lap before the sound, \n"
"your test is over. The test will begin on the word start. On your mark, get ready, start.\n"
"", nullptr));
        label_11->setText(QApplication::translate("adminEditCatalogue", "Status:", nullptr));
        label_19->setText(QApplication::translate("adminEditCatalogue", "12 Days", nullptr));
        pushButton_4->setText(QApplication::translate("adminEditCatalogue", "READ", nullptr));
        pushButton_5->setText(QApplication::translate("adminEditCatalogue", "RESERVE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("adminEditCatalogue", "Books on Hand", nullptr));
        label_3->setText(QApplication::translate("adminEditCatalogue", "Books in Reserve", nullptr));
        img_4->setText(QApplication::translate("adminEditCatalogue", "Book 3", nullptr));
        label_26->setText(QApplication::translate("adminEditCatalogue", "Sands in your Pants", nullptr));
        label_27->setText(QApplication::translate("adminEditCatalogue", "Lmao something about sands and shit. Might need some sun screen ", nullptr));
        label_28->setText(QApplication::translate("adminEditCatalogue", "Available: ", nullptr));
        label_29->setText(QApplication::translate("adminEditCatalogue", "69/69/2069", nullptr));
        img_5->setText(QApplication::translate("adminEditCatalogue", "Book 4", nullptr));
        label_30->setText(QApplication::translate("adminEditCatalogue", "This is literally Castlevania ripoff DON'T READ", nullptr));
        label_31->setText(QApplication::translate("adminEditCatalogue", "Shit, get a bucked and a mop THATS A WET ASS PUSSY", nullptr));
        label_32->setText(QApplication::translate("adminEditCatalogue", "Available: ", nullptr));
        label_33->setText(QApplication::translate("adminEditCatalogue", "69/69/2069", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("adminEditCatalogue", "Reserved Books", nullptr));
        label_24->setText(QApplication::translate("adminEditCatalogue", "Loan History", nullptr));
        img_6->setText(QApplication::translate("adminEditCatalogue", "Book 5", nullptr));
        label_34->setText(QApplication::translate("adminEditCatalogue", "Sex but with words", nullptr));
        label_35->setText(QApplication::translate("adminEditCatalogue", "Get a therapist.", nullptr));
        label_36->setText(QApplication::translate("adminEditCatalogue", "Borrowed at: ", nullptr));
        label_37->setText(QApplication::translate("adminEditCatalogue", "1/23/4567", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("adminEditCatalogue", "Loan History", nullptr));
        menuAccount->setTitle(QApplication::translate("adminEditCatalogue", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("adminEditCatalogue", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditCatalogue: public Ui_adminEditCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITCATALOGUE_H
