#include "catalogue.h"
#include "ui_catalogue.h"
#include "useraccount.h"
#include <QMessageBox>

Catalogue::Catalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);

    QPixmap Img(":/MicrosoftTeams-image.png");
    ui->img->setPixmap(Img.scaled(600,600, Qt::KeepAspectRatio));
}

Catalogue::~Catalogue()
{
    delete ui;
}

void Catalogue::on_actionView_Account_triggered()
{
    QMessageBox::information(this,"NOW VIEWING ACCOUNT","This you, viewing your account");
    useraccount = new userAccount(this);
    hide();
    useraccount->show();

}

