#include "bookdetails.h"
#include "ui_bookdetails.h"

BookDetails::BookDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookDetails)
{
    ui->setupUi(this);

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    QPixmap back(":/resources/images/backIcon.png");
    ui->backIcon->setPixmap(back.scaled(40, 40, Qt::KeepAspectRatio));

    ui->description->setWordWrap(true);
    ui->titleLabel->setWordWrap(true);
}

BookDetails::~BookDetails()
{
    delete ui;
}

void BookDetails::setNum(int num, QString userId) {
    this->numId = num;

    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    QString stockString = "";
    int stock = book[num].getStock();
    stockString = QString::number(stock);

    QPixmap bookImage(book[num].getBookImageFilePath());
    ui->bookImage->setPixmap(bookImage.scaled(161, 211, Qt::KeepAspectRatio));
    ui->titleLabel->setText(book[num].getBookName());
    ui->authorLabel->setText(book[num].getAuthorName());
    ui->stockLabel->setText(stockString);
    ui->genre->setText(book[num].getGenre());
    ui->publisher->setText(book[num].getPubName());
    ui->description->setText(book[num].getBookDescription());

    if (sysLib.isLoaned(userId, book[num].getBookId())) {
        ui->issueButton->setText("Return");
        //break;
    }
    else if (!sysLib.isPreBook(userId, book[num].getBookId())) {
        for (int k = 0; k < book.size(); k++){
            if (book[k].getStock() == 0 && book[k].getAvailStatus() == 0 && book[k].getBookId() == book[num].getBookId()) {
                ui->issueButton->setText("Reserve");
                break;
            }
            else
                ui->issueButton->setText("Loan");
        }

    }
    else if (sysLib.isPreBook(userId, book[num].getBookId())) {
        ui->issueButton->setText("Reserved");
    }
    else {
        ui->issueButton->setText("Loan");
    }

}

void BookDetails::on_issueButton_clicked()
{

}


void BookDetails::on_backBtn_clicked()
{
    emit showCatalogue();
    hide();
}

