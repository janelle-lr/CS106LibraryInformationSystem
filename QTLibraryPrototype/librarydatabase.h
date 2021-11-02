#ifndef LIBRARYDATABASE_H
#define LIBRARYDATABASE_H

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
class LibraryDatabase
{
private:
    int daysOfAccess = 1;//The days the book can be loaned
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
    void updateBook(Book);
    QVector<Book> getAllBooks();
    void updateAllBookDetails(QVector<Book>);
    void removeBookRecord(int);
    void loanBook(BookItem);
    void preOrderBook(PreOrderBook);
    QVector<BookItem> getAllBookItem();
    QVector<PreOrderBook> getAllPreOrders();
    void updateAllBookItemDetails(QVector<BookItem>);
    void updateAllPreOrderDetails(QVector<PreOrderBook>);
    void returnBook(QString,QString);
    QStringList getAllMemberLoanedBooks(QString);
    void setDaysOfAcess(int);
    void checkPreorders();
    void checkLoanedBooks();
};

#endif // LIBRARYDATABASE_H
