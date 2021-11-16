#include "memberaccountview.h"
#include "ui_memberaccountview.h"


memberAccountView::memberAccountView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberAccountView)
{
    ui->setupUi(this);
    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    //for database
    sysLib->buildDatabase();
}

memberAccountView::~memberAccountView()
{
    delete ui;
}

void memberAccountView::on_actionView_Catalogue_triggered()
{
    hide();
    emit showMemberAccWindow();
}

