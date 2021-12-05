#include "admineditcatalogue.h"
#include "ui_admineditcatalogue.h"
#include "QMessageBox"
#include "QDebug"


adminEditCatalogue::adminEditCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Add Book");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    QPixmap back(":/resources/images/backIcon.png");
    ui->backIcon->setPixmap(back.scaled(40, 40, Qt::KeepAspectRatio));
}

adminEditCatalogue::~adminEditCatalogue()
{
    delete ui;
}

void adminEditCatalogue::on_pushButton_clicked()
{

}

//adding books to database
void adminEditCatalogue::on_confirmBookDetails_clicked()
{    
    Book book;

    book.setBookName(ui->bookTitle->text());
    book.setGenre(ui->bookGenre->text());
    book.setBookCopies(ui->bookCopies->text().toInt());
    book.setBookImageFilePath(filePath);
    book.setAuthorName(ui->bookAuthor->text());
    book.setPubName(ui->bookPublisher->text());
    book.setBookDescription(ui->textEdit->toPlainText());
    book.setBookid(systemlibrary.generateID(4));

    systemlibrary.addBook(book);
    QMessageBox::information(this,"Book Created","You have now created " + ui->bookTitle->text() + " and added it to the catalogue");

    //setting line edits back to blank
    ui->bookTitle->setText("");
    ui->bookGenre->setText("");
    ui->bookCopies->setText("");
    ui->bookAuthor->setText("");
    ui->bookPublisher->setText("");
    ui->textEdit->setText("");
    emit openadminEditCatalogue();
    hide();
}


void adminEditCatalogue::on_backBtn_clicked()
{
    close();
}


void adminEditCatalogue::on_selectedImage_3_activated(int index)
{
    if(index == 0){
        filePath = ":/resources/images/placeholderImg1.jpg";
    }
    else if(index == 1){
        filePath = ":/resources/images/placeholderImg2.jpg";
    }
    else if (index == 2){
        filePath = ":/resources/images/testImage3.jfif";
    }
}

