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
    int inStock;
    int bookCopies;
    bool availStatus;
public:
    Book();
    QString getBookId();
    QString getBookName();
    QString getGenre();
    QString getBookImageFilePath();
    int getStock();
    int getBookCopies();
    bool getAvailStatus();
    void setBookid(QString);
    void setBookName(QString);
    void setGenre(QString);
    void setBookImageFilePath(QString);
    void setStock(int);
    void setBookCopies(int);
    void setAvailStatus(bool);
};

#endif // BOOK_H
