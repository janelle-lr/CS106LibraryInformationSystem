#include "mainwindow.h"
#include "window2.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "QCheckBox"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    QMessageBox::warning(this,"OH SHIT YO","THE FITNESSGRAM PACER TEST IS A FITNESS AEROBICS FITNESS TEST");

    //------ THESE HOES DOWN HERE ARE FOR THE IMAGES OF BOOKS, ALL HARD CODED IN AIGHT
    QPixmap Img(":/resources/pomegranates.png");
    ui->img->setPixmap(Img.scaled(150,150, Qt::KeepAspectRatio));

    QPixmap Img2(":/resources/gold cats.png");
    ui->img_2->setPixmap(Img2.scaled(150,150, Qt::KeepAspectRatio));

    QPixmap Img3(":/resources/duneBookCover.png");
    ui->img_4->setPixmap(Img3.scaled(150,150, Qt::KeepAspectRatio));

    QPixmap Img4(":/resources/bloodCottage.png");
    ui->img_5->setPixmap(Img4.scaled(150,150, Qt::KeepAspectRatio));

    QPixmap Img5(":/resources/50shadesofGray.png");
    ui->img_6->setPixmap(Img5.scaled(150,150, Qt::KeepAspectRatio));
    //------ THESE HOES DOWN HERE ARE FOR THE IMAGES OF BOOKS, ALL HARD CODED IN AIGHT

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    // FROM LAST SESSION --------------

//    QMessageBox *msg = new QMessageBox();
//    msg->setText("MyText");
//    msg->setWindowTitle("MyWindow");
//    msg->setStyleSheet("QLabel{min-width: 600px; min-height: 800px; font-size: 52px}");

//    msg->open();

//    QPushButton *button = new QPushButton(msg);
//    button->resize(10000,50);
//    button->setText("MyButton");
//    button->show();

    // FROM LAST SESSION --------------

    //FROM LAST LAST SESSION -------------------
//        QDialog window2;
//        window2.setModal(true);
//        window2.exec();

    QMessageBox::information(this,"ACCOUNT SAVED","Your details have been updated, see you around space cowboy");

        window = new window2(this);
        window->show();

    //FROM LAST LAST SESSION -------------------


}

//             CODE FOR USER TESTING SHIT

void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"NICE ONE!","You aren't actually reading the book right now idiot, fuckk outta here");
}

void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::information(this,"NICE ONE!","You have now returned the book! Thanks for not stealing our shit nerd");
}




