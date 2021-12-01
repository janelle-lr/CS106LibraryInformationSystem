#ifndef RETURNBOOKSNOTIFICATION_H
#define RETURNBOOKSNOTIFICATION_H

#include <QDialog>

namespace Ui {
class ReturnBooksNotification;
}

class ReturnBooksNotification : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBooksNotification(QWidget *parent = nullptr);
    ~ReturnBooksNotification();

private:
    Ui::ReturnBooksNotification *ui;
};

#endif // RETURNBOOKSNOTIFICATION_H
