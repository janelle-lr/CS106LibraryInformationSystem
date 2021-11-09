#include "membercatalogue.h"
#include "ui_membercatalogue.h"

memberCatalogue::memberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberCatalogue)
{
    ui->setupUi(this);

    //for logo in UI
        QPixmap logo(":/resources/images/bblLogo.png");
        ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

}

memberCatalogue::~memberCatalogue()
{
    delete ui;
}
