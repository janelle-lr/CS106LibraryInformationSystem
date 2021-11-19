#include "member.h"

Member::Member()
{
    QString defStr = "default";
    this->memberId = defStr;
    this->name = defStr;
    this->age = 69;
    this->dob = defStr;
    this->email = defStr;
    this->mobileNum = defStr;
}
QString Member::getMemberId(){
    return this->memberId;
}
QString Member::getName(){
    return this->name;
}
int Member::getAge(){
    return this->age;
}
QString Member::getDob(){
    return this->dob;
}
QString Member::getEmail(){
    return this->email;
}
QString Member::getMobileNum(){
    return this->mobileNum;
}
void Member::setMemberID(QString id){
    this->memberId = id;
}
void Member::setName(QString name){
    this->name = name;
}
void Member::setAge(int age){
    this->age = age;
}
void Member::setDob(QString dob){
    this->dob = dob;
}
void Member::setEmail(QString email){
    this->email = email;
}
void Member::setMobileNum(QString num){
    this->mobileNum = num;
}
