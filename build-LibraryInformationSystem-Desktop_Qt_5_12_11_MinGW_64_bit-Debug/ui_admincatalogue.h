/********************************************************************************
** Form generated from reading UI file 'admincatalogue.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINCATALOGUE_H
#define UI_ADMINCATALOGUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminCatalogue
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminCatalogue)
    {
        if (adminCatalogue->objectName().isEmpty())
            adminCatalogue->setObjectName(QString::fromUtf8("adminCatalogue"));
        adminCatalogue->resize(800, 600);
        centralwidget = new QWidget(adminCatalogue);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(10, 40, 781, 501));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 762, 779));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(591, 761));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, -1, 741, 491));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 10, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(230, 10, 75, 23));
        adminCatalogue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminCatalogue);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        adminCatalogue->setMenuBar(menubar);
        statusbar = new QStatusBar(adminCatalogue);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminCatalogue->setStatusBar(statusbar);

        retranslateUi(adminCatalogue);

        QMetaObject::connectSlotsByName(adminCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminCatalogue)
    {
        adminCatalogue->setWindowTitle(QApplication::translate("adminCatalogue", "MainWindow", nullptr));
        pushButton->setText(QApplication::translate("adminCatalogue", "print record", nullptr));
        pushButton_2->setText(QApplication::translate("adminCatalogue", "delete record", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminCatalogue: public Ui_adminCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINCATALOGUE_H
