#include "adminbookdetails.h"
#include "ui_adminbookdetails.h"

AdminBookDetails::AdminBookDetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminBookDetails)
{
    ui->setupUi(this);
}

AdminBookDetails::~AdminBookDetails()
{
    delete ui;
}

void AdminBookDetails::on_savePushButton_clicked()
{
    QString title = ui->titleLineEdit->text();
    ui->authorLineEdit->setText(title);

}

