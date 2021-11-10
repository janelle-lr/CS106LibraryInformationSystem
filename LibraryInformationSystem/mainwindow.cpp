#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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
}

MainWindow::~MainWindow()
{
    delete ui;
}

// check if input details are inside the accounts database
void MainWindow::on_loginPushButton_clicked()
{
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();
    //ui->loginLabel->setText("lmao");
    bool login = sysLib->checkAccount(password,username);
    qDebug() << login;
    if(sysLib->checkAccount(username,password)){
        QMessageBox::information(this,"Thank You for logging in", "User, " + username + " has logged in.");
        hide();
        membercatalogue = new memberCatalogue(this);
        connect(membercatalogue, SIGNAL(openmemberCatalogue()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
        membercatalogue->show();
    }else{
        QMessageBox::warning(this,"Failed Log in Attempt","Sorry wrong username or password");
    }

}

// this is to change 'view password'
void MainWindow::on_checkBox_stateChanged(int arg1)
{
    switch(arg1){
    case 0:
        ui->passwordLineEdit->setEchoMode(QLineEdit::Password); //shows it as password
        break;
    case 2:
        ui->passwordLineEdit->setEchoMode(QLineEdit::Normal); //shows it as regular text
    }
}

