#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "bookdetails.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::login *ui;
    bookdetails *bookDetails;
};

#endif // LOGIN_H
