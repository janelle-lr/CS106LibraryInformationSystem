#include "admineditbook.h"
#include "ui_admineditbook.h"
#include <QMessageBox>

adminEditBook::adminEditBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditBook)
{
    ui->setupUi(this);

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    QPixmap back(":/resources/images/backIcon.png");
    ui->backIcon_7->setPixmap(back.scaled(40, 40, Qt::KeepAspectRatio));
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
    ui->bookImage_8->setPixmap(bookImage.scaled(161, 211, Qt::KeepAspectRatio));
    ui->titleLineEdit_8->setText(book[num].getBookName());
    ui->authorLineEdit_8->setText(book[num].getAuthorName());
    ui->genreLineEdit_8->setText(book[num].getGenre());
    ui->publisherLineEdit_8->setText(book[num].getPubName());
    ui->descriptionLineEdit_7->setText(book[num].getBookDescription());
}

//when save is clicked the edits will be saved
void adminEditBook::on_savePushButton_clicked()
{
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    for (int i = 0; i < book.size(); i++) {
        if(numId == i) {
        book[i].setBookName(ui->titleLineEdit_8->text());
        book[i].setGenre(ui->genreLineEdit_8->text());
        book[i].setAuthorName(ui->authorLineEdit_8->text());
        book[i].setPubName(ui->publisherLineEdit_8->text());
        book[i].setBookDescription(ui->descriptionLineEdit_7->text());
        break;
        }
    }
    sysLib.updateAllBookDetails(book);//passing edited book details to csv file
    QMessageBox::information(this,"Edit Book Details", "Book edits have been successfully saved.");
    emit showadminEditBook();
    hide();
}

