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

private slots:
    void on_updateMemberButton_clicked();

private:
    Ui::adminMemberEdit *ui;
    SystemLibrary sysLib;
    void updateAllBookDetails(QVector<Book>);
    int numId;
};

#endif // ADMINMEMBEREDIT_H
