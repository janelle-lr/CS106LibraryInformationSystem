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
