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

QT_BEGIN_NAMESPACE

class Ui_memberAccountViewV2
{
public:

    void setupUi(QDialog *memberAccountViewV2)
    {
        if (memberAccountViewV2->objectName().isEmpty())
            memberAccountViewV2->setObjectName(QString::fromUtf8("memberAccountViewV2"));
        memberAccountViewV2->resize(400, 300);

        retranslateUi(memberAccountViewV2);

        QMetaObject::connectSlotsByName(memberAccountViewV2);
    } // setupUi

    void retranslateUi(QDialog *memberAccountViewV2)
    {
        memberAccountViewV2->setWindowTitle(QApplication::translate("memberAccountViewV2", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class memberAccountViewV2: public Ui_memberAccountViewV2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMBERACCOUNTVIEWV2_H
