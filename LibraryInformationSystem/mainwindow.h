#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "membercatalogue.h"
#include "admineditcatalogue.h"
#include "admineditbook.h"
#include "admincatalogue.h"
#include "adminaddmember.h"
#include "adminmembercatalogue.h"
#include "adminmemberedit.h"

#include "memberaccountview.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
   void showLogin();

private slots:
    void on_loginPushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;

    SystemLibrary *sysLib;
    memberCatalogue *membercatalogue;
    adminEditCatalogue *admineditcatalogue;
    adminCatalogue *admincatalogue;
    adminAddMember *adminaddmember;
    adminMemberCatalogue *adminmembercatalogue;
    adminEditBook *admineditbook;
    adminMemberEdit *adminmemberedit;

    memberAccountView *memberaccountview;
};
#endif // MAINWINDOW_H
