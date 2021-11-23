#include "admineditbook.h"
#include "ui_admineditbook.h"
#include <QMessageBox>

adminEditBook::adminEditBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditBook)
{
    ui->setupUi(this);
}

adminEditBook::~adminEditBook()
{
    delete ui;
}

void adminEditBook::setNum(int num) {
    this->numId = num;

    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    QPixmap bookImage(book[num].getBookImageFilePath());
    ui->bookImage_2->setPixmap(bookImage.scaled(161, 211, Qt::KeepAspectRatio));
    ui->titleLineEdit_2->setText(book[num].getBookName());
    ui->authorLineEdit_2->setText(book[num].getAuthorName());
    ui->genreLineEdit_2->setText(book[num].getGenre());
    ui->publisherLineEdit_2->setText(book[num].getPubName());
    ui->descriptionLineEdit->setText(book[num].getBookDescription());
}

//when save is clicked the edits will be saved
void adminEditBook::on_savePushButton_2_clicked()
{
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    for (int i = 0; i < book.size(); i++) {
        if(numId == i) {
        book[i].setBookName(ui->titleLineEdit_2->text());
        book[i].setGenre(ui->genreLineEdit_2->text());
        book[i].setAuthorName(ui->authorLineEdit_2->text());
        book[i].setPubName(ui->publisherLineEdit_2->text());
        book[i].setBookDescription(ui->descriptionLineEdit->text());
        break;
        }
    }
    sysLib.updateAllBookDetails(book);//passing edited book details to csv file
    QMessageBox::information(this,"Edit Book Details", "Book edits have been successfully saved.");
    hide();

}

