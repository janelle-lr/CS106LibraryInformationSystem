/********************************************************************************
** Form generated from reading UI file 'memberaccountviewv2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMBERACCOUNTVIEWV2_H
#define UI_MEMBERACCOUNTVIEWV2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_memberAccountViewV2
{
public:
    QLabel *logoImage;
    QPushButton *viewCatalogue;
    QPushButton *viewAccount;
    QPushButton *viewCatalogue_2;

    void setupUi(QDialog *memberAccountViewV2)
    {
        if (memberAccountViewV2->objectName().isEmpty())
            memberAccountViewV2->setObjectName(QString::fromUtf8("memberAccountViewV2"));
        memberAccountViewV2->resize(1250, 1014);
        memberAccountViewV2->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background: #FFE5D0;\n"
"	font-family: Montserrat;\n"
"}"));
        logoImage = new QLabel(memberAccountViewV2);
        logoImage->setObjectName(QString::fromUtf8("logoImage"));
        logoImage->setGeometry(QRect(400, 70, 441, 61));
        logoImage->setPixmap(QPixmap(QString::fromUtf8(":/resources/images/bblLogo.png")));
        viewCatalogue = new QPushButton(memberAccountViewV2);
        viewCatalogue->setObjectName(QString::fromUtf8("viewCatalogue"));
        viewCatalogue->setGeometry(QRect(440, 190, 101, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Montserrat"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(62);
        viewCatalogue->setFont(font);
        viewCatalogue->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));
        viewAccount = new QPushButton(memberAccountViewV2);
        viewAccount->setObjectName(QString::fromUtf8("viewAccount"));
        viewAccount->setGeometry(QRect(580, 190, 81, 41));
        viewAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));
        viewCatalogue_2 = new QPushButton(memberAccountViewV2);
        viewCatalogue_2->setObjectName(QString::fromUtf8("viewCatalogue_2"));
        viewCatalogue_2->setGeometry(QRect(700, 190, 81, 41));
        viewCatalogue_2->setFont(font);
        viewCatalogue_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgba(255, 229, 208,0);\n"
"	color: rgb(255, 136, 108);\n"
"	font: 500 14px \"Montserrat\";\n"
"}"));

        retranslateUi(memberAccountViewV2);

        QMetaObject::connectSlotsByName(memberAccountViewV2);
    } // setupUi

    void retranslateUi(QDialog *memberAccountViewV2)
    {
        memberAccountViewV2->setWindowTitle(QApplication::translate("memberAccountViewV2", "Dialog", nullptr));
        logoImage->setText(QString());
        viewCatalogue->setText(QApplication::translate("memberAccountViewV2", "CATALOGUE", nullptr));
        viewAccount->setText(QApplication::translate("memberAccountViewV2", "ACCOUNT", nullptr));
        viewCatalogue_2->setText(QApplication::translate("memberAccountViewV2", "LOG OUT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberAccountViewV2: public Ui_memberAccountViewV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERACCOUNTVIEWV2_H
