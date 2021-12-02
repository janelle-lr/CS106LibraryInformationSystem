#include "returnbooksnotification.h"
#include "ui_returnbooksnotification.h"

ReturnBooksNotification::ReturnBooksNotification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnBooksNotification)
{
    ui->setupUi(this);
}

ReturnBooksNotification::~ReturnBooksNotification()
{
    delete ui;
}

void ReturnBooksNotification::setMemberID(QString id){
    this->memberID = id;
    QVector<Book> book = sysLib.getAllBooks();
    QVector<BookItem> bookItem = sysLib.getAllBookItem();
    QVector<NotificationLog> log = sysLib.getNotificationLog();
    for(int i = 0; i < log.size(); i++){
        if(log[i].getMemberID() == memberID){
            if(log[i].getnotificationType() == "@Returned" && log[i].getstatus() == false){
                QString bookName,author;
                for(auto bookElement: book){
                    if(log[i].getbookID() == bookElement.getBookId()){
                        bookName = bookElement.getBookName();
                        author = bookElement.getAuthorName();
                        log[i].setstatus(true);
                        sysLib.updateLogs(log);
                    }
                }
                ui->listWidget->addItem("\nBook Name: " + bookName + "\nAuthor name: " + author + "\nBook access has expired\n");
            }
        }
    }
    if(log.size() == 0){
       hide();
    }
}
