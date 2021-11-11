#ifndef ADMINEDITCATALOGUE_H
#define ADMINEDITCATALOGUE_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "book.h"

namespace Ui {
class adminEditCatalogue;
}

class adminEditCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminEditCatalogue(QWidget *parent = nullptr);
    ~adminEditCatalogue();

private slots:
    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();


    void on_confirmBookDetails_clicked();

private:
    Ui::adminEditCatalogue *ui;
    QString filePath;
    SystemLibrary systemlibrary;

};

#endif // ADMINEDITCATALOGUE_H
