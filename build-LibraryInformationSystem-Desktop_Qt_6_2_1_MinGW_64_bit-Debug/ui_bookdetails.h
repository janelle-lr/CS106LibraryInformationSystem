/********************************************************************************
** Form generated from reading UI file 'bookdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKDETAILS_H
#define UI_BOOKDETAILS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BookDetails
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QLabel *bookImage;
    QLabel *titleLabel;
    QLabel *authorLabel_2;
    QLabel *availabilityLabel_3;
    QPushButton *reservePushButton;
    QPushButton *pushButton;
    QFrame *line;
    QLabel *availabilityLabel_4;
    QLabel *authorLabel_3;
    QLabel *availabilityLabel_5;
    QLabel *authorLabel_4;
    QLabel *availabilityLabel_6;
    QLabel *authorLabel_5;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QMenu *menuCatalogue;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BookDetails)
    {
        if (BookDetails->objectName().isEmpty())
            BookDetails->setObjectName(QString::fromUtf8("BookDetails"));
        BookDetails->resize(1052, 634);
        BookDetails->setMinimumSize(QSize(1052, 634));
        BookDetails->setMaximumSize(QSize(1052, 634));
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
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        bookImage = new QLabel(centralwidget);
        bookImage->setObjectName(QString::fromUtf8("bookImage"));
        bookImage->setGeometry(QRect(110, 110, 161, 211));
        bookImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setGeometry(QRect(310, 110, 331, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Montserrat Medium")});
        font.setBold(false);
        font.setItalic(false);
        titleLabel->setFont(font);
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 24px \"Montserrat Medium\";\n"
"}"));
        titleLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        authorLabel_2 = new QLabel(centralwidget);
        authorLabel_2->setObjectName(QString::fromUtf8("authorLabel_2"));
        authorLabel_2->setGeometry(QRect(310, 160, 331, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Montserrat")});
        font1.setBold(false);
        font1.setItalic(false);
        authorLabel_2->setFont(font1);
        authorLabel_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        authorLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        availabilityLabel_3 = new QLabel(centralwidget);
        availabilityLabel_3->setObjectName(QString::fromUtf8("availabilityLabel_3"));
        availabilityLabel_3->setGeometry(QRect(310, 240, 331, 21));
        availabilityLabel_3->setFont(font);
        availabilityLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        reservePushButton = new QPushButton(centralwidget);
        reservePushButton->setObjectName(QString::fromUtf8("reservePushButton"));
        reservePushButton->setGeometry(QRect(310, 291, 171, 31));
        reservePushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(500, 290, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid;\n"
"border-color: #E78A6B;\n"
"color:  #E78A6B;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.2);\n"
"}"));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 350, 941, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        availabilityLabel_4 = new QLabel(centralwidget);
        availabilityLabel_4->setObjectName(QString::fromUtf8("availabilityLabel_4"));
        availabilityLabel_4->setGeometry(QRect(50, 380, 331, 21));
        availabilityLabel_4->setFont(font);
        availabilityLabel_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        authorLabel_3 = new QLabel(centralwidget);
        authorLabel_3->setObjectName(QString::fromUtf8("authorLabel_3"));
        authorLabel_3->setGeometry(QRect(50, 410, 941, 16));
        authorLabel_3->setFont(font1);
        authorLabel_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        authorLabel_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        availabilityLabel_5 = new QLabel(centralwidget);
        availabilityLabel_5->setObjectName(QString::fromUtf8("availabilityLabel_5"));
        availabilityLabel_5->setGeometry(QRect(50, 450, 331, 21));
        availabilityLabel_5->setFont(font);
        availabilityLabel_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        authorLabel_4 = new QLabel(centralwidget);
        authorLabel_4->setObjectName(QString::fromUtf8("authorLabel_4"));
        authorLabel_4->setGeometry(QRect(50, 480, 941, 16));
        authorLabel_4->setFont(font1);
        authorLabel_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        authorLabel_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        availabilityLabel_6 = new QLabel(centralwidget);
        availabilityLabel_6->setObjectName(QString::fromUtf8("availabilityLabel_6"));
        availabilityLabel_6->setGeometry(QRect(50, 520, 331, 21));
        availabilityLabel_6->setFont(font);
        availabilityLabel_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 16px \"Montserrat Medium\";\n"
"}"));
        availabilityLabel_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        authorLabel_5 = new QLabel(centralwidget);
        authorLabel_5->setObjectName(QString::fromUtf8("authorLabel_5"));
        authorLabel_5->setGeometry(QRect(50, 550, 941, 16));
        authorLabel_5->setFont(font1);
        authorLabel_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font: 13px \"Montserrat\";\n"
"}"));
        authorLabel_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        BookDetails->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BookDetails);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 21));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        menuCatalogue = new QMenu(menubar);
        menuCatalogue->setObjectName(QString::fromUtf8("menuCatalogue"));
        BookDetails->setMenuBar(menubar);
        statusbar = new QStatusBar(BookDetails);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BookDetails->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menubar->addAction(menuCatalogue->menuAction());

        retranslateUi(BookDetails);

        QMetaObject::connectSlotsByName(BookDetails);
    } // setupUi

    void retranslateUi(QMainWindow *BookDetails)
    {
        BookDetails->setWindowTitle(QCoreApplication::translate("BookDetails", "MainWindow", nullptr));
        logoImage->setText(QString());
        bookImage->setText(QString());
        titleLabel->setText(QCoreApplication::translate("BookDetails", "Book Title", nullptr));
        authorLabel_2->setText(QCoreApplication::translate("BookDetails", "Book Author", nullptr));
        availabilityLabel_3->setText(QCoreApplication::translate("BookDetails", "Availability", nullptr));
        reservePushButton->setText(QCoreApplication::translate("BookDetails", "Reserve", nullptr));
        pushButton->setText(QCoreApplication::translate("BookDetails", "Other Button for admin", nullptr));
        availabilityLabel_4->setText(QCoreApplication::translate("BookDetails", "Summary", nullptr));
        authorLabel_3->setText(QCoreApplication::translate("BookDetails", "Lorem Ipsum", nullptr));
        availabilityLabel_5->setText(QCoreApplication::translate("BookDetails", "Publisher", nullptr));
        authorLabel_4->setText(QCoreApplication::translate("BookDetails", "Lorem Ipsum", nullptr));
        availabilityLabel_6->setText(QCoreApplication::translate("BookDetails", "Genre(s)", nullptr));
        authorLabel_5->setText(QCoreApplication::translate("BookDetails", "Lorem Ipsum", nullptr));
        menuAccount->setTitle(QCoreApplication::translate("BookDetails", "Account", nullptr));
        menuCatalogue->setTitle(QCoreApplication::translate("BookDetails", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BookDetails: public Ui_BookDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
