#include "preorderbook.h"

PreOrderBook::PreOrderBook()
{
    QString defStr = "default";
    this->preBookID = defStr;
    this->preBook_MemberID = defStr;
    this->preBook_BookID = defStr;
    this->date = defStr;
    this->isBooked = 0;
}
//getters
QString PreOrderBook::getPreBookID(){
    return this->preBookID;
}
QString PreOrderBook::getPreBook_MemberID(){
    return this->preBook_MemberID;
}
QString PreOrderBook::getPreBook_BookID(){
    return this->preBook_BookID;
}
QString PreOrderBook::getPreBookDate(){
    return this->date;
}
bool PreOrderBook::getPreOrderStatus(){
    return this->isBooked;
}
//setters
void PreOrderBook::setPreBookID(QString id){
    this->preBookID = id;
}
void PreOrderBook::setPreBook_MemberID(QString id){
    this->preBook_MemberID = id;
}
void PreOrderBook::setPreBook_BookID(QString id){
    this->preBook_BookID = id;
}
void PreOrderBook::setPreBookDate(QString date){
    this->date = date;
}
void PreOrderBook::setPreOrderStatus(bool status){
    this->isBooked = status;
}
