#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("BiblioThicc Libraries - Log In");

    //for database
    sysLib->buildDatabase();
    sysLib->checkLoanedBooks();
    sysLib->checkPreorders();

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

//    ui->usernameLineEdit->setText("220199UF");
//    ui->passwordLineEdit->setText("kimkardashian");

}

MainWindow::~MainWindow()
{
    delete ui;
}

// check if input details are inside the accounts database
void MainWindow::on_loginPushButton_clicked()
{
    QString compareId;
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    bool login = sysLib->checkAccount(password,username);
    qDebug() << login;
    if(sysLib->checkAccount(username,password)){
        QMessageBox::information(this,"Thank You for logging in", "User, " + username + " has logged in.");
        hide();
        //qDebug() << subString;
        if(username.left(3) == "210"){
            //qDebug() << "admin has logged in";
            admincatalogue = new adminCatalogue(this);
            connect(admincatalogue, SIGNAL(showMainWindow()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
            admincatalogue->show();

        }else if(username.left(3) == "220"){
            qDebug() << "member has logged in";
            membercatalogue = new memberCatalogue(this);
            membercatalogue->setAccID(username);
            connect(membercatalogue, SIGNAL(showMainWindow()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
            membercatalogue->show();
        }
    }else{
        QMessageBox::warning(this,"Failed Log in Attempt","Sorry wrong username or password");
    }

    ui->usernameLineEdit->setText("");
    ui->passwordLineEdit->setText("");
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
