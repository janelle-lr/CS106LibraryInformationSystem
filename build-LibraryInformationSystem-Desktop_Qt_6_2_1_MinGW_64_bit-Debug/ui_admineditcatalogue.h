/********************************************************************************
** Form generated from reading UI file 'admineditcatalogue.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
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
    QFrame *line;
    QGroupBox *groupBox;
    QPushButton *confirmBookDetails;
    QLabel *label_32;
    QLabel *label_39;
    QLineEdit *bookDescription;
    QLabel *label_34;
    QLineEdit *bookGenre;
    QLabel *label_35;
    QLineEdit *bookCopies;
    QLabel *label_36;
    QComboBox *selectedImage_3;
    QLabel *label_33;
    QLineEdit *bookTitle;
    QLineEdit *bookAuthor;
    QLabel *label_38;
    QLineEdit *bookPublisher;
    QLabel *label_37;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *backIcon;
    QPushButton *backBtn;
    QSpacerItem *verticalSpacer_3;
    QLabel *logoImage;
    QLabel *pageDesc;
    QLabel *pageTitle;

    void setupUi(QMainWindow *adminEditCatalogue)
    {
        if (adminEditCatalogue->objectName().isEmpty())
            adminEditCatalogue->setObjectName(QString::fromUtf8("adminEditCatalogue"));
        adminEditCatalogue->resize(1280, 640);
        adminEditCatalogue->setMinimumSize(QSize(1080, 640));
        adminEditCatalogue->setMaximumSize(QSize(16777215, 640));
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
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(210, 120, 21, 481));
        line->setStyleSheet(QString::fromUtf8("Line{\n"
"	color:rgb(221, 46, 68);\n"
"}"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 180, 931, 401));
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
        bookDescription = new QLineEdit(groupBox);
        bookDescription->setObjectName(QString::fromUtf8("bookDescription"));
        bookDescription->setGeometry(QRect(280, 282, 601, 60));
        sizePolicy1.setHeightForWidth(bookDescription->sizePolicy().hasHeightForWidth());
        bookDescription->setSizePolicy(sizePolicy1);
        bookDescription->setMinimumSize(QSize(0, 60));
        bookDescription->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	padding: 5px;\n"
"}"));
        bookDescription->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(42, 97, 151, 16));
        bookGenre = new QLineEdit(groupBox);
        bookGenre->setObjectName(QString::fromUtf8("bookGenre"));
        bookGenre->setGeometry(QRect(280, 97, 601, 31));
        bookGenre->setMinimumSize(QSize(0, 31));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(42, 134, 161, 16));
        bookCopies = new QLineEdit(groupBox);
        bookCopies->setObjectName(QString::fromUtf8("bookCopies"));
        bookCopies->setGeometry(QRect(280, 134, 601, 31));
        bookCopies->setMinimumSize(QSize(0, 31));
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
        bookTitle = new QLineEdit(groupBox);
        bookTitle->setObjectName(QString::fromUtf8("bookTitle"));
        bookTitle->setGeometry(QRect(280, 60, 601, 31));
        bookTitle->setMinimumSize(QSize(0, 31));
        bookAuthor = new QLineEdit(groupBox);
        bookAuthor->setObjectName(QString::fromUtf8("bookAuthor"));
        bookAuthor->setGeometry(QRect(280, 208, 601, 31));
        sizePolicy1.setHeightForWidth(bookAuthor->sizePolicy().hasHeightForWidth());
        bookAuthor->setSizePolicy(sizePolicy1);
        bookAuthor->setMinimumSize(QSize(0, 31));
        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(42, 245, 181, 16));
        sizePolicy1.setHeightForWidth(label_38->sizePolicy().hasHeightForWidth());
        label_38->setSizePolicy(sizePolicy1);
        label_38->setMinimumSize(QSize(0, 0));
        label_38->setMaximumSize(QSize(16777185, 16777215));
        bookPublisher = new QLineEdit(groupBox);
        bookPublisher->setObjectName(QString::fromUtf8("bookPublisher"));
        bookPublisher->setGeometry(QRect(280, 245, 601, 31));
        sizePolicy1.setHeightForWidth(bookPublisher->sizePolicy().hasHeightForWidth());
        bookPublisher->setSizePolicy(sizePolicy1);
        bookPublisher->setMinimumSize(QSize(0, 31));
        label_37 = new QLabel(groupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(42, 208, 171, 16));
        sizePolicy1.setHeightForWidth(label_37->sizePolicy().hasHeightForWidth());
        label_37->setSizePolicy(sizePolicy1);
        label_37->setMinimumSize(QSize(0, 0));
        label_37->setMaximumSize(QSize(16777185, 16777215));
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
        pageDesc = new QLabel(centralwidget);
        pageDesc->setObjectName(QString::fromUtf8("pageDesc"));
        pageDesc->setGeometry(QRect(290, 100, 971, 51));
        pageTitle = new QLabel(centralwidget);
        pageTitle->setObjectName(QString::fromUtf8("pageTitle"));
        pageTitle->setGeometry(QRect(290, 60, 331, 51));
        pageTitle->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-size: 24px;\n"
"	font-weight: bold;\n"
"}"));
        adminEditCatalogue->setCentralWidget(centralwidget);
        QWidget::setTabOrder(bookTitle, bookGenre);
        QWidget::setTabOrder(bookGenre, bookCopies);
        QWidget::setTabOrder(bookCopies, selectedImage_3);
        QWidget::setTabOrder(selectedImage_3, bookAuthor);
        QWidget::setTabOrder(bookAuthor, bookPublisher);
        QWidget::setTabOrder(bookPublisher, bookDescription);
        QWidget::setTabOrder(bookDescription, confirmBookDetails);
        QWidget::setTabOrder(confirmBookDetails, backBtn);

        retranslateUi(adminEditCatalogue);

        QMetaObject::connectSlotsByName(adminEditCatalogue);
    } // setupUi

    void retranslateUi(QMainWindow *adminEditCatalogue)
    {
        adminEditCatalogue->setWindowTitle(QCoreApplication::translate("adminEditCatalogue", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        confirmBookDetails->setText(QCoreApplication::translate("adminEditCatalogue", "Add Book", nullptr));
        label_32->setText(QCoreApplication::translate("adminEditCatalogue", "Book Details", nullptr));
        label_39->setText(QCoreApplication::translate("adminEditCatalogue", "Enter book \n"
" description", nullptr));
        label_34->setText(QCoreApplication::translate("adminEditCatalogue", "Enter Genre", nullptr));
        label_35->setText(QCoreApplication::translate("adminEditCatalogue", "Amount of Copies", nullptr));
        label_36->setText(QCoreApplication::translate("adminEditCatalogue", "Select Image", nullptr));
        selectedImage_3->setItemText(0, QCoreApplication::translate("adminEditCatalogue", "Image 1", nullptr));
        selectedImage_3->setItemText(1, QCoreApplication::translate("adminEditCatalogue", "Image 2", nullptr));
        selectedImage_3->setItemText(2, QCoreApplication::translate("adminEditCatalogue", "Image 3", nullptr));

        label_33->setText(QCoreApplication::translate("adminEditCatalogue", "Enter Book TItle", nullptr));
        bookTitle->setText(QString());
        label_38->setText(QCoreApplication::translate("adminEditCatalogue", "Enter Publisher Name", nullptr));
        label_37->setText(QCoreApplication::translate("adminEditCatalogue", "Enter Author Name", nullptr));
        backIcon->setText(QCoreApplication::translate("adminEditCatalogue", "go back", nullptr));
        backBtn->setText(QCoreApplication::translate("adminEditCatalogue", "Go Back", nullptr));
        logoImage->setText(QString());
        pageDesc->setText(QCoreApplication::translate("adminEditCatalogue", "Enter the details of the new book you want to add to the library catalogue. a;owiehfaowieharotharuhaera \n"
"loremupsunmm or osmething", nullptr));
        pageTitle->setText(QCoreApplication::translate("adminEditCatalogue", "Add New Book", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminEditCatalogue: public Ui_adminEditCatalogue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITCATALOGUE_H
