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
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminEditCatalogue
{
public:
    QWidget *centralwidget;
    QLabel *logoImage;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *backIcon_2;
    QPushButton *backBtn_2;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QPushButton *confirmBookDetails;
    QLabel *label_32;
    QLabel *label_39;
    QLineEdit *bookDescription_3;
    QLabel *label_34;
    QLineEdit *bookGenre_3;
    QLabel *label_35;
    QLineEdit *bookCopies_3;
    QLabel *label_36;
    QComboBox *selectedImage_3;
    QLabel *label_33;
    QLineEdit *bookTitle_3;
    QLineEdit *bookAuthor_3;
    QLabel *label_38;
    QLineEdit *bookPublisher_3;
    QLabel *label_37;
    QLabel *pageTitle;
    QLabel *pageDesc;

    void setupUi(QMainWindow *adminEditCatalogue)
    {
        if (adminEditCatalogue->objectName().isEmpty())
            adminEditCatalogue->setObjectName(QString::fromUtf8("adminEditCatalogue"));
        adminEditCatalogue->resize(1280, 640);
        adminEditCatalogue->setMinimumSize(QSize(1280, 640));
        adminEditCatalogue->setMaximumSize(QSize(16777215, 16777215));
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
        logoImage->setGeometry(QRect(10, 20, 221, 71));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 110, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 191, 471));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        backIcon_2 = new QLabel(layoutWidget);
        backIcon_2->setObjectName(QString::fromUtf8("backIcon_2"));
        backIcon_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(231, 138, 107);\n"
"}"));
        backIcon_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(backIcon_2);

        backBtn_2 = new QPushButton(layoutWidget);
        backBtn_2->setObjectName(QString::fromUtf8("backBtn_2"));
        backBtn_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-radius:15px;\n"
"	font: 14px \"Montserrat\";\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	text-decoration: underline;\n"
"}"));

        verticalLayout_5->addWidget(backBtn_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 170, 931, 401));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"	border-radius: 25px;\n"
"	background: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	font-size: 14px;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"\n"
"QLineEdit {\n"
"	background:rgb(255, 229, 208);\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"}\n"
"\n"
"QComboBox{\n"
"	background:rgb(255, 229, 208);\n"
"	border: 1px solid;\n"
"	border-radius: 15px;\n"
"	border-color: #e5e5e5;\n"
"	background-color: palette(base);\n"
"	padding: 0px 5px;\n"
"}\n"
"\n"
"QFormLayout{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"\n"
"QPushButton {\n"
"	border-radius: 15px; \n"
"	font-size: 13px;\n"
"}\n"
""));
        confirmBookDetails = new QPushButton(groupBox);
        confirmBookDetails->setObjectName(QString::fromUtf8("confirmBookDetails"));
        confirmBookDetails->setGeometry(QRect(370, 350, 241, 31));
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
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(41, 20, 131, 31));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy);
        label_32->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-weight: bold;\n"
"	font-size: 18px;\n"
"\n"
"}"));
        label_39 = new QLabel(groupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(42, 282, 151, 51));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy1);
        label_39->setMinimumSize(QSize(0, 0));
        label_39->setMaximumSize(QSize(16777185, 16777215));
        bookDescription_3 = new QLineEdit(groupBox);
        bookDescription_3->setObjectName(QString::fromUtf8("bookDescription_3"));
        bookDescription_3->setGeometry(QRect(280, 282, 601, 60));
        sizePolicy1.setHeightForWidth(bookDescription_3->sizePolicy().hasHeightForWidth());
        bookDescription_3->setSizePolicy(sizePolicy1);
        bookDescription_3->setMinimumSize(QSize(0, 60));
        bookDescription_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        bookDescription_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(42, 97, 151, 16));
        bookGenre_3 = new QLineEdit(groupBox);
        bookGenre_3->setObjectName(QString::fromUtf8("bookGenre_3"));
        bookGenre_3->setGeometry(QRect(280, 97, 601, 31));
        bookGenre_3->setMinimumSize(QSize(0, 31));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(42, 134, 161, 16));
        bookCopies_3 = new QLineEdit(groupBox);
        bookCopies_3->setObjectName(QString::fromUtf8("bookCopies_3"));
        bookCopies_3->setGeometry(QRect(280, 134, 601, 31));
        bookCopies_3->setMinimumSize(QSize(0, 31));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(42, 171, 111, 16));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_36->sizePolicy().hasHeightForWidth());
        label_36->setSizePolicy(sizePolicy2);
        label_36->setMaximumSize(QSize(16777215, 16777215));
        selectedImage_3 = new QComboBox(groupBox);
        selectedImage_3->addItem(QString());
        selectedImage_3->addItem(QString());
        selectedImage_3->addItem(QString());
        selectedImage_3->setObjectName(QString::fromUtf8("selectedImage_3"));
        selectedImage_3->setGeometry(QRect(280, 171, 121, 31));
        selectedImage_3->setMinimumSize(QSize(0, 31));
        selectedImage_3->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"border-radius: 15px;\n"
