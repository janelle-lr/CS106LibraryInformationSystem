#ifndef ADMIN_H
#define ADMIN_H
#include <QString>
#include "account.h"
class Admin: public Account
{
private:
    QString adminID;
    QString password;
public:
    Admin();
    QString getAdminID();
    QString getPassword();
    void setAdminId(QString);
    void setPassword(QString);
};

#endif // ADMIN_H
