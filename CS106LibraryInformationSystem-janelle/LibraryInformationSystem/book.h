#ifndef BOOK_H
#define BOOK_H

#include <QString>
#include "author.h"
#include "publisher.h"
class Book: public Author, public Publisher
{
private:
    QString bookId;
    QString name;
    QString genre;
    QString imageFilePath;
    QString bookDescription;
    int inStock;
    int bookCopies;
    bool availStatus;
public:
    Book();
    QString getBookId();
    QString getBookName();
    QString getGenre();
    QString getBookImageFilePath();
    QString getBookDescription();
    int getStock();
    int getBookCopies();
    bool getAvailStatus();
    void setBookid(QString);
    void setBookName(QString);
    void setGenre(QString);
    void setBookImageFilePath(QString);
    void setBookDescription(QString);
    void setStock(int);
    void setBookCopies(int);
    void setAvailStatus(bool);
};

#endif // BOOK_H
