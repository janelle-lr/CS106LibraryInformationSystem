#ifndef ADMINEDITBOOK_H
#define ADMINEDITBOOK_H

#include <QMainWindow>
#include "systemlibrary.h"

namespace Ui {
class adminEditBook;
}

class adminEditBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminEditBook(QWidget *parent = nullptr);
    ~adminEditBook();
    void setNum (int);

signals:
    void showadminEditBook();
private slots:
    void on_savePushButton_clicked();

private:
    Ui::adminEditBook *ui;
    int numId;
    SystemLibrary systemlibrary;
    void updateAllBookDetails(QVector<Book>);
};

#endif // ADMINEDITBOOK_H
