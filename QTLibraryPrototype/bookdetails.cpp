#include "bookdetails.h"
#include "ui_bookdetails.h"

bookdetails::bookdetails(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bookdetails)
{
    ui->setupUi(this);
}

bookdetails::~bookdetails()
{
    delete ui;
}
