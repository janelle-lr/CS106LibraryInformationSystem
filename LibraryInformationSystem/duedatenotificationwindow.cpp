#include "duedatenotificationwindow.h"
#include "ui_duedatenotificationwindow.h"

DuedateNotificationWindow::DuedateNotificationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DuedateNotificationWindow)
{
    ui->setupUi(this);

    QString loanedDate;
    QString dueDate;

    QVector<Book> book = sysLib.getAllBooks();
    QVector<BookItem> bookItem = sysLib.getAllBookItem();
    QStringList dueList = sysLib.getNearbyDueDateBooks();
    for(auto dueElement: dueList){
        for(auto bookElement: book){
            if(dueElement == bookElement.getBookId()){
                for(auto bookItemElement: bookItem){
                    if(bookItemElement.getBookItem_BookID() == bookElement.getBookId()){
                        loanedDate = bookItemElement.getBookDate();
                        dueDate = bookItemElement.getExpiryDate();
                    }
                }
                ui->listWidget->addItem("Book Title: " + bookElement.getBookName() + "\n" + "Author: " + bookElement.getAuthorName() + "\n" + "Booked Date: " + loanedDate +
                                        "\n" + "Expiry Date: " + dueDate + "\n");
            }
        }
    }
}

DuedateNotificationWindow::~DuedateNotificationWindow()
{
    delete ui;
}
