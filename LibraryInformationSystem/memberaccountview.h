#ifndef MEMBERACCOUNTVIEW_H
#define MEMBERACCOUNTVIEW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>

#include "systemlibrary.h"

namespace Ui {
class memberAccountView;
}

class memberAccountView : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberAccountView(QWidget *parent = nullptr);
    ~memberAccountView();
signals:
    void showMemberAccWindow();
private slots:
    void on_actionView_Catalogue_triggered();


private:
    Ui::memberAccountView *ui;
    SystemLibrary *sysLib;

};

#endif // MEMBERACCOUNTVIEW_H
