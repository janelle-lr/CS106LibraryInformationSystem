#include "admineditcatalogue.h"
#include "ui_admineditcatalogue.h"
#include "QMessageBox"
#include "QDebug"


adminEditCatalogue::adminEditCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Add New Book Page");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    QPixmap img(":/resources/images/backIcon.png");
    ui->backIcon_2->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

}

adminEditCatalogue::~adminEditCatalogue()
{
    delete ui;
}

// IMAGE RESOLUTION = 448 X 678
void adminEditCatalogue::on_selectedImage_activated(const QString &arg1)
{
    if(arg1 == "Image 1"){
        qDebug() << "Image 1 has been selected";
        filePath = ":/resources/images/50shadesofGray.png";
        qDebug() << filePath;
    }
    else if(arg1 == "Image 2"){
        qDebug() << "Image 2 has been selected";
        filePath = ":/resources/images/gold cats.png";
        qDebug() << filePath;
    }
    else if (arg1 == "Image 3"){
        qDebug() << "Image 3 has been selected";
        filePath = ":/resources/images/bloodCottage.png";
        qDebug() << filePath;
    }
}

//adding books to database
void adminEditCatalogue::on_confirmBookDetails_clicked()
{    
    Book book;

    book.setBookName(ui->bookTitle_3->text());
    book.setGenre(ui->bookGenre_3->text());
    book.setBookCopies(ui->bookCopies_3->text().toInt());
    book.setBookImageFilePath(filePath);
    book.setAuthorName(ui->bookAuthor_3->text());
    book.setPubName(ui->bookPublisher_3->text());
    book.setBookDescription(ui->bookDescription_3->text());
    book.setBookid(systemlibrary.generateID(4));

    systemlibrary.addBook(book);
    qDebug() << filePath;
    QMessageBox::information(this,"Book Created","You have now created " + ui->bookTitle_3->text() + " and added it to the catalogue");

    //setting line edits back to blank
    ui->bookTitle_3->setText("");
    ui->bookGenre_3->setText("");
    ui->bookCopies_3->setText("");
    ui->bookAuthor_3->setText("");
    ui->bookPublisher_3->setText("");
    ui->bookDescription_3->setText("");
}

