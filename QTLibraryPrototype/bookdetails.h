#ifndef BOOKDETAILS_H
#define BOOKDETAILS_H

#include <QMainWindow>

namespace Ui {
class bookdetails;
}

class bookdetails : public QMainWindow
{
    Q_OBJECT

public:
    explicit bookdetails(QWidget *parent = nullptr);
    ~bookdetails();

private:
    Ui::bookdetails *ui;
};

#endif // BOOKDETAILS_H