"background-color: palette(base);\n"
"font-size: 13px;\n"
"}\n"
""));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(42, 60, 161, 16));
        bookTitle_3 = new QLineEdit(groupBox);
        bookTitle_3->setObjectName(QString::fromUtf8("bookTitle_3"));
        bookTitle_3->setGeometry(QRect(280, 60, 601, 31));
        bookTitle_3->setMinimumSize(QSize(0, 31));
        bookAuthor_3 = new QLineEdit(groupBox);
        bookAuthor_3->setObjectName(QString::fromUtf8("bookAuthor_3"));
        bookAuthor_3->setGeometry(QRect(280, 208, 601, 31));
        sizePolicy1.setHeightForWidth(bookAuthor_3->sizePolicy().hasHeightForWidth());
        bookAuthor_3->setSizePolicy(sizePolicy1);
        bookAuthor_3->setMinimumSize(QSize(0, 31));
        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(42, 245, 181, 16));
        sizePolicy1.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy1);
        label_38->setMinimumSize(QSize(0, 0));
        label_38->setMaximumSize(QSize(16777185, 16777215));
        bookPublisher_3 = new QLineEdit(groupBox);
        bookPublisher_3->setObjectName(QString::fromUtf8("bookPublisher_3"));
        bookPublisher_3->setGeometry(QRect(280, 245, 601, 31));
        sizePolicy1.setHeightForWidth(bookPublisher_3->sizePolicy().hasHeightForWidth());
        bookPublisher_3->setSizePolicy(sizePolicy1);
        bookPublisher_3->setMinimumSize(QSize(0, 31));
        label_37 = new QLabel(groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(42, 208, 171, 16));
        sizePolicy1.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy1);
        label_37->setMinimumSize(QSize(0, 0));
        label_37->setMaximumSize(QSize(16777185, 16777215));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 50, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 90, 971, 51));
        adminEditCatalogue->setCentralWidget(centralwidget);

        retranslateUi(adminEditCatalogue);

        QMetaObject::connectSlotsByName(adminEditCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditCatalogue)
    {
        adminEditCatalogue->setWindowTitle(QApplication::translate("adminEditCatalogue", "MainWindow", nullptr));
        logoImage->setText(QString());
        backIcon_2->setText(QApplication::translate("adminEditCatalogue", "go back", nullptr));
        backBtn_2->setText(QApplication::translate("adminEditCatalogue", "Go Back", nullptr));
        groupBox->setTitle(QString());
        confirmBookDetails->setText(QApplication::translate("adminEditCatalogue", "Add Book", nullptr));
        label_32->setText(QApplication::translate("adminEditCatalogue", "Book Details", nullptr));
        label_39->setText(QApplication::translate("adminEditCatalogue", "Enter book \n"
" description", nullptr));
        label_34->setText(QApplication::translate("adminEditCatalogue", "Enter Genre", nullptr));
        label_35->setText(QApplication::translate("adminEditCatalogue", "Amount of Copies", nullptr));
        label_36->setText(QApplication::translate("adminEditCatalogue", "Select Image", nullptr));
        selectedImage_3->setItemText(0, QApplication::translate("adminEditCatalogue", "Image 1", nullptr));
        selectedImage_3->setItemText(1, QApplication::translate("adminEditCatalogue", "Image 2", nullptr));
        selectedImage_3->setItemText(2, QApplication::translate("adminEditCatalogue", "Image 3", nullptr));

        label_33->setText(QApplication::translate("adminEditCatalogue", "Enter Book TItle", nullptr));
        bookTitle_3->setText(QString());
        label_38->setText(QApplication::translate("adminEditCatalogue", "Enter Publisher Name", nullptr));
        label_37->setText(QApplication::translate("adminEditCatalogue", "Enter Author Name", nullptr));
        pageTitle->setText(QApplication::translate("adminEditCatalogue", "Add New Book", nullptr));
        pageDesc->setText(QApplication::translate("adminEditCatalogue", "Enter the details of the new book you want to add to the library catalogue. a;owiehfaowieharotharuhaera \n"
"loremupsunmm or osmething", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditCatalogue: public Ui_adminEditCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITCATALOGUE_H
