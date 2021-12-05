#ifndef ADMINBOOKDETAILS_H
#define ADMINBOOKDETAILS_H

#include <QMainWindow>

namespace Ui {
class AdminBookDetails;
}

class AdminBookDetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminBookDetails(QWidget *parent = nullptr);
    ~AdminBookDetails();

private slots:
    void on_savePushButton_clicked();

private:
    Ui::AdminBookDetails *ui;
};

#endif // ADMINBOOKDETAILS_H
