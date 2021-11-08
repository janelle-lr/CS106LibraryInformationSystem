#include "account.h"

Account::Account()
{
    QString defStr = "default";
    this->accId = defStr;
    this->accType = defStr;
    this->password = defStr;
    this->dateCreated = defStr;
    this->accStatus = 1;
}

QString Account::getAccId(){
    return this->accId;
}
QString Account::getAccType(){
    return this->accType;
}
QString Account::getPassword(){
    return this->password;
}
QString Account::getDateCreated(){
    return this->dateCreated;
}
bool Account::getAccStatus(){
    return this->accStatus;
}
void Account::setAccId(QString id){
    this->accId = id;
}
void Account::setAccType(QString accType){
    this->accType = accType;
}
void Account::setPassword(QString pass){
    this->password = pass;
}
void Account::setAccStatus(bool status){
    this->accStatus = status;
}
void Account::setDateCreated(QString date){
    this->dateCreated = date;
}
