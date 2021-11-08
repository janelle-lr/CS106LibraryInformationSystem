#include "publisher.h"

Publisher::Publisher()
{
    QString defStr = "default";
    this->publisherID = defStr;
    this->name = defStr;
    this->publicationDate = defStr;
    this->location = defStr;
}
QString Publisher::getPublID(){
    return this->publisherID;
}
QString Publisher::getPubName(){
    return this->name;
}
QString Publisher::getPublicationDate(){
    return this->publicationDate;
}
QString Publisher::getLocation(){
    return this->location;
}
void Publisher::setPublID(QString id){
    this->publisherID = id;
}
void Publisher::setPubName(QString name){
    this->name = name;
}
void Publisher::setPublicationDate(QString date){
    this->publicationDate = date;
}
void Publisher::setLocation(QString loc){
    this->location = loc;
}
