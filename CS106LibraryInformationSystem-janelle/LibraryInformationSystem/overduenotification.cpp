#include "overduenotification.h"
#include "ui_overduenotification.h"

OverdueNotification::OverdueNotification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OverdueNotification)
{
    ui->setupUi(this);

    //ui->listWidget->addItem(sysLib.getAvailPreBookDate("123"));
}

OverdueNotification::~OverdueNotification()
{
    delete ui;
}

void OverdueNotification::setMemberID(QString memberID){
   this->memberID = memberID;

    QString loanedDate;
    QString dueDate;
    QString bookName,author;
    QVector<Book> book = sysLib.getAllBooks();
    QVector<BookItem> bookItem = sysLib.getAllBookItem();
    QStringList dueList = sysLib.getNearbyDueDateBooks(memberID);

    for(int i = 0; i < dueList.size(); i++){
        for(int x = 0; x < book.size(); x++){
            if(dueList[i] == book[x].getBookId()){
                for(auto bookItemElement: bookItem){
                    if(bookItemElement.getBookItem_BookID() == book[x].getBookId()){
                        loanedDate = bookItemElement.getBookDate();
                        dueDate = bookItemElement.getExpiryDate();
                        bookName = book[x].getBookName();
                        author = book[x].getAuthorName();
                    }
                }
                //break;
            }
        }
        ui->listWidget->addItem("\nBook Title: " + bookName + "\n" + "Author: " + author + "\n" + "Booked Date: " + loanedDate +
                                "\n" + "Expiry Date: " + dueDate + "\n");
    }
}
