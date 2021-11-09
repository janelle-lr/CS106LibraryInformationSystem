#include "bookdetails.h"
#include "ui_bookdetails.h"

BookDetails::BookDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BookDetails)
{
    ui->setupUi(this);

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));
}

BookDetails::~BookDetails()
{
    delete ui;
}


void BookDetails::on_reservePushButton_clicked()
{

}

