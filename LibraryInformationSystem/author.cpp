#include "author.h"

Author::Author()
{
    QString defStr = "default";
    this->authorId = defStr;
    this->name = defStr;
    this->biography = defStr;
    this->dob = defStr;
}
QString Author::getAuthorId(){
    return this->authorId;
}
QString Author::getAuthorName(){
    return this->name;
}
QString Author::getAuthorBiography(){
    return this->biography;
}
QString Author::getAuthorDob(){
    return this->dob;
}
void Author::setAuthorId(QString id){
    this->authorId = id;
}
void Author::setAuthorName(QString name){
    this->name = name;
}
void Author::setAuthorBiography(QString bio){
    this->biography = bio;
}
void Author::setAuthorDob(QString dob){
    this->dob = dob;
}
