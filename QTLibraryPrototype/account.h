#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <QString>

class Account
{
private:
    QString accId;
    QString accType;
    QString password;
    QString dateCreated;
    bool accStatus;
public:
    Account();
    QString getAccId();
    QString getAccType();
    QString getPassword();
    QString getDateCreated();
    bool getAccStatus();
    void setAccId(QString);
    void setAccType(QString);
    void setPassword(QString);
    void setAccStatus(bool);
    void setDateCreated(QString);
};

#endif // ACCOUNT_H
