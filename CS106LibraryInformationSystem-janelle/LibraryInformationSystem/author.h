#ifndef AUTHOR_H
#define AUTHOR_H

#include <QString>
class Author
{
private:
    QString authorId;
    QString name;
    QString biography;
    QString dob;
public:
    Author();
    QString getAuthorId();
    QString getAuthorName();
    QString getAuthorBiography();
    QString getAuthorDob();
    void setAuthorId(QString);
    void setAuthorName(QString);
    void setAuthorBiography(QString);
    void setAuthorDob(QString);
};

#endif // AUTHOR_H
