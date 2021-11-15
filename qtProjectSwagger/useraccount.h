#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QMainWindow>


namespace Ui {
class userAccount;
}

class userAccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit userAccount(QWidget *parent = nullptr);
    ~userAccount();

private slots:
    void on_actionView_Account_triggered();

private:
    Ui::userAccount *ui;

};

#endif // USERACCOUNT_H
