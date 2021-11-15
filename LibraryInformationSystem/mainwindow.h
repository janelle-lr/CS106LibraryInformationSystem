#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "membercatalogue.h"
#include "admineditcatalogue.h"
#include "admincatalogue.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginPushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;

    SystemLibrary *sysLib;
    memberCatalogue *membercatalogue;
    adminEditCatalogue *admineditcatalogue;
    adminCatalogue *admincatalogue;
};
#endif // MAINWINDOW_H
