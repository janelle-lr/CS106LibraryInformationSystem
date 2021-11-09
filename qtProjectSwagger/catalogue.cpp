#include "catalogue.h"
#include "ui_catalogue.h"
#include "useraccount.h"
#include "mainwindow.h"
#include <QMessageBox>

#include <QDebug>
Catalogue::Catalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Catalogue)
{
    ui->setupUi(this);
    setWindowTitle("Catalogue");

    //logo image
    QPixmap Img(":/MicrosoftTeams-image.png");
    ui->img->setPixmap(Img.scaled(600,600, Qt::KeepAspectRatio));

    //book images
    QPixmap Img_2(":/50shadesofGray.png");
    ui->img_2->setPixmap(Img_2.scaled(250,200, Qt::KeepAspectRatio));

    QPixmap Img_3(":/another50shadesofgray.png");
    ui->img_3->setPixmap(Img_3.scaled(250,200, Qt::KeepAspectRatio));

    QPixmap Img_4(":/bloodCottage.png");
    ui->img_4->setPixmap(Img_4.scaled(250,200, Qt::KeepAspectRatio));

    QPixmap Img_5(":/duneBookCover.png");
    ui->img_5->setPixmap(Img_5.scaled(250,200, Qt::KeepAspectRatio));

    QPixmap Img_6(":/gold cats.png");
    ui->img_6->setPixmap(Img_6.scaled(250,200, Qt::KeepAspectRatio));
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


// SIGN OUT BUTTON PRESSED
void Catalogue::on_actionSign_Out_triggered()
{
    QMessageBox::warning(this,"Later pussy","fuck outta here");
   logout();
}

void Catalogue::logout(){
    qDebug() << "Test";
}
