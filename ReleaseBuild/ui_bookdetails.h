/********************************************************************************
** Form generated from reading UI file 'bookdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAILS_H
#define UI_BOOKDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookDetails
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
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
    QTextEdit *description;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *backIcon;
    QPushButton *backBtn;
    QSpacerItem *verticalSpacer_3;
    QLabel *logoImage;

    void setupUi(QMainWindow *BookDetails)
    {
        if (BookDetails->objectName().isEmpty())
            BookDetails->setObjectName(QString::fromUtf8("BookDetails"));
        BookDetails->resize(1280, 640);
        BookDetails->setMinimumSize(QSize(1280, 640));
        BookDetails->setMaximumSize(QSize(1280, 640));
        centralwidget = new QWidget(BookDetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QWidget{\n"
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
        scrollArea->setGeometry(QRect(230, 60, 1041, 581));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1041, 581));
        frame_2 = new QFrame(scrollAreaWidgetContents_3);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(20, -20, 991, 581));
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame {\n"
"	border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        bookImage = new QLabel(frame_2);
        bookImage->setObjectName(QString::fromUtf8("bookImage"));
        bookImage->setGeometry(QRect(90, 50, 161, 211));
        bookImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        issueButton = new QPushButton(frame_2);
        issueButton->setObjectName(QString::fromUtf8("issueButton"));
        issueButton->setGeometry(QRect(290, 231, 171, 31));
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
        availabilityLabel->setGeometry(QRect(290, 180, 141, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat Medium")});
        font.setBold(false);
        font.setItalic(false);
        availabilityLabel->setFont(font);
        availabilityLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisherLabel_3 = new QLabel(frame_2);
        publisherLabel_3->setObjectName(QString::fromUtf8("publisherLabel_3"));
        publisherLabel_3->setGeometry(QRect(30, 320, 331, 21));
        publisherLabel_3->setFont(font);
        publisherLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        publisherLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        descriptionLabel_2 = new QLabel(frame_2);
        descriptionLabel_2->setObjectName(QString::fromUtf8("descriptionLabel_2"));
        descriptionLabel_2->setGeometry(QRect(30, 450, 331, 21));
        descriptionLabel_2->setFont(font);
        descriptionLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        descriptionLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        genreLabel_3 = new QLabel(frame_2);
        genreLabel_3->setObjectName(QString::fromUtf8("genreLabel_3"));
        genreLabel_3->setGeometry(QRect(30, 380, 331, 21));
        genreLabel_3->setFont(font);
        genreLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        genreLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        savePushButton_5 = new QPushButton(frame_2);
        savePushButton_5->setObjectName(QString::fromUtf8("savePushButton_5"));
        savePushButton_5->setGeometry(QRect(30, 290, 941, 2));
        savePushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #FF886C;\n"
"border-radius: 1px;\n"
"}"));
        titleLabel = new QLabel(frame_2);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(290, 50, 691, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setPointSize(16);
        font1.setBold(true);
        titleLabel->setFont(font1);
        authorLabel = new QLabel(frame_2);
        authorLabel->setObjectName(QString::fromUtf8("authorLabel"));
        authorLabel->setGeometry(QRect(290, 100, 691, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Montserrat")});
        font2.setPointSize(12);
        font2.setBold(true);
        authorLabel->setFont(font2);
        stockLabel = new QLabel(frame_2);
        stockLabel->setObjectName(QString::fromUtf8("stockLabel"));
        stockLabel->setGeometry(QRect(440, 180, 141, 21));
        stockLabel->setFont(font);
        stockLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        stockLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        publisher = new QLabel(frame_2);
        publisher->setObjectName(QString::fromUtf8("publisher"));
        publisher->setGeometry(QRect(30, 350, 941, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Montserrat")});
        font3.setBold(false);
        font3.setItalic(false);
        publisher->setFont(font3);
        publisher->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        publisher->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        genre = new QLabel(frame_2);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setGeometry(QRect(30, 410, 941, 21));
        genre->setFont(font3);
        genre->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        genre->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        description = new QTextEdit(frame_2);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(30, 480, 951, 71));
        scrollArea->setWidget(scrollAreaWidgetContents_3);
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 120, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 130, 191, 471));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        backIcon = new QLabel(layoutWidget);
        backIcon->setObjectName(QString::fromUtf8("backIcon"));
        backIcon->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        backIcon->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(backIcon);

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

        verticalLayout_5->addWidget(backBtn);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(10, 30, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        BookDetails->setCentralWidget(centralwidget);

        retranslateUi(BookDetails);

        QMetaObject::connectSlotsByName(BookDetails);
    } // setupUi

    void retranslateUi(QMainWindow *BookDetails)
    {
        BookDetails->setWindowTitle(QCoreApplication::translate("BookDetails", "MainWindow", nullptr));
        bookImage->setText(QString());
        issueButton->setText(QCoreApplication::translate("BookDetails", "Issue", nullptr));
        availabilityLabel->setText(QCoreApplication::translate("BookDetails", "Copies available:", nullptr));
        publisherLabel_3->setText(QCoreApplication::translate("BookDetails", "Publisher", nullptr));
        descriptionLabel_2->setText(QCoreApplication::translate("BookDetails", "Description", nullptr));
        genreLabel_3->setText(QCoreApplication::translate("BookDetails", "Genre(s)", nullptr));
        savePushButton_5->setText(QString());
        titleLabel->setText(QCoreApplication::translate("BookDetails", "Title", nullptr));
        authorLabel->setText(QCoreApplication::translate("BookDetails", "Author", nullptr));
        stockLabel->setText(QCoreApplication::translate("BookDetails", "0", nullptr));
        publisher->setText(QCoreApplication::translate("BookDetails", "Publisher", nullptr));
        genre->setText(QCoreApplication::translate("BookDetails", "Genre", nullptr));
        backIcon->setText(QCoreApplication::translate("BookDetails", "go back", nullptr));
        backBtn->setText(QCoreApplication::translate("BookDetails", "Go Back", nullptr));
        logoImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BookDetails: public Ui_BookDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
