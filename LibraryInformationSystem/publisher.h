#ifndef PUBLISHER_H
#define PUBLISHER_H

#include <QString>
class Publisher
{
private:
    QString publisherID;
    QString name;
    QString publicationDate;
    QString location;
public:
    Publisher();
    QString getPublID();
    QString getPubName();
    QString getPublicationDate();
    QString getLocation();
    void setPublID(QString);
    void setPubName(QString);
    void setPublicationDate(QString);
    void setLocation(QString);
};

#endif // PUBLISHER_H
