#include "woooosh.h"
#include "ui_woooosh.h"

woooosh::woooosh(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::woooosh)
{
    ui->setupUi(this);
}

woooosh::~woooosh()
{
    delete ui;
}
