#ifndef ADMINEDITACCOUNT_H
#define ADMINEDITACCOUNT_H

#include <QMainWindow>

namespace Ui {
class adminEditAccount;
}

class adminEditAccount : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminEditAccount(QWidget *parent = nullptr);
    ~adminEditAccount();

private:
    Ui::adminEditAccount *ui;
};

#endif // ADMINEDITACCOUNT_H
