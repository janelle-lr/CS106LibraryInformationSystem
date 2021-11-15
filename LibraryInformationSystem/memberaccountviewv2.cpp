#include "memberaccountviewv2.h"
#include "ui_memberaccountviewv2.h"

memberAccountViewV2::memberAccountViewV2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::memberAccountViewV2)
{
    ui->setupUi(this);
    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));
}

memberAccountViewV2::~memberAccountViewV2()
{
    delete ui;
}


void memberAccountViewV2::on_viewCatalogue_clicked()
{
    emit openmemberAccountView();
    hide();
}

