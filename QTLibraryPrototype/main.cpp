#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    int x = w.width() * 0.7;
    int y = w.height() * 0.7;
    w.setFixedSize(x, y);

    w.show();
    return a.exec();
}
