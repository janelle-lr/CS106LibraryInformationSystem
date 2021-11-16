#include "membercataloguev2.h"
#include "ui_membercataloguev2.h"

memberCatalogueV2::memberCatalogueV2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberCatalogueV2)
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

memberCatalogueV2::~memberCatalogueV2()
{
    delete ui;

}

void memberCatalogueV2::on_viewAccount_clicked()
{
    hide();
//    memberaccountview = new memberAccountView(this);
//    connect(memberaccountview, SIGNAL(openmemberAccountView()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
//    memberaccountview->show();
}

// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
// PLEASE PLEASE DO NOT USE HOLY SHIT PLSPLSPSLPSLPSLS FUCK MY LIFE EVERYTHING WILL GO TO SHIT IF YOU DO
