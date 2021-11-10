#include "membercatalogue.h"
#include "ui_membercatalogue.h"

memberCatalogue::memberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("Catalogue");

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));


    //book images for the hardcoded books for this catalogue
    QPixmap Img(":/resources/images/50shadesofGray.png");
    ui->img_2->setPixmap(Img.scaled(450, 200, Qt::KeepAspectRatio));

    QPixmap Img_2(":/resources/images/another50shadesofgray.png");
    ui->img_3->setPixmap(Img_2.scaled(450, 200, Qt::KeepAspectRatio));

    QPixmap Img_3(":/resources/images/bloodCottage.png");
    ui->img_4->setPixmap(Img_3.scaled(450, 200, Qt::KeepAspectRatio));

    QPixmap Img_4(":/resources/images/duneBookCover.png");
    ui->img_5->setPixmap(Img_4.scaled(450, 200, Qt::KeepAspectRatio));

}

memberCatalogue::~memberCatalogue()
{
    delete ui;
}
