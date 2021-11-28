/********************************************************************************
** Form generated from reading UI file 'bookdetails.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAILS_H
#define UI_BOOKDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookDetails
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_2;
    QFrame *frame_2;
    QLabel *bookImage;
    QPushButton *issueButton;
    QLabel *availabilityLabel;
    QLabel *publisherLabel_3;
    QLabel *descriptionLabel_2;
    QLabel *genreLabel_3;
    QPushButton *savePushButton_5;
    QLabel *titleLabel;
    QLabel *authorLabel;
    QLabel *stockLabel;
    QLabel *publisher;
    QLabel *genre;
    QLabel *description;

    void setupUi(QMainWindow *BookDetails)
    {
        if (BookDetails->objectName().isEmpty())
            BookDetails->setObjectName(QString::fromUtf8("BookDetails"));
        BookDetails->resize(1280, 640);
        BookDetails->setMinimumSize(QSize(1280, 640));
        BookDetails->setMaximumSize(QSize(1280, 640));
        centralwidget = new QWidget(BookDetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"background: #fff;\n"
"font-family: Montserrat;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 60, 1271, 581));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, -282, 1254, 918));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_2 = new QFrame(scrollAreaWidgetContents_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 900));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        bookImage = new QLabel(frame_2);
        bookImage->setObjectName(QString::fromUtf8("bookImage"));
        bookImage->setGeometry(QRect(100, 100, 161, 211));
        bookImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        issueButton = new QPushButton(frame_2);
        issueButton->setObjectName(QString::fromUtf8("issueButton"));
        issueButton->setGeometry(QRect(300, 281, 171, 31));
        issueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        availabilityLabel = new QLabel(frame_2);
        availabilityLabel->setObjectName(QString::fromUtf8("availabilityLabel"));
        availabilityLabel->setGeometry(QRect(300, 230, 141, 21));
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
        publisherLabel_3 = new QLabel(frame_2);
        publisherLabel_3->setObjectName(QString::fromUtf8("publisherLabel_3"));
        publisherLabel_3->setGeometry(QRect(40, 370, 331, 21));
        publisherLabel_3->setFont(font);
        publisherLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        descriptionLabel_2 = new QLabel(frame_2);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(40, 560, 331, 21));
        descriptionLabel_2->setFont(font);
        descriptionLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        descriptionLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        genreLabel_3 = new QLabel(frame_2);
        genreLabel_3->setObjectName(QString::fromUtf8("genreLabel_3"));
        genreLabel_3->setGeometry(QRect(40, 460, 331, 21));
        genreLabel_3->setFont(font);
        genreLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        savePushButton_5 = new QPushButton(frame_2);
        savePushButton_5->setObjectName(QString::fromUtf8("savePushButton_5"));
        savePushButton_5->setGeometry(QRect(40, 340, 941, 2));
        savePushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #FF886C;\n"
"border-radius: 1px;\n"
"}"));
        titleLabel = new QLabel(frame_2);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(300, 100, 101, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Montserrat"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        titleLabel->setFont(font1);
        authorLabel = new QLabel(frame_2);
        authorLabel->setObjectName(QString::fromUtf8("authorLabel"));
        authorLabel->setGeometry(QRect(300, 150, 101, 21));
        authorLabel->setFont(font1);
        stockLabel = new QLabel(frame_2);
        stockLabel->setObjectName(QString::fromUtf8("stockLabel"));
        stockLabel->setGeometry(QRect(450, 230, 141, 21));
        stockLabel->setFont(font);
        stockLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        stockLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisher = new QLabel(frame_2);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setGeometry(QRect(40, 400, 941, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Montserrat"));
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        publisher->setFont(font2);
        publisher->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        publisher->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genre = new QLabel(frame_2);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setGeometry(QRect(40, 490, 941, 21));
        genre->setFont(font2);
        genre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        genre->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description = new QLabel(frame_2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(40, 590, 941, 21));
        description->setFont(font2);
        description->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        description->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_2->addWidget(frame_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_3);
        BookDetails->setCentralWidget(centralwidget);

        retranslateUi(BookDetails);

        QMetaObject::connectSlotsByName(BookDetails);
    } // setupUi

    void retranslateUi(QMainWindow *BookDetails)
    {
        BookDetails->setWindowTitle(QApplication::translate("BookDetails", "MainWindow", nullptr));
        bookImage->setText(QString());
        issueButton->setText(QApplication::translate("BookDetails", "Issue", nullptr));
        availabilityLabel->setText(QApplication::translate("BookDetails", "Copies available:", nullptr));
        publisherLabel_3->setText(QApplication::translate("BookDetails", "Publisher", nullptr));
        descriptionLabel_2->setText(QApplication::translate("BookDetails", "Description", nullptr));
        genreLabel_3->setText(QApplication::translate("BookDetails", "Genre(s)", nullptr));
        savePushButton_5->setText(QString());
        titleLabel->setText(QApplication::translate("BookDetails", "Title", nullptr));
        authorLabel->setText(QApplication::translate("BookDetails", "Author", nullptr));
        stockLabel->setText(QApplication::translate("BookDetails", "0", nullptr));
        publisher->setText(QApplication::translate("BookDetails", "Publisher", nullptr));
        genre->setText(QApplication::translate("BookDetails", "Genre", nullptr));
        description->setText(QApplication::translate("BookDetails", "Description", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookDetails: public Ui_BookDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
