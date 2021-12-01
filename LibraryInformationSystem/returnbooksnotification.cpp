#include "returnbooksnotification.h"
#include "ui_returnbooksnotification.h"

ReturnBooksNotification::ReturnBooksNotification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReturnBooksNotification)
{
    ui->setupUi(this);
}

ReturnBooksNotification::~ReturnBooksNotification()
{
    delete ui;
}
