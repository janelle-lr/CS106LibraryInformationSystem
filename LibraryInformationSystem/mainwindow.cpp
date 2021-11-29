#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // pls remember to delete this before handing it in
    setWindowTitle("BiblioThicc Libraries - Log In");

    //for database
    sysLib->buildDatabase();
    sysLib->checkLoanedBooks();
    sysLib->checkPreorders();

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    ui->usernameLineEdit->setText("220199UF");
    ui->passwordLineEdit->setText("kimkardashian");

    // VVVVVVVVVVVVVVVVVVVVV ADMIN SCREENS VVVVVVVVVVVVVVVVVVVVVVVVVV
    //comment or delete after, this is only for testing
    //  thanks, Megatron
    //    hide();
    //    admineditcatalogue = new adminEditCatalogue(this);
    //    connect(admineditcatalogue, SIGNAL(openadminEditCatalogue()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    //    admineditcatalogue->show();

    //    hide();
    //    adminaddmember = new adminAddMember(this);
    //    connect(adminaddmember, SIGNAL(openadminAddMember()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    //    adminaddmember->show();

    hide();
    admincatalogue = new adminCatalogue(this);
    connect(admincatalogue, SIGNAL(openadminCatalogue()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    admincatalogue->show();

    //    hide();
    //    admineditbook = new adminEditBook(this);
    //    connect(admineditbook, SIGNAL(openadminEditBook()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    //    admineditbook->show();

        hide();
        adminmembercatalogue = new adminMemberCatalogue(this);
        connect(adminmembercatalogue, SIGNAL(openadminMemberCatalogue()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
        adminmembercatalogue->show();

    //    hide();
    //    adminmemberedit = new adminMemberEdit(this);
    //    connect(adminmemberedit, SIGNAL(openadminMemberEdit()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    //    adminmemberedit->show();

    // VVVVVVVVVVVVVVVVVVVVV MEMBER SCREENS VVVVVVVVVVVVVVVVVVVVVVVVVV

//    hide();
//    memberaccountview = new memberAccountView(this);
//    connect(memberaccountview, SIGNAL(openmemberAccountView()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
//    memberaccountview->show();



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
            connect(membercatalogue, SIGNAL(openmemberCatalogue()), this, SLOT(openMainWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
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

