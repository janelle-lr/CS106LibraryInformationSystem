#include "overduenotification.h"
#include "ui_overduenotification.h"

OverdueNotification::OverdueNotification(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OverdueNotification)
{
    ui->setupUi(this);
}

OverdueNotification::~OverdueNotification()
{
    delete ui;
}
