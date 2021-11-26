#ifndef BOOKDETAILS_H
#define BOOKDETAILS_H

#include <QMainWindow>
#include "systemlibrary.h"

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

private slots:
<<<<<<< HEAD
    void on_issueButton_clicked();
=======
    void on_reservePushButton_clicked();
>>>>>>> jay

private:
    Ui::BookDetails *ui;
    SystemLibrary *sysLib;
    int numId;
};

#endif // BOOKDETAILS_H
