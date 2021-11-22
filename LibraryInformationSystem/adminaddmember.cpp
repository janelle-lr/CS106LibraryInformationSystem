#include "adminaddmember.h"
#include "ui_adminaddmember.h"
#include <QMessageBox>

adminAddMember::adminAddMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminAddMember)
{
    ui->setupUi(this);
}

adminAddMember::~adminAddMember()
{
    delete ui;
}


void adminAddMember::on_adddMemberButton_clicked()
{
    Member member;

    member.setMemberID(sysLib->generateID(2));
    member.setAccId(sysLib->generateID(3));
    member.setName(ui->firstNameLineEdit->text() + ui->lastNameLineEdit->text());
    member.setEmail(ui->emailLineEdit->text());
    member.setPassword(ui->passwordLineEdit->text());

    sysLib->createMember(member);


    QMessageBox::information(this,"Member Created","You have now created User " + ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text());

    //setting line edits back to blank
//    ui->bookTitle->setText("");
//    ui->bookGenre->setText("");
//    ui->bookCopies->setText("");
//    ui->bookAuthor->setText("");
//    ui->bookPublisher->setText("");
//    ui->bookDescription->setText("");

}

