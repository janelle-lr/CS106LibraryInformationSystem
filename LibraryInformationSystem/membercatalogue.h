#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
#include "memberaccountview.h"
namespace Ui {
class memberCatalogue;
}

class memberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberCatalogue(QWidget *parent = nullptr);
    ~memberCatalogue();

private slots:
   // void on_actiontest_triggered();

    void on_viewAccount_triggered();

private:
    Ui::memberCatalogue *ui;
    memberAccountView *memberaccountview;
};

#endif // MEMBERCATALOGUE_H
