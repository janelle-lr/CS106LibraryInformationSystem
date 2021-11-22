#ifndef ADMINADDMEMBER_H
#define ADMINADDMEMBER_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "account.h"
#include "member.h"

namespace Ui {
class adminAddMember;
}

class adminAddMember : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminAddMember(QWidget *parent = nullptr);
    ~adminAddMember();

private slots:
    void on_addNewMember_clicked();

private:
    Ui::adminAddMember *ui;
    SystemLibrary systemlibrary;

};

#endif // ADMINADDMEMBER_H
