#ifndef MEMBER_H
#define MEMBER_H
#include <QString>
#include <QDate>
#include "account.h"
class Member: public Account
{
private:
    QString memberId;
    QString name;
    int age;
    QString dob;
    QString email;
    QString mobileNum;
public:
    Member();
    QString getMemberId();
    QString getName();
    int getAge();
    QString getDob();
    QString getEmail();
    QString getMobileNum();
    void setMemberID(QString);
    void setName(QString);
    void setAge(int);
    void setDob(QString);
    void setEmail(QString);
    void setMobileNum(QString);
};
#endif // MEMBER_H
