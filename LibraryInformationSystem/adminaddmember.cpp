#include "adminaddmember.h"
#include "ui_adminaddmember.h"
#include <QMessageBox>

adminAddMember::adminAddMember(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminAddMember)
{
    ui->setupUi(this);

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    //for icons in UI
    QPixmap img(":/resources/images/catalogue.png");
    ui->catalogueIcon->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/viewMembers.png");
    ui->memberIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

//    QPixmap img3(":/resources/images/account.png");
//    ui->accountIcon->setPixmap(img3.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img4(":/resources/images/uis_signout.png");
    ui->signoutIcon->setPixmap(img4.scaled(40, 40, Qt::KeepAspectRatio));


    QString accId = sysLib->generateID(3);
    ui->usernameLineEdit->setText(accId);
}

adminAddMember::~adminAddMember()
{
    delete ui;
}


//void adminAddMember::on_addMemberButton_clicked(QString accId)
//{
//    Member member;

////    QString accId = sysLib->generateID(3);

//    member.setMemberID(sysLib->generateID(2));
//    member.setAccId(accId);
//    member.setName(ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text());
//    int age = sysLib->calculateAge((ui->dateEdit->date()));
//    member.setDob(ui->dateEdit->text());
//    member.setAge(age);
//    member.setMobileNum(ui->mobileNumLineEdit->text());
//    member.setEmail(ui->emailLineEdit->text());
//    member.setPassword(ui->passwordLineEdit->text());

//    sysLib->createMember(member);

//    QMessageBox::information(this,"Member Created","You have now created User " + ui->firstNameLineEdit->text() + " " + ui->lastNameLineEdit->text());

//    //setting line edits back to blank
////    ui->bookTitle->setText("");
////    ui->bookGenre->setText("");
////    ui->bookCopies->setText("");
////    ui->bookAuthor->setText("");
////    ui->bookPublisher->setText("");
////    ui->bookDescription->setText("");

//}

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! ATTENTION !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//yeah dawg hold up just use this for now cuz idk why it aint working
// fix this when you get home - keith
void adminAddMember::on_addMemberButton_clicked(QString accId)
{
    Member member;

//    QString accId = sysLib->generateID(3);

    member.setMemberID(sysLib->generateID(2));
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


void adminAddMember::on_catalogueBtn_clicked()
{

}



