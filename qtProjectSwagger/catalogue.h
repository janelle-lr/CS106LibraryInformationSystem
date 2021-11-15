#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QMainWindow>
#include "useraccount.h"


namespace Ui {
class Catalogue;
}

class Catalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Catalogue(QWidget *parent = nullptr);
    ~Catalogue();

signals:

private slots:
    void on_actionView_Account_triggered();
    void on_actionSign_Out_triggered();
    void logout();

private:
    Ui::Catalogue *ui;
    userAccount *useraccount;

};

#endif // CATALOGUE_H
