#include "admineditaccount.h"
#include "ui_admineditaccount.h"

adminEditAccount::adminEditAccount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminEditAccount)
{
    ui->setupUi(this);
}

adminEditAccount::~adminEditAccount()
{
    delete ui;
}
