#include "loanedbooknotification.h"
#include "ui_loanedbooknotification.h"

LoanedBookNotification::LoanedBookNotification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoanedBookNotification)
{
    ui->setupUi(this);
}

LoanedBookNotification::~LoanedBookNotification()
{
    delete ui;
}

void LoanedBookNotification::setMemberID(QString id){
    this->memberID = id;
    QVector<Book> book = sysLib.getAllBooks();
    QVector<BookItem> bookItem = sysLib.getAllBookItem();
    QVector<NotificationLog> log = sysLib.getNotificationLog();
    QString bookDate, expDate;
    for(int i = 0; i < log.size(); i++){
        if(log[i].getMemberID() == memberID){
            if(log[i].getnotificationType() == "@Loaned" && log[i].getstatus() == false){
                QString bookName,author;
                for(auto bookElement: book){
                    if(log[i].getbookID() == bookElement.getBookId()){
                        bookName = bookElement.getBookName();
                        author = bookElement.getAuthorName();
                        log[i].setstatus(true);
                        sysLib.updateLogs(log);
                    }
                }
                for(auto bookItemElement: bookItem){
                    if(bookItemElement.getBookItem_BookID() == log[i].getbookID() && bookItemElement.getBookItem_MemberID() == memberID && bookItemElement.getBookReturnedDate() == "n/a"){
                        bookDate = bookItemElement.getBookDate();
                        expDate = bookItemElement.getExpiryDate();
                    }

                }
                ui->listWidget->addItem("\nBook Name: " + bookName + "\nAuthor name: " + author + "\nBook Date: " + bookDate + "\nBook Expiry Date: " + expDate);
            }
        }
    }
}
