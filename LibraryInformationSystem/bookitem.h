#ifndef BOOKITEM_H
#define BOOKITEM_H
#include <QString>

class BookItem
{
private:
    QString bookItemID;
    QString bookItemMemberID;
    QString bookItemBookID;
    QString bookItemBookDate;
    QString bookExpiryDate;
    QString bookReturnedDate;
    bool userAccess;
public:
    BookItem();
    //getters
    QString getBookItem_ID();
    QString getBookItem_MemberID();
    QString getBookItem_BookID();
    QString getBookDate();
    QString getExpiryDate();
    QString getBookReturnedDate();
    bool getUserAccess();
    //setters
    void setBookItemID(QString);
    void setBookItem_MemberID(QString);
    void setBookItem_BookID(QString);
    void setBookDate(QString);
    void setExpiryDate(QString);
    void setBookReturnedDate(QString);
    void setUserAccess(bool);
};

#endif // BOOKITEM_H
