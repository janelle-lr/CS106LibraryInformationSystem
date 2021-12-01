#ifndef MEMBERACCOUNTVIEW_H
#define MEMBERACCOUNTVIEW_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "memberviewloans.h"

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

private:
    Ui::memberAccountView *ui;
    QString userId;
    SystemLibrary* sysLib;
    memberViewLoans* memberviewloans;
};

#endif // MEMBERACCOUNTVIEW_H
