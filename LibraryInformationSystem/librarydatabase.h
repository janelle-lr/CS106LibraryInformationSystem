#ifndef LIBRARYDATABASE_H
#define LIBRARYDATABASE_H

/*
    Hey again, its me. Your friendly neighborhood optimus prime.
    I added in the header file from the teams chat that jay posted.
    I hope everything is in the right place, if its not.

    If it's not, please contact a therapist.
    thanks,
    Optimus Prime
*/

#include <QString>
#include <QDebug>
#include <QDate>
#include <QFile>
#include <QDir>
#include <QVector>
#include "member.h"
#include "admin.h"
#include "book.h"
#include "bookitem.h"
#include "preorderbook.h"
#include "notificationlog.h"
class LibraryDatabase
{
private:
    const int daysOfAccess = 1;//The days the book can be loaned
public:
    LibraryDatabase();
    void buildDatabase();
    void createTestAccount();
    bool checkAccount(QString,QString);
    bool checkAdminAccount(QString,QString);
    bool isIdUnique(QString,int);
    void createMember(Member);
    QVector<Member> getAllMemberDetails();
    void updateAllMemberDetails(QVector<Member>);
    Admin getAdminDeatils();
    void updateAdminDetails(Admin);
    void addBook(Book);
    QVector<Book> getAllBooks();
    void updateAllBookDetails(QVector<Book>);
    void removeBookRecord(QString);
    void loanBook(BookItem);
    void preOrderBook(PreOrderBook);
    QVector<BookItem> getAllBookItem();
    QVector<PreOrderBook> getAllPreOrders();
    void updateAllBookItemDetails(QVector<BookItem>);
    void updateAllPreOrderDetails(QVector<PreOrderBook>);
    void returnBook(QString,QString);
    QStringList getAllMemberLoanedBooks(QString);
    void checkPreorders();
    void checkLoanedBooks();
    bool isLoaned(QString,QString);
    bool isPreBook(QString, QString);
    QStringList getNearbyDueDateBooks(QString);
    QString getAvailPreBookDate(QString,QString);
    void log_Returned_Loaned_Books(NotificationLog);
    //void logLoanedBooks(NotificationLog);
    QVector<NotificationLog> getNotificationLog();
    void updateLogs(QVector<NotificationLog>);
};

#endif // LIBRARYDATABASE_H
