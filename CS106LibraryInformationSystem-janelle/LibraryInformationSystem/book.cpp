#include "book.h"

Book::Book()
{
    QString defStr = "default";
    this->bookId = defStr;
    this->name = defStr;
    this->genre = defStr;
    this->imageFilePath = ":/resources/images/placeholderImg1.jpg";
    this->bookDescription = defStr;
    this->inStock = 0;
    this->bookCopies = 0;
    this->availStatus = 0;
}
QString Book::getBookId(){
    return this->bookId;
}
QString Book::getBookName(){
    return this->name;
}
QString Book::getGenre(){
    return this->genre;
}
QString Book::getBookImageFilePath(){
    return this->imageFilePath;
}
QString Book::getBookDescription(){
    return this->bookDescription;
}
int Book::getStock(){
    return this->inStock;
}
int Book::getBookCopies(){
    return this->bookCopies;
}
bool Book::getAvailStatus(){
    return this->availStatus;
}
void Book::setBookid(QString id){
    this->bookId = id;
}
void Book::setBookName(QString name){
    this->name = name;
}
void Book::setGenre(QString genre){
    this->genre = genre;
}
void Book::setBookDescription(QString description){
    this->bookDescription = description;
}
void Book::setStock(int stock){
    this->inStock = stock;
}
void Book::setBookCopies(int num){
    this->bookCopies = num;
}
void Book::setAvailStatus(bool status){
    this->availStatus = status;
}
void Book::setBookImageFilePath(QString filePath){
    this->imageFilePath = filePath;
}
