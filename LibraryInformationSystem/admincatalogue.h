#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"

namespace Ui {
class adminCatalogue;
}

class adminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminCatalogue(QWidget *parent = nullptr);
    ~adminCatalogue();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::adminCatalogue *ui;
    void createWidgets(int, int, QString, QString);
    void addRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary systemlibrary;
};

#endif // ADMINCATALOGUE_H
