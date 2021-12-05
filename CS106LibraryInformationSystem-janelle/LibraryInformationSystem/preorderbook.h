#ifndef PREORDERBOOK_H
#define PREORDERBOOK_H
#include <QString>

class PreOrderBook
{
private:
    QString preBookID;
    QString preBook_MemberID;
    QString preBook_BookID;
    QString date;
    bool isBooked;
public:
    PreOrderBook();
    QString getPreBookID();
    QString getPreBook_MemberID();
    QString getPreBook_BookID();
    QString getPreBookDate();
    bool getPreOrderStatus();

    void setPreBookID(QString);
    void setPreBook_MemberID(QString);
    void setPreBook_BookID(QString);
    void setPreBookDate(QString);
    void setPreOrderStatus(bool);
};

#endif // PREORDERBOOK_H
