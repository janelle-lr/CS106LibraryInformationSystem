#include "adminaddmember.h"
#include "ui_adminaddmember.h"

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
<<<<<<< HEAD

void adminAddMember::on_addNewMember_clicked()
{
    //Account newAcc;
    Member newMember;

    QString id = systemlibrary.generateID(2);
    QString accID = systemlibrary.generateID(3);

    newMember.setMemberID(id);
    newMember.setAccId(accID);
    newMember.setName(ui->firstName->text() + ui->lastName->text());
    //newMember.setAge(ui->DOB->date());
    newMember.setEmail(ui->email->text());
    newMember.setPassword(ui->passWord->text());


}

=======
>>>>>>> parent of 62a1817 (added member code, shit broke tho)
