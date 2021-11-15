#include "admin.h"

Admin::Admin()
{
    QString defStr = "default";
    this->adminID  = defStr;
    this->password  = defStr;
}
QString Admin::getAdminID(){
    return this->adminID;
}
void Admin::setAdminId(QString id){
    this->adminID = id;
}

QString Admin::getPassword(){
    return this->password;
}
void Admin::setPassword(QString pass){
    this->password = pass;
}

