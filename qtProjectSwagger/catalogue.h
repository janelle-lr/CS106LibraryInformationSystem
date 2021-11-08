#ifndef CATALOGUE_H
#define CATALOGUE_H

#include <QMainWindow>
#include "useraccount.h"
#include "mainwindow.h"

namespace Ui {
class Catalogue;
}

class Catalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit Catalogue(QWidget *parent = nullptr);
    ~Catalogue();

private slots:
    void on_actionView_Account_triggered();

    void on_actionSign_Out_triggered();

private:
    Ui::Catalogue *ui;
    userAccount *useraccount;
    //MainWindow *mainwindow;
};

#endif // CATALOGUE_H
