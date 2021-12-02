/********************************************************************************
** Form generated from reading UI file 'admineditbook.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITBOOK_H
#define UI_ADMINEDITBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminEditBook
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QLabel *pageDesc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *backIcon_7;
    QPushButton *backBtn_7;
    QSpacerItem *verticalSpacer_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_14;
    QGridLayout *gridLayout_13;
    QFrame *frame_7;
    QLabel *bookImage_8;
    QPushButton *cancelPushButton_8;
    QPushButton *savePushButton;
    QLabel *availabilityLabel_8;
    QLabel *publisherLabel_20;
    QLabel *descriptionLabel_7;
    QLabel *genreLabel_8;
    QLineEdit *titleLineEdit_8;
    QLineEdit *authorLineEdit_8;
    QLineEdit *publisherLineEdit_8;
    QLineEdit *genreLineEdit_8;
    QPushButton *savePushButton_15;
    QLabel *publisherLabel_21;
    QLabel *publisherLabel_22;
    QTextEdit *textEdit;
    QLabel *pageTitle;
    QFrame *line;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminEditBook)
    {
        if (adminEditBook->objectName().isEmpty())
            adminEditBook->setObjectName(QString::fromUtf8("adminEditBook"));
        adminEditBook->resize(1280, 640);
        adminEditBook->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
" 	background: #FFE5D0;\n"
"}"));
        centralwidget = new QWidget(adminEditBook);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 110, 971, 51));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        backIcon_7 = new QLabel(layoutWidget);
        backIcon_7->setObjectName(QString::fromUtf8("backIcon_7"));
        backIcon_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        backIcon_7->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(backIcon_7);

        backBtn_7 = new QPushButton(layoutWidget);
        backBtn_7->setObjectName(QString::fromUtf8("backBtn_7"));
        backBtn_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_7->addWidget(backBtn_7);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_7);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(250, 160, 1011, 471));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_14 = new QWidget();
        scrollAreaWidgetContents_14->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_14"));
        scrollAreaWidgetContents_14->setGeometry(QRect(0, -197, 994, 668));
        gridLayout_13 = new QGridLayout(scrollAreaWidgetContents_14);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        frame_7 = new QFrame(scrollAreaWidgetContents_14);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(0, 650));
        frame_7->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border: none;\n"
"}"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        bookImage_8 = new QLabel(frame_7);
        bookImage_8->setObjectName(QString::fromUtf8("bookImage_8"));
        bookImage_8->setGeometry(QRect(50, 30, 161, 211));
        bookImage_8->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        cancelPushButton_8 = new QPushButton(frame_7);
        cancelPushButton_8->setObjectName(QString::fromUtf8("cancelPushButton_8"));
        cancelPushButton_8->setGeometry(QRect(470, 190, 171, 31));
        cancelPushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid;\n"
"border-color: #E78A6B;\n"
"color:  #E78A6B;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.2);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgba(231, 138, 107, 0.1);\n"
"}"));
        savePushButton = new QPushButton(frame_7);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(280, 191, 171, 31));
        savePushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background-color: rgb(196, 116, 90);\n"
"}"));
        availabilityLabel_8 = new QLabel(frame_7);
        availabilityLabel_8->setObjectName(QString::fromUtf8("availabilityLabel_8"));
        availabilityLabel_8->setGeometry(QRect(280, 140, 331, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat Medium"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        availabilityLabel_8->setFont(font);
        availabilityLabel_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisherLabel_20 = new QLabel(frame_7);
        publisherLabel_20->setObjectName(QString::fromUtf8("publisherLabel_20"));
        publisherLabel_20->setGeometry(QRect(20, 280, 331, 21));
        publisherLabel_20->setFont(font);
        publisherLabel_20->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        descriptionLabel_7 = new QLabel(frame_7);
        descriptionLabel_7->setObjectName(QString::fromUtf8("descriptionLabel_7"));
        descriptionLabel_7->setGeometry(QRect(20, 470, 331, 21));
        descriptionLabel_7->setFont(font);
        descriptionLabel_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        descriptionLabel_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        genreLabel_8 = new QLabel(frame_7);
        genreLabel_8->setObjectName(QString::fromUtf8("genreLabel_8"));
        genreLabel_8->setGeometry(QRect(20, 370, 331, 21));
        genreLabel_8->setFont(font);
        genreLabel_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleLineEdit_8 = new QLineEdit(frame_7);
        titleLineEdit_8->setObjectName(QString::fromUtf8("titleLineEdit_8"));
        titleLineEdit_8->setGeometry(QRect(280, 30, 681, 31));
        titleLineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        authorLineEdit_8 = new QLineEdit(frame_7);
        authorLineEdit_8->setObjectName(QString::fromUtf8("authorLineEdit_8"));
        authorLineEdit_8->setGeometry(QRect(280, 100, 681, 31));
        authorLineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        publisherLineEdit_8 = new QLineEdit(frame_7);
        publisherLineEdit_8->setObjectName(QString::fromUtf8("publisherLineEdit_8"));
        publisherLineEdit_8->setGeometry(QRect(20, 310, 941, 31));
        publisherLineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        publisherLineEdit_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genreLineEdit_8 = new QLineEdit(frame_7);
        genreLineEdit_8->setObjectName(QString::fromUtf8("genreLineEdit_8"));
        genreLineEdit_8->setGeometry(QRect(20, 400, 941, 31));
        genreLineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        genreLineEdit_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        savePushButton_15 = new QPushButton(frame_7);
        savePushButton_15->setObjectName(QString::fromUtf8("savePushButton_15"));
        savePushButton_15->setGeometry(QRect(20, 250, 941, 2));
        savePushButton_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #FF886C;\n"
"border-radius: 1px;\n"
"}"));
        publisherLabel_21 = new QLabel(frame_7);
        publisherLabel_21->setObjectName(QString::fromUtf8("publisherLabel_21"));
        publisherLabel_21->setGeometry(QRect(280, 0, 331, 21));
        publisherLabel_21->setFont(font);
        publisherLabel_21->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisherLabel_22 = new QLabel(frame_7);
        publisherLabel_22->setObjectName(QString::fromUtf8("publisherLabel_22"));
        publisherLabel_22->setGeometry(QRect(280, 70, 331, 21));
        publisherLabel_22->setFont(font);
        publisherLabel_22->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        textEdit = new QTextEdit(frame_7);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 500, 941, 121));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));

        gridLayout_13->addWidget(frame_7, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_14);
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 50, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        adminEditBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminEditBook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        adminEditBook->setMenuBar(menubar);

        retranslateUi(adminEditBook);

        QMetaObject::connectSlotsByName(adminEditBook);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditBook)
    {
        adminEditBook->setWindowTitle(QApplication::translate("adminEditBook", "MainWindow", nullptr));
        logoImage->setText(QString());
        pageDesc->setText(QApplication::translate("adminEditBook", "Here admin can view all books that exist in the catalogue. You can choose to view, edit, and delete books. You can also choose to add books if you want to. You literally have all the \n"
"  power in the world as an admin. DONT ABUSE IT OR YOU USE LOSE YOUR PIZZA EATING PRIVLLAGES", nullptr));
        backIcon_7->setText(QApplication::translate("adminEditBook", "go back", nullptr));
        backBtn_7->setText(QApplication::translate("adminEditBook", "Go Back", nullptr));
        bookImage_8->setText(QString());
        cancelPushButton_8->setText(QApplication::translate("adminEditBook", "Cancel", nullptr));
        savePushButton->setText(QApplication::translate("adminEditBook", "Save", nullptr));
        availabilityLabel_8->setText(QApplication::translate("adminEditBook", "Availability", nullptr));
        publisherLabel_20->setText(QApplication::translate("adminEditBook", "Publisher", nullptr));
        descriptionLabel_7->setText(QApplication::translate("adminEditBook", "Description", nullptr));
        genreLabel_8->setText(QApplication::translate("adminEditBook", "Genre(s)", nullptr));
        titleLineEdit_8->setText(QApplication::translate("adminEditBook", "Book Title", nullptr));
        authorLineEdit_8->setText(QApplication::translate("adminEditBook", "Book Author", nullptr));
        publisherLineEdit_8->setText(QString());
        genreLineEdit_8->setText(QString());
        savePushButton_15->setText(QString());
        publisherLabel_21->setText(QApplication::translate("adminEditBook", "Book Title", nullptr));
        publisherLabel_22->setText(QApplication::translate("adminEditBook", "Author", nullptr));
        pageTitle->setText(QApplication::translate("adminEditBook", "Edit Book Details", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditBook: public Ui_adminEditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITBOOK_H
