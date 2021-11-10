#include "useraccount.h"
#include "catalogue.h"
#include "ui_useraccount.h"

userAccount::userAccount(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::userAccount)
{
    ui->setupUi(this);
    QPixmap Img(":/MicrosoftTeams-image.png");
    ui->img->setPixmap(Img.scaled(600,600, Qt::KeepAspectRatio));
}

userAccount::~userAccount()
{
    delete ui;
}


