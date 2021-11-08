#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sysLib->buildDatabase();
    hide();
    login = new class login(this);
    connect(login, SIGNAL(openLogin()), this, SLOT(openMainWindow()));
    login->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    bool login = sysLib->checkAdminAccount(password,username);

    if(login){
        QMessageBox::information(this, "Log In", "Login successfully!");
    }else
        QMessageBox::warning(this, "Log In", "Invalid account!");

    qDebug() << login;

}

void MainWindow::on_pushButton_2_clicked()
{
    sysLib->buildDatabase();
}


void MainWindow::on_pushButton_3_clicked()
{
    QDate date = QDate::currentDate();
    QString id = sysLib->generateID(2);
    QString accID = sysLib->generateID(3);
    QString name = ui->lineEdit_Name->text();
    QString age =ui->lineEdit_Age->text();
    QString dob =ui->lineEdit_Dob->text();
    QString email =ui->lineEdit_Email->text();
    QString num =ui->lineEdit_MoNum->text();
    QString username =ui->lineEdit_Username->text();
    QString pass =ui->lineEdit_Password->text();
    QString vpass =ui->lineEdit_VerifyPass->text();

    if(pass == vpass){
        member.setMemberID(id);
        member.setAccId(accID);
        member.setName(name);
        member.setAge(age.toInt());
        member.setDob(dob);
        member.setEmail(email);
        member.setMobileNum(num);
        member.setPassword(pass);
        member.setDateCreated(date.toString("dd/MM/yyyy"));
        sysLib->createMember(member);
        QMessageBox::information(this,"Account Creation","Account created!");
    }else{
        QMessageBox::warning(this,"Warning","Password did not match");
        ui->lineEdit_Password->setText("");
        ui->lineEdit_VerifyPass->setText("");
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    QVector<Member> members;

    members = sysLib->getAllMemberDetails();

    for(int i = 0; i < members.size(); i++){
        qDebug() << members[i].getMemberId() << " " << members[i].getAccId() << " " << members[i].getName() << " " << members[i].getPassword() << " " << members[i].getDateCreated() << "\n";
    }

    members[1].setName("Sophia");

    sysLib->updateAllMemberDetails(members);

    members.clear();
    members = sysLib->getAllMemberDetails();

    for(int i = 0; i < members.size(); i++){
        qDebug() << members[i].getMemberId() << " " << members[i].getAccId() << " " << members[i].getName() << " " << members[i].getPassword() << " " << members[i].getDateCreated() << "\n";
    }
}


void MainWindow::on_pushButton_5_clicked()
{
    hide();
    login = new class login(this);
    connect(login, SIGNAL(openLogin()), this, SLOT(openMainWindow()));
    login->show();
}

