#include "systemlibrary.h"

SystemLibrary::SystemLibrary(){}
//This function generates a unique ID
QString SystemLibrary::generateID(int id){
    int randNum = 0, randLetter1, randLetter2;
    QString uniqueID;

    do{
        srand(time(0));
        randNum = (rand() % 101) + 100;//generates random number between 100-200
        randLetter1 = (rand() % 26) + 65;//generates random number between 65-90 which is then converted to char A-Z
        randLetter2 = (rand() % 26) + 65;

        switch (id) {
        case 1://Unique ID for Admin
            uniqueID = "210" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 2://Unique ID for Member
            uniqueID = "220" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 3://Unique ID for Account
            uniqueID = "230" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 4://Unique ID for Book
            uniqueID = "310" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 5://Unique ID for Author
            uniqueID = "320" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 6://Unique ID for Publisher
            uniqueID = "330" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 7://Unique ID for Book item
            uniqueID = "410" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        case 8://Unique ID for Pre order
            uniqueID = "420" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
            break;
        default:
            break;
        }
    }while(!isIdUnique(uniqueID,id));

    return uniqueID;
}

//This function calculates the age of the person
int SystemLibrary::calculateAge(QDate date){
    QDate currentDate = QDate::currentDate();
    //year, month, day
    //QDate birthDay = QDate(year,month,day);
    //QDate daysBetween
    int age = currentDate.year() - date.year();

    return age;
}

//This function checks if date is valid
bool SystemLibrary::isDateValid(QDate date){
    bool isValid = false;
    //year, month, day
    //QDate date = QDate(year,month,day);
    //QDate daysBetween
    if(date.isValid())
        isValid = true;
    return isValid;
}
//This function checks if password has meet the requirements i.e 8 characters long with upper and lower cases characters and special characters
bool SystemLibrary::isPasswordValid(QString pass){
    int strLength = 0, numUniqueChar = 0, numCapLetters = 0, numSmallLetters = 0, nums = 0;

        strLength = pass.length();
        for (int i = 0; i < pass.length(); i++) {
            if (pass[i].isUpper())//if char is upper increment
                numCapLetters++;
            if (!pass[i].isLetter())//if char is a symbol increment
                numUniqueChar++;
            if (pass[i].isDigit())//if char is a number increment
                nums++;
            if (pass[i].isLower())//if char is lower increment
                numSmallLetters++;
        }
        if (strLength >= 8 && numUniqueChar >= 1 && numCapLetters >= 1 && numSmallLetters >= 1 && nums >= 1)
            return true;
        else
            return false;
}
