#ifndef SYSTEMLIBRARY_H
#define SYSTEMLIBRARY_H

#include "librarydatabase.h"
#include <QDate>
class SystemLibrary: public LibraryDatabase
{
public:
    SystemLibrary();
    QString generateID(int);
    //int calculateAge(int,int,int);
    int calculateAge(QDate);
    //bool isDateValid(int,int,int);
    bool isDateValid(QDate);
    bool isPasswordValid(QString);
};

#endif // SYSTEMLIBRARY_H
