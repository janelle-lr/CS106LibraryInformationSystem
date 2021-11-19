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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminEditBook
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *bookImage_2;
    QPushButton *cancelPushButton_2;
    QPushButton *savePushButton_2;
    QLabel *availabilityLabel_2;
    QFrame *line_2;
    QLabel *publisherLabel_2;
    QLabel *descriptionLabel;
    QLabel *logoImage_2;
    QLabel *genreLabel_2;
    QLineEdit *titleLineEdit_2;
    QLineEdit *authorLineEdit_2;
    QLineEdit *publisherLineEdit_2;
    QLineEdit *genreLineEdit_2;
    QLineEdit *descriptionLineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminEditBook)
    {
        if (adminEditBook->objectName().isEmpty())
            adminEditBook->setObjectName(QString::fromUtf8("adminEditBook"));
        adminEditBook->resize(1135, 600);
        centralwidget = new QWidget(adminEditBook);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 20, 1101, 531));
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 2246, 918));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 900));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        bookImage_2 = new QLabel(frame);
        bookImage_2->setObjectName(QString::fromUtf8("bookImage_2"));
        bookImage_2->setGeometry(QRect(100, 100, 161, 211));
        bookImage_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        cancelPushButton_2 = new QPushButton(frame);
        cancelPushButton_2->setObjectName(QString::fromUtf8("cancelPushButton_2"));
        cancelPushButton_2->setGeometry(QRect(490, 280, 171, 31));
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
        savePushButton_2->setGeometry(QRect(300, 281, 171, 31));
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
        availabilityLabel_2->setGeometry(QRect(300, 230, 331, 21));
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
        line_2 = new QFrame(frame);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(40, 340, 941, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        publisherLabel_2 = new QLabel(frame);
        publisherLabel_2->setObjectName(QString::fromUtf8("publisherLabel_2"));
        publisherLabel_2->setGeometry(QRect(40, 370, 331, 21));
        publisherLabel_2->setFont(font);
        publisherLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        descriptionLabel = new QLabel(frame);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setGeometry(QRect(40, 560, 331, 21));
        descriptionLabel->setFont(font);
        descriptionLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        descriptionLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        logoImage_2 = new QLabel(frame);
        logoImage_2->setObjectName(QString::fromUtf8("logoImage_2"));
        logoImage_2->setGeometry(QRect(20, 10, 441, 61));
        logoImage_2->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        genreLabel_2 = new QLabel(frame);
        genreLabel_2->setObjectName(QString::fromUtf8("genreLabel_2"));
        genreLabel_2->setGeometry(QRect(40, 460, 331, 21));
        genreLabel_2->setFont(font);
        genreLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        titleLineEdit_2 = new QLineEdit(frame);
        titleLineEdit_2->setObjectName(QString::fromUtf8("titleLineEdit_2"));
        titleLineEdit_2->setGeometry(QRect(300, 100, 681, 31));
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
        authorLineEdit_2->setGeometry(QRect(300, 150, 681, 31));
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
        publisherLineEdit_2->setGeometry(QRect(40, 400, 941, 41));
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
        genreLineEdit_2->setGeometry(QRect(40, 490, 941, 41));
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
        descriptionLineEdit->setGeometry(QRect(40, 590, 941, 81));
        descriptionLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"border: 1px solid;\n"
"border-radius: 15px;\n"
"border-color: #e5e5e5;\n"
"background-color: palette(base);\n"
"padding: 5px;\n"
"font-size: 13px;\n"
"}"));
        descriptionLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        adminEditBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminEditBook);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1135, 21));
        adminEditBook->setMenuBar(menubar);
        statusbar = new QStatusBar(adminEditBook);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminEditBook->setStatusBar(statusbar);

        retranslateUi(adminEditBook);

        QMetaObject::connectSlotsByName(adminEditBook);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditBook)
    {
        adminEditBook->setWindowTitle(QApplication::translate("adminEditBook", "MainWindow", nullptr));
        bookImage_2->setText(QString());
        cancelPushButton_2->setText(QApplication::translate("adminEditBook", "Cancel", nullptr));
        savePushButton_2->setText(QApplication::translate("adminEditBook", "Save", nullptr));
        availabilityLabel_2->setText(QApplication::translate("adminEditBook", "Availability", nullptr));
        publisherLabel_2->setText(QApplication::translate("adminEditBook", "Publisher", nullptr));
        descriptionLabel->setText(QApplication::translate("adminEditBook", "Description", nullptr));
        logoImage_2->setText(QString());
        genreLabel_2->setText(QApplication::translate("adminEditBook", "Genre(s)", nullptr));
        titleLineEdit_2->setText(QApplication::translate("adminEditBook", "Book Title", nullptr));
        authorLineEdit_2->setText(QApplication::translate("adminEditBook", "Book Author", nullptr));
        publisherLineEdit_2->setText(QString());
        genreLineEdit_2->setText(QString());
        descriptionLineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminEditBook: public Ui_adminEditBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITBOOK_H
