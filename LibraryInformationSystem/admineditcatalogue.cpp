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
    if(arg1 == "Image 1"){
        //qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/testImage.jpg";
    }
    else if(arg1 == "Image 2"){
        //qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/testImage2.jpg";
    }
    else if (arg1 == "Image 3"){
        filePath = ":/resources/images/testImage3.jpg";
    }
}

void adminEditCatalogue::on_pushButton_clicked()
{

}


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

    QMessageBox::warning(this,"Book Created","You have now created" + ui->bookTitle->text() + " and added it to the catalogue");
}

