#include "notificationlog.h"

NotificationLog::NotificationLog()
{
    QString defStr = "Default";
    this->memberID = defStr;
    this->bookID = defStr;
    this->notificationType = defStr;
    this->status = 0;
}

//Setters
void
NotificationLog::setMemberID(QString id){
    this->memberID = id;
}
void
NotificationLog::setbookID(QString id){
    this->bookID = id;
}
void
NotificationLog::setnotificationType(QString type){
    this->notificationType = type;
}
void NotificationLog::setstatus(bool status){
    this->status = status;
}
//Getters
QString NotificationLog::getMemberID(){
    return this->memberID;
}
QString NotificationLog::getbookID(){
    return this->bookID;
}
QString NotificationLog::getnotificationType(){
    return this->notificationType;
}
bool NotificationLog::getstatus(){
    return this->status;
}
