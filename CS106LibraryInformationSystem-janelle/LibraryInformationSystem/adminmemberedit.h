#ifndef ADMINMEMBEREDIT_H
#define ADMINMEMBEREDIT_H

#include <QMainWindow>
#include <QMessageBox>
#include "systemlibrary.h"

namespace Ui {
class adminMemberEdit;
}

class adminMemberEdit : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminMemberEdit(QWidget *parent = nullptr);
    ~adminMemberEdit();
    void setNum (int);

signals:
    void showadminMemberEdit();
    void showMemberCat();

private slots:
    void on_updateMemberButton_clicked();
//    void showadminMemberEdit();

    void on_memberBtn_clicked();

private:
    Ui::adminMemberEdit *ui;
    SystemLibrary sysLib;
    void updateAllBookDetails(QVector<Book>);
    int numId;

};

#endif // ADMINMEMBEREDIT_H
