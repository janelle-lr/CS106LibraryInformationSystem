#ifndef BOOKDETAILS_H
#define BOOKDETAILS_H

#include <QMainWindow>

namespace Ui {
class BookDetails;
}

class BookDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit BookDetails(QWidget *parent = nullptr);
    ~BookDetails();

private slots:
    void on_pushButton_clicked();

    void on_reservePushButton_clicked();

private:
    Ui::BookDetails *ui;
};

#endif // BOOKDETAILS_H
