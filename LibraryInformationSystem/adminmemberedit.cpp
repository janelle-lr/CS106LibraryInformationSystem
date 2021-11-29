#include "adminmemberedit.h"
#include "ui_adminmemberedit.h"

adminMemberEdit::adminMemberEdit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminMemberEdit)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Admin Edit Accounts Page");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/catalogue.png");
    ui->catalogueIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img3(":/resources/images/viewMembers.png");
    ui->memberIcon->setPixmap(img3.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img4(":/resources/images/uis_signout.png");
    ui->signoutIcon->setPixmap(img4.scaled(40, 40, Qt::KeepAspectRatio));
}

adminMemberEdit::~adminMemberEdit()
{
    delete ui;
}

void adminMemberEdit::setNum(int num) {
    this->numId = num;

    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();
    ui->firstNameLineEdit->setText(member[num].getName());
    //ui->dateEdit->setText(member[num].getDob());
    //ui->mobileNumLineEdit->setText(member[num].getMobileNum());
    ui->emailLineEdit->setText(member[num].getEmail());
    ui->usernameLineEdit->setText(member[num].getAccId());
    ui->passwordLineEdit->setText(member[num].getPassword());
}

//when save is clicked the edits will be saved
void adminMemberEdit::on_updateMemberButton_clicked()
{
    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();

    for (int i = 0; i < member.size(); i++) {
        if(numId == i) {
        member[i].setName(ui->firstNameLineEdit->text());
        //member[i].setDob(ui->dateEdit->text());
        //member[i].setMobileNum(ui->mobileNumLineEdit->text());
        member[i].setEmail(ui->emailLineEdit->text());
        member[i].setPassword(ui->passwordLineEdit->text());
        break;
        }
    }
    sysLib.updateAllMemberDetails(member);//passing edited book details to csv file
    QMessageBox::information(this,"Edit Book Details", "Book edits have been successfully saved.");
    hide();
}

