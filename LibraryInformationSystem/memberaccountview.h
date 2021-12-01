#ifndef MEMBERACCOUNTVIEW_H
#define MEMBERACCOUNTVIEW_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "memberviewloans.h"
#include "memberviewreserves.h"

namespace Ui {
class memberAccountView;
}

class memberAccountView : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberAccountView(QWidget *parent = nullptr);
    ~memberAccountView();
    void setAccID (QString);

private slots:
    void on_loanedBooksBtn_clicked();
    void on_memberPass_textEdited(const QString &arg1);
    void on_memberFirstName_textEdited(const QString &arg1);
    void on_memberMobile_textEdited(const QString &arg1);

    void on_memberEmail_textEdited(const QString &arg1);

    void on_pushButton_clicked();

    void on_reservedBooksBtn_clicked();

private:
    Ui::memberAccountView *ui;
    QString userId;
    SystemLibrary* sysLib;
    memberViewLoans* memberviewloans;
    memberViewReserves* memberviewreserves;
};

#endif // MEMBERACCOUNTVIEW_H
