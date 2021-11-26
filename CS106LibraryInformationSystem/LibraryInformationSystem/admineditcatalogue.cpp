#include "admineditcatalogue.h"
#include "ui_admineditcatalogue.h"
#include "QMessageBox"
#include "QDebug"


adminEditCatalogue::adminEditCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Admin Page");

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    QPixmap img(":/resources/images/backIcon.png");
    ui->backIcon->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));
}

adminEditCatalogue::~adminEditCatalogue()
{
    delete ui;
}

void adminEditCatalogue::on_pushButton_clicked()
{

}


void adminEditCatalogue::on_selectedImage_activated(const QString &arg1)
{
    if(arg1 == "Image 1"){
        qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/50shadesofGray.png";
        qDebug() << filePath;
    }
    else if(arg1 == "Image 2"){
        qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/another50shadesofgray.png";
        qDebug() << filePath;
    }
    else if (arg1 == "Image 3"){
        qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/pomegranates.png";
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

// THIS ONE WORKS THE OTHER ONE IS CLAPPED LIKE SO FUCKN CLAPPED DONT USE THAT OTHER ONE

void adminEditCatalogue::on_selectedImage_3_activated(const QString &arg1)
{
    if(arg1 == "Image 1"){
        qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/50shadesofGray.png";
        qDebug() << filePath;
    }
    else if(arg1 == "Image 2"){
        qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/another50shadesofgray.png";
        qDebug() << filePath;
    }
    else if (arg1 == "Image 3"){
        qDebug() << "Image 3 has been selected";
        filePath = ":/resources/images/pomegranates.png";
        qDebug() << filePath;
    }
}

