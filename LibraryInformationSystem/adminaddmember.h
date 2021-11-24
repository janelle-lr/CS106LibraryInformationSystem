#ifndef ADMINADDMEMBER_H
#define ADMINADDMEMBER_H

#include <QMainWindow>
#include "member.h"
#include "systemlibrary.h"

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
    void on_adddMemberButton_clicked();

private:
    Ui::adminAddMember *ui;
    Member *member;
    SystemLibrary *sysLib;
    void setMemberId(QString);
    void setName(QString);
    void setEmail(QString);
    void setAccId(QString);
    void setAccType(QString);
    void setPassword(QString);
};

#endif // ADMINADDMEMBER_H
