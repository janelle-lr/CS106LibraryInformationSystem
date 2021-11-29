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
signals:
    void openadminAddMember();
private slots:
    void on_catalogueBtn_clicked();
    void on_addMember_clicked();

private:
    Ui::adminAddMember *ui;
    Member *member;
    SystemLibrary *sysLib;
    void addMember(QString);
    void setMemberId(QString);
    void setName(QString);
    void setEmail(QString);
    void setAccId(QString);
    void setAccType(QString);
    void setPassword(QString);
    QString accId;
};

#endif // ADMINADDMEMBER_H
