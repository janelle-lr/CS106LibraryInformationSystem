#ifndef BOOKDETAILS_H
#define BOOKDETAILS_H

#include <QMainWindow>
#include "systemlibrary.h"
#include <QMessageBox>
namespace Ui {
class BookDetails;
}

class BookDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookDetails(QWidget *parent = nullptr);
    ~BookDetails();
    void setNum (int, QString);

signals:
    void showCatalogue();
    void goBack();

private slots:
    void on_issueButton_clicked();
    void on_backBtn_clicked();

private:
    Ui::BookDetails *ui;
    SystemLibrary *sysLib;
    int numId;
    QString userID;
    void refresh();
};

#endif // BOOKDETAILS_H
