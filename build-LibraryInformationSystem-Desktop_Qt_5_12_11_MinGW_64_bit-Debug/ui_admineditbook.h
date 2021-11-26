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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminEditBook
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QLabel *logoImage;
    QLabel *pageDesc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *backIcon;
    QPushButton *backBtn;
    QSpacerItem *verticalSpacer;
    QLabel *pageTitle;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QLabel *bookImage_2;
    QPushButton *cancelPushButton_2;
    QPushButton *savePushButton_2;
    QLabel *availabilityLabel_2;
    QLabel *publisherLabel_2;
    QLabel *descriptionLabel;
    QLabel *genreLabel_2;
    QLineEdit *titleLineEdit_2;
    QLineEdit *authorLineEdit_2;
    QLineEdit *publisherLineEdit_2;
    QLineEdit *genreLineEdit_2;
    QLineEdit *descriptionLineEdit;
    QPushButton *savePushButton_3;
    QLabel *publisherLabel_3;
    QLabel *publisherLabel_4;
    QFrame *line;
    QMenuBar *menubar;

    void setupUi(QMainWindow *adminEditBook)
    {
        if (adminEditBook->objectName().isEmpty())
            adminEditBook->setObjectName(QString::fromUtf8("adminEditBook"));
        adminEditBook->resize(1280, 661);
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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1280, 661));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1280, 661));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents_2);
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
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        backIcon = new QLabel(layoutWidget);
        backIcon->setObjectName(QString::fromUtf8("backIcon"));
        backIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        backIcon->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(backIcon);

        backBtn = new QPushButton(layoutWidget);
        backBtn->setObjectName(QString::fromUtf8("backBtn"));
        backBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout->addWidget(backBtn);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 50, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(250, 160, 1011, 471));
        scrollArea_2->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}"));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 994, 668));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(scrollAreaWidgetContents_3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 650));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border: none;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bookImage_2 = new QLabel(frame);
        bookImage_2->setObjectName(QString::fromUtf8("bookImage_2"));
        bookImage_2->setGeometry(QRect(80, 10, 161, 211));
        bookImage_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        cancelPushButton_2 = new QPushButton(frame);
        cancelPushButton_2->setObjectName(QString::fromUtf8("cancelPushButton_2"));
        cancelPushButton_2->setGeometry(QRect(470, 190, 171, 31));
        cancelPushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        savePushButton_2 = new QPushButton(frame);
        savePushButton_2->setObjectName(QString::fromUtf8("savePushButton_2"));
        savePushButton_2->setGeometry(QRect(280, 191, 171, 31));
        savePushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        availabilityLabel_2 = new QLabel(frame);
        availabilityLabel_2->setObjectName(QString::fromUtf8("availabilityLabel_2"));
        availabilityLabel_2->setGeometry(QRect(280, 140, 331, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat Medium"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        availabilityLabel_2->setFont(font);
        availabilityLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisherLabel_2 = new QLabel(frame);
        publisherLabel_2->setObjectName(QString::fromUtf8("publisherLabel_2"));
        publisherLabel_2->setGeometry(QRect(20, 280, 331, 21));
        publisherLabel_2->setFont(font);
        publisherLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        descriptionLabel = new QLabel(frame);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(20, 470, 331, 21));
        descriptionLabel->setFont(font);
        descriptionLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        genreLabel_2 = new QLabel(frame);
        genreLabel_2->setObjectName(QString::fromUtf8("genreLabel_2"));
        genreLabel_2->setGeometry(QRect(20, 370, 331, 21));
        genreLabel_2->setFont(font);
        genreLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleLineEdit_2 = new QLineEdit(frame);
        titleLineEdit_2->setObjectName(QString::fromUtf8("titleLineEdit_2"));
        titleLineEdit_2->setGeometry(QRect(280, 30, 681, 31));
        titleLineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        authorLineEdit_2 = new QLineEdit(frame);
        authorLineEdit_2->setObjectName(QString::fromUtf8("authorLineEdit_2"));
        authorLineEdit_2->setGeometry(QRect(280, 100, 681, 31));
        authorLineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        publisherLineEdit_2 = new QLineEdit(frame);
        publisherLineEdit_2->setObjectName(QString::fromUtf8("publisherLineEdit_2"));
        publisherLineEdit_2->setGeometry(QRect(20, 310, 941, 31));
        publisherLineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        publisherLineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genreLineEdit_2 = new QLineEdit(frame);
        genreLineEdit_2->setObjectName(QString::fromUtf8("genreLineEdit_2"));
        genreLineEdit_2->setGeometry(QRect(20, 400, 941, 31));
        genreLineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        genreLineEdit_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        descriptionLineEdit = new QLineEdit(frame);
        descriptionLineEdit->setObjectName(QString::fromUtf8("descriptionLineEdit"));
        descriptionLineEdit->setGeometry(QRect(20, 500, 941, 121));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        descriptionLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        savePushButton_3 = new QPushButton(frame);
        savePushButton_3->setObjectName(QString::fromUtf8("savePushButton_3"));
        savePushButton_3->setGeometry(QRect(20, 250, 941, 2));
        savePushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #FF886C;\n"
"border-radius: 1px;\n"
"}"));
        publisherLabel_3 = new QLabel(frame);
        publisherLabel_3->setObjectName(QString::fromUtf8("publisherLabel_3"));
        publisherLabel_3->setGeometry(QRect(280, 0, 331, 21));
        publisherLabel_3->setFont(font);
        publisherLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisherLabel_4 = new QLabel(frame);
        publisherLabel_4->setObjectName(QString::fromUtf8("publisherLabel_4"));
        publisherLabel_4->setGeometry(QRect(280, 70, 331, 21));
        publisherLabel_4->setFont(font);
        publisherLabel_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
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
        backIcon->setText(QApplication::translate("adminEditBook", "go back", nullptr));
        backBtn->setText(QApplication::translate("adminEditBook", "Go Back", nullptr));
        pageTitle->setText(QApplication::translate("adminEditBook", "Edit Book Details", nullptr));
        bookImage_2->setText(QString());
        cancelPushButton_2->setText(QApplication::translate("adminEditBook", "Cancel", nullptr));
        savePushButton_2->setText(QApplication::translate("adminEditBook", "Save", nullptr));
        availabilityLabel_2->setText(QApplication::translate("adminEditBook", "Availability", nullptr));
        publisherLabel_2->setText(QApplication::translate("adminEditBook", "Publisher", nullptr));
        descriptionLabel->setText(QApplication::translate("adminEditBook", "Description", nullptr));
        genreLabel_2->setText(QApplication::translate("adminEditBook", "Genre(s)", nullptr));
        titleLineEdit_2->setText(QApplication::translate("adminEditBook", "Book Title", nullptr));
        authorLineEdit_2->setText(QApplication::translate("adminEditBook", "Book Author", nullptr));
        publisherLineEdit_2->setText(QString());
        genreLineEdit_2->setText(QString());
        descriptionLineEdit->setText(QString());
        savePushButton_3->setText(QString());
        publisherLabel_3->setText(QApplication::translate("adminEditBook", "Book Title", nullptr));
        publisherLabel_4->setText(QApplication::translate("adminEditBook", "Author", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditBook: public Ui_adminEditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITBOOK_H
