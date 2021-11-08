#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "catalogue.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap Img(":/MicrosoftTeams-image.png");
    ui->img->setPixmap(Img.scaled(600,600, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Thanks for logging in!","Thank you for logging in, User!");

    catalogue = new Catalogue(this);
    hide();
    catalogue->show();
}

