#include "adminaddmember.h"
#include "ui_adminaddmember.h"
#include <QMessageBox>

adminAddMember::adminAddMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminAddMember)
{
    ui->setupUi(this);

    setWindowTitle("BiblioThicc Libraries - Add New Member");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    //for icons in UI
    QPixmap img2(":/resources/images/backIcon.png");
    ui->memberIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    accId = sysLib->generateID(3);
    userID = sysLib->generateID(2);
    ui->usernameLineEdit->setText(userID);

}

adminAddMember::~adminAddMember()
{
    delete ui;
}

void adminAddMember::addMember(QString accId,QString userID) {
    qDebug() << "iam in on_addMember_clicked";
    Member member;

    member.setMemberID(userID);
    member.setAccId(accId);
    member.setName(ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text());
    int age = sysLib->calculateAge((ui->dateEdit->date()));
    member.setDob(ui->dateEdit->text());
    member.setAge(age);
    member.setMobileNum(ui->mobileNumLineEdit->text());
    member.setEmail(ui->emailLineEdit->text());
    member.setPassword(ui->passwordLineEdit->text());

    sysLib->createMember(member);

    QMessageBox::information(this,"Member Created","You have now created User " + ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text());
}

void adminAddMember::on_addMember_clicked()
{
       addMember(accId,userID);
       emit openadminAddMember();
       hide();
}

void adminAddMember::on_memberBtn_clicked()
{
    emit openadminAddMember();
    hide();
}

