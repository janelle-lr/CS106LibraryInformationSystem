#ifndef MEMBERVIEWLOANS_H
#define MEMBERVIEWLOANS_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "bookdetails.h"

namespace Ui {
class memberViewLoans;
}

class memberViewLoans : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberViewLoans(QWidget *parent = nullptr);
    ~memberViewLoans();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;
    void setAccID (QString);

private slots:
    void returnButtonClicked();
    void viewButtonClicked();

private:
    Ui::memberViewLoans *ui;
    void createWidgets(int, int, QString, QString, QPixmap bookCover, QString, QString);
    void addRecords();
    void deleteRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    QString userId;
    BookDetails *bookdetails;
};

#endif // MEMBERVIEWLOANS_H
