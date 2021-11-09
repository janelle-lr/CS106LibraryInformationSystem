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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bookdetails
{
public:
    QAction *actionLog_Out;
    QWidget *centralwidget;
    QLabel *label_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton_2;
    QFrame *line;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuAccount;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *bookdetails)
    {
        if (bookdetails->objectName().isEmpty())
            bookdetails->setObjectName(QString::fromUtf8("bookdetails"));
        bookdetails->resize(800, 600);
        bookdetails->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"/*background: #fff;*/\n"
"font-family: Century Gothic;\n"
"}\n"
"\n"
"QPushButton {\n"
"border-radius: 15px; \n"
"font-size: 13px;\n"
"}"));
        actionLog_Out = new QAction(bookdetails);
        actionLog_Out->setObjectName(QString::fromUtf8("actionLog_Out"));
        centralwidget = new QWidget(bookdetails);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 10, 231, 51));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 90, 761, 441));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 745, 518));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 500));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 120, 161, 21));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14px;\n"
"}"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 250, 701, 221));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"background: palette(base);\n"
"}\n"
"\n"
"QLabel {\n"
"font-size: 13px;\n"
"}"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(0, 20, 161, 31));
        label_9->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(0, 100, 161, 31));
        label_10->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(0, 180, 161, 31));
        label_11->setStyleSheet(QString::fromUtf8("/*QLabel {\n"
"font-size: 36px;\n"
"}*/"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 160, 171, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border: 1px solid;\n"
"border-color: #E78A6B;\n"
"color:  #E78A6B;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.2);\n"
"}"));
        line = new QFrame(frame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 230, 701, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 60, 161, 21));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 14px;\n"
"}"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 161, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #E78A6B;\n"
"color:  #fff;\n"
"font-weight: 500;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: rgba(231, 138, 107, 0.8);\n"
"}"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 20, 151, 181));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 20, 161, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"font-size: 24px;\n"
"}"));

        verticalLayout->addWidget(frame);

        scrollArea->setWidget(scrollAreaWidgetContents);
        bookdetails->setCentralWidget(centralwidget);
        menubar = new QMenuBar(bookdetails);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuAccount = new QMenu(menubar);
        menuAccount->setObjectName(QString::fromUtf8("menuAccount"));
        bookdetails->setMenuBar(menubar);
        statusbar = new QStatusBar(bookdetails);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        bookdetails->setStatusBar(statusbar);

        menubar->addAction(menuAccount->menuAction());
        menuAccount->addAction(actionLog_Out);

        retranslateUi(bookdetails);

        QMetaObject::connectSlotsByName(bookdetails);
    } // setupUi

    void retranslateUi(QMainWindow *bookdetails)
    {
        bookdetails->setWindowTitle(QApplication::translate("bookdetails", "MainWindow", nullptr));
        actionLog_Out->setText(QApplication::translate("bookdetails", "Log Out", nullptr));
        label_4->setText(QApplication::translate("bookdetails", "label", nullptr));
        label_3->setText(QApplication::translate("bookdetails", "Availability", nullptr));
        groupBox->setTitle(QString());
        label_9->setText(QApplication::translate("bookdetails", "Description", nullptr));
        label_10->setText(QApplication::translate("bookdetails", "Publisher", nullptr));
        label_11->setText(QApplication::translate("bookdetails", "Genre", nullptr));
        pushButton_2->setText(QApplication::translate("bookdetails", "Other Button for admin", nullptr));
        label_2->setText(QApplication::translate("bookdetails", "Author", nullptr));
        pushButton->setText(QApplication::translate("bookdetails", "Reserve", nullptr));
        label_5->setText(QApplication::translate("bookdetails", "book image", nullptr));
        label->setText(QApplication::translate("bookdetails", "Title", nullptr));
        menuAccount->setTitle(QApplication::translate("bookdetails", "Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bookdetails: public Ui_bookdetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKDETAILS_H
