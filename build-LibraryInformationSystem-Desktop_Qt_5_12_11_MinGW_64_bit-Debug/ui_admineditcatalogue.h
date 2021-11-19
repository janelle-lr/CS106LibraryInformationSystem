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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QPushButton *pushButton;
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QWidget *tab_2;
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
"	font-family: Montserrat;\n"
"}\n"
"\n"
"QLineEdit {\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"	font-size: 13px;\n"
"}\n"
"\n"
"QPushButton {\n"
"	border-radius: 15px; \n"
"	font-size: 13px;\n"
"}"));
        logoImage = new QLabel(centralwidget);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(30, 20, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 70, 1051, 501));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 410, 171, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	\n"
"}"));
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 70, 1021, 312));
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
        bookTitle->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(0, QFormLayout::FieldRole, bookTitle);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        bookGenre = new QLineEdit(verticalLayoutWidget);
        bookGenre->setObjectName(QString::fromUtf8("bookGenre"));
        bookGenre->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(1, QFormLayout::FieldRole, bookGenre);

        label_13 = new QLabel(verticalLayoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_13);

        bookCopies = new QLineEdit(verticalLayoutWidget);
        bookCopies->setObjectName(QString::fromUtf8("bookCopies"));
        bookCopies->setMinimumSize(QSize(0, 31));

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
        selectedImage->setMinimumSize(QSize(0, 31));
        selectedImage->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border-radius: 15px;\n"
"background-color: palette(base);\n"
"font-size: 13px;\n"
"}\n"
""));

        formLayout->setWidget(3, QFormLayout::FieldRole, selectedImage);

        bookDescription = new QLineEdit(verticalLayoutWidget);
        bookDescription->setObjectName(QString::fromUtf8("bookDescription"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bookDescription->sizePolicy().hasHeightForWidth());
        bookDescription->setSizePolicy(sizePolicy2);
        bookDescription->setMinimumSize(QSize(0, 60));
        bookDescription->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        bookDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

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
        bookAuthor->setMinimumSize(QSize(0, 31));

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
        bookPublisher->setMinimumSize(QSize(0, 31));

        formLayout->setWidget(5, QFormLayout::FieldRole, bookPublisher);


        verticalLayout->addLayout(formLayout);

        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 47, 13));
        confirmBookDetails = new QPushButton(tab);
        confirmBookDetails->setObjectName(QString::fromUtf8("confirmBookDetails"));
        confirmBookDetails->setGeometry(QRect(260, 410, 141, 31));
        confirmBookDetails->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(730, 390, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
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
        pushButton->setText(QApplication::translate("adminEditCatalogue", "Add Book", nullptr));
        label_6->setText(QApplication::translate("adminEditCatalogue", "Book Details", nullptr));
        label_4->setText(QApplication::translate("adminEditCatalogue", "Enter Book TItle", nullptr));
        bookTitle->setText(QString());
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
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("adminEditCatalogue", "Book Catalogue", nullptr));
        menuAccount->setTitle(QApplication::translate("adminEditCatalogue", "Account", nullptr));
        menuCatalogue->setTitle(QApplication::translate("adminEditCatalogue", "Catalogue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditCatalogue: public Ui_adminEditCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITCATALOGUE_H
