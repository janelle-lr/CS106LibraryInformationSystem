#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //for database
    sysLib->buildDatabase();

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    hide();
    bookDetails = new BookDetails(this);
    connect(bookDetails, SIGNAL(openBookDetails()), this, SLOT(openLogin())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    bookDetails->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginPushButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    bool login = sysLib->checkAdminAccount(password,username);

    hide();
    bookDetails = new BookDetails(this);
    connect(bookDetails, SIGNAL(openBookDetails()), this, SLOT(openLogin())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    bookDetails->show();
}

