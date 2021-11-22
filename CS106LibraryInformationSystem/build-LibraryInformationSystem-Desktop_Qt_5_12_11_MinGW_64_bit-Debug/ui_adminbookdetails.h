/********************************************************************************
** Form generated from reading UI file 'adminbookdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINBOOKDETAILS_H
#define UI_ADMINBOOKDETAILS_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminBookDetails
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *bookImage;
    QPushButton *cancelPushButton;
    QPushButton *savePushButton;
    QLabel *availabilityLabel;
    QFrame *line;
    QLabel *summaryLabel;
    QLabel *genreLabel;
    QLabel *logoImage;
    QLabel *publisherLabel;
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QLineEdit *summaryLineEdit;
    QLineEdit *publisherLineEdit;
    QLineEdit *genreLineEdit;
    QMenuBar *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AdminBookDetails)
    {
        if (AdminBookDetails->objectName().isEmpty())
            AdminBookDetails->setObjectName(QString::fromUtf8("AdminBookDetails"));
        AdminBookDetails->resize(1052, 634);
        AdminBookDetails->setMinimumSize(QSize(1052, 634));
        AdminBookDetails->setMaximumSize(QSize(1052, 634));
        centralwidget = new QWidget(AdminBookDetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background: #FFE5D0;\n"
"font-family: Montserrat;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}\n"
"\n"
"/* vertical scrollbar*/\n"
"QScrollBar:vertical{\n"
"	border: none;\n"
"	background-color: #c9c9c9;\n"
"	margin: 15px 0 15px 0;\n"
"	width: 14px;\n"
"}\n"
"\n"
"/* hande bar verticall */\n"
"QScrollBar::handle:vertical{\n"
"	background-color: #bfbfbf;\n"
"	min-height: 30px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover{\n"
"	background-color: #b5b5b5;;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:pressed{\n"
"	background-color: #a1a1a1;;\n"
"}\n"
"\n"
"/* top button scrollbar */\n"
"QScrollBar::sub-line:vertical{\n"
"	border: none;\n"
"	background-color: #dedede;\n"
"	height: 15px;\n"
"	subcontrol-position: top;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"QScrollBar::sub-line:vertical:hover{\n"
"	background-color:#b5b5b5;\n"
"}\n"
"QScrollBar::sub-line:vertical:pressed{\n"
"	background-color: #a1a1a1;\n"
"}\n"
"\n"
"/* bottom button scrollbar */\n"
"QScrollBa"
                        "r::add-line:vertical{\n"
"	border: none;\n"
"	background-color: #dedede;\n"
"	height: 15px;\n"
"	subcontrol-position: bottom;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:hover{\n"
"	background-color:#bfbfbf;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:pressed{\n"
"	background-color: #a1a1a1;\n"
"}"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1051, 591));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1035, 918));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 900));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bookImage = new QLabel(frame);
        bookImage->setObjectName(QString::fromUtf8("bookImage"));
        bookImage->setGeometry(QRect(100, 100, 161, 211));
        bookImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        cancelPushButton = new QPushButton(frame);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(490, 280, 171, 31));
        cancelPushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        savePushButton = new QPushButton(frame);
        savePushButton->setObjectName(QString::fromUtf8("savePushButton"));
        savePushButton->setGeometry(QRect(300, 281, 171, 31));
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
        availabilityLabel = new QLabel(frame);
        availabilityLabel->setObjectName(QString::fromUtf8("availabilityLabel"));
        availabilityLabel->setGeometry(QRect(300, 230, 331, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat Medium"));
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        availabilityLabel->setFont(font);
        availabilityLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(40, 340, 941, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        summaryLabel = new QLabel(frame);
        summaryLabel->setObjectName(QString::fromUtf8("summaryLabel"));
        summaryLabel->setGeometry(QRect(40, 370, 331, 21));
        summaryLabel->setFont(font);
        summaryLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        summaryLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        genreLabel = new QLabel(frame);
        genreLabel->setObjectName(QString::fromUtf8("genreLabel"));
        genreLabel->setGeometry(QRect(40, 630, 331, 21));
        genreLabel->setFont(font);
        genreLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        logoImage = new QLabel(frame);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(20, 10, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        publisherLabel = new QLabel(frame);
        publisherLabel->setObjectName(QString::fromUtf8("publisherLabel"));
        publisherLabel->setGeometry(QRect(40, 500, 331, 21));
        publisherLabel->setFont(font);
        publisherLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleLineEdit = new QLineEdit(frame);
        titleLineEdit->setObjectName(QString::fromUtf8("titleLineEdit"));
        titleLineEdit->setGeometry(QRect(300, 100, 681, 31));
        titleLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        authorLineEdit = new QLineEdit(frame);
        authorLineEdit->setObjectName(QString::fromUtf8("authorLineEdit"));
        authorLineEdit->setGeometry(QRect(300, 150, 681, 31));
        authorLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 0px 5px;\n"
"font-size: 13px;\n"
"}"));
        summaryLineEdit = new QLineEdit(frame);
        summaryLineEdit->setObjectName(QString::fromUtf8("summaryLineEdit"));
        summaryLineEdit->setGeometry(QRect(40, 400, 941, 81));
        summaryLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        summaryLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        publisherLineEdit = new QLineEdit(frame);
        publisherLineEdit->setObjectName(QString::fromUtf8("publisherLineEdit"));
        publisherLineEdit->setGeometry(QRect(40, 530, 941, 81));
        publisherLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        publisherLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genreLineEdit = new QLineEdit(frame);
        genreLineEdit->setObjectName(QString::fromUtf8("genreLineEdit"));
        genreLineEdit->setGeometry(QRect(40, 660, 941, 81));
        genreLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        genreLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        AdminBookDetails->setCentralWidget(centralwidget);
        menuAccount = new QMenuBar(AdminBookDetails);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuAccount->setGeometry(QRect(0, 0, 1052, 21));
        AdminBookDetails->setMenuBar(menuAccount);
        statusbar = new QStatusBar(AdminBookDetails);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AdminBookDetails->setStatusBar(statusbar);

        retranslateUi(AdminBookDetails);

        QMetaObject::connectSlotsByName(AdminBookDetails);
    } // setupUi

    void retranslateUi(QMainWindow *AdminBookDetails)
    {
        AdminBookDetails->setWindowTitle(QApplication::translate("AdminBookDetails", "MainWindow", nullptr));
        bookImage->setText(QString());
        cancelPushButton->setText(QApplication::translate("AdminBookDetails", "Cancel", nullptr));
        savePushButton->setText(QApplication::translate("AdminBookDetails", "Save", nullptr));
        availabilityLabel->setText(QApplication::translate("AdminBookDetails", "Availability", nullptr));
        summaryLabel->setText(QApplication::translate("AdminBookDetails", "Summary", nullptr));
        genreLabel->setText(QApplication::translate("AdminBookDetails", "Genre(s)", nullptr));
        logoImage->setText(QString());
        publisherLabel->setText(QApplication::translate("AdminBookDetails", "Publisher", nullptr));
        titleLineEdit->setText(QApplication::translate("AdminBookDetails", "Book Title", nullptr));
        authorLineEdit->setText(QApplication::translate("AdminBookDetails", "Book Author", nullptr));
        summaryLineEdit->setText(QApplication::translate("AdminBookDetails", "Lorem Ipsum", nullptr));
        publisherLineEdit->setText(QApplication::translate("AdminBookDetails", "Lorem Ipsum", nullptr));
        genreLineEdit->setText(QApplication::translate("AdminBookDetails", "Lorem Ipsum", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminBookDetails: public Ui_AdminBookDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINBOOKDETAILS_H
