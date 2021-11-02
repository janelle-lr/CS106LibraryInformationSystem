#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


    //change the window size
//    int x= w.width()*1.5;
//    int y=w.height()*1.5;


//    w.setFixedSize(x,y);
    w.show();

    return a.exec();
}
