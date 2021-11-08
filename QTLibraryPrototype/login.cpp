#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap logo("Group 3 (1).png");
    ui->label_4->setPixmap(logo.scaled(552,74, Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_5_clicked()
{
    hide();
    bookDetails = new bookdetails(this);//pointer = new classname(this);
    connect(bookDetails, SIGNAL(openBookDetails()), this, SLOT(openLogin()));
    bookDetails->show();
}

