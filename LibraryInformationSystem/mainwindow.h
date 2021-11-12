#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "bookdetails.h"
#include "adminbookdetails.h"

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

private:
    Ui::MainWindow *ui;

    SystemLibrary *sysLib;
    BookDetails *bookDetails;
    AdminBookDetails *adminBookDetails;
};
#endif // MAINWINDOW_H
