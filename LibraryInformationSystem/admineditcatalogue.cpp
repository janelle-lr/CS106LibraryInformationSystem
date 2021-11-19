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
}

adminEditCatalogue::~adminEditCatalogue()
{
    delete ui;
}

void adminEditCatalogue::on_comboBox_activated(const QString &arg1)
{
    qDebug() << "\niam in on_comboBox_activated\n arg1 = " << arg1;
    if(arg1 == "Image 1"){
        //qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/testImage.jpg";
        qDebug() << filePath;
    }
    else if(arg1 == "Image 2"){
        //qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/testImage2.jpg";
        qDebug() << filePath;
    }
    else if (arg1 == "Image 3"){
        filePath = ":/resources/images/testImage3.jpg";
        qDebug() << filePath;
    }
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

