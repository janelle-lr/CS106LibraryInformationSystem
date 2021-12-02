#ifndef MEMBERVIEWRESERVES_H
#define MEMBERVIEWRESERVES_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "bookdetails.h"

namespace Ui {
class memberViewReserves;
}

class memberViewReserves : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberViewReserves(QWidget *parent = nullptr);
    ~memberViewReserves();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;
    void setAccID (QString);

signals:
    void showAccountView();
    void showLoanWindow();
    void signOut();
    void showCatalogue();

private slots:
    void viewButtonClicked();
    void cancelReserveButtonClicked();

    void on_editAccountBtn_clicked();

    void on_loanedBooksBtn_clicked();

    void on_signoutBtn_clicked();

private:
    Ui::memberViewReserves *ui;
    void createWidgets(int, int, QString, QString, QPixmap bookCover, QString, QString);
    void addRecords();
    void deleteRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    QString userId;
    BookDetails *bookdetails;
    QStringList reserveList;
};

#endif // MEMBERVIEWRESERVES_H
