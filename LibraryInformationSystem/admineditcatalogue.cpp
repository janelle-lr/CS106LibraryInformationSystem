#include "admineditcatalogue.h"
#include "ui_admineditcatalogue.h"
#include "QMessageBox"
#include "QDebug"


adminEditCatalogue::adminEditCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Add Book Page");

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


void adminEditCatalogue::on_selectedImage_3_activated(const QString &arg1)
{
    if(arg1 == "Image 1"){
        //qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/gold cats.png";
        qDebug() << filePath;
    }
    else if(arg1 == "Image 2"){
        //qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/gold cats.png";
        qDebug() << filePath;
    }
    else if (arg1 == "Image 3"){
        filePath = ":/resources/images/gold cats.png";
        qDebug() << filePath;
    }
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
    book.setBookDescription(ui->bookDescription->text());
    book.setBookid(systemlibrary.generateID(4));

    systemlibrary.addBook(book);
    qDebug() << filePath;
    QMessageBox::information(this,"Book Created","You have now created " + ui->bookTitle->text() + " and added it to the catalogue");

    //setting line edits back to blank
    ui->bookTitle->setText("");
    ui->bookGenre->setText("");
    ui->bookCopies->setText("");
    ui->bookAuthor->setText("");
    ui->bookPublisher->setText("");
    ui->bookDescription->setText("");
}

