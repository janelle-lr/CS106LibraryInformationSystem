#include "admincatalogue.h"
#include "ui_admincatalogue.h"

adminCatalogue::adminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminCatalogue)
{
    ui->setupUi(this);
}

adminCatalogue::~adminCatalogue()
{
    delete ui;
}
