#include "bookitem.h"

BookItem::BookItem()
{
    QString defStr = "default";
    this->bookItemID = defStr;
    this->bookItemMemberID = defStr;
    this->bookItemBookID = defStr;
    this->bookItemBookDate = defStr;
    this->bookExpiryDate = defStr;
    this->bookReturnedDate = "n/a";
    this->userAccess = 0;
}
//getters
QString BookItem::getBookItem_ID(){
    return this->bookItemID;
}
QString BookItem::getBookItem_MemberID(){
    return this->bookItemMemberID;
}
QString BookItem::getBookItem_BookID(){
    return this->bookItemBookID;
}
QString BookItem::getBookDate(){
    return this->bookItemBookDate;
}
QString BookItem::getExpiryDate(){
    return this->bookExpiryDate;
}
QString BookItem::getBookReturnedDate(){
    return this->bookReturnedDate;
}
bool BookItem::getUserAccess(){
    return this->userAccess;
}
//setters
void BookItem::setBookItemID(QString id){
    this->bookItemID = id;
}
void BookItem::setBookItem_MemberID(QString memID){
    this->bookItemMemberID = memID;
}
void BookItem::setBookItem_BookID(QString bookID){
    this->bookItemBookID = bookID;
}
void BookItem::setBookDate(QString date){
    this->bookItemBookDate = date;
}
void BookItem::setExpiryDate(QString xDate){
    this->bookExpiryDate = xDate;
}
void BookItem::setBookReturnedDate(QString date){
    this->bookReturnedDate = date;
}
void BookItem::setUserAccess(bool access){
    this->userAccess = access;
}
