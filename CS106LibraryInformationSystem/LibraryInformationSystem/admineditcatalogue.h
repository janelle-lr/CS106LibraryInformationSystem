#ifndef ADMINEDITCATALOGUE_H
#define ADMINEDITCATALOGUE_H

#include <QMainWindow>
#include "systemlibrary.h"
#include "book.h"
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>

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
    void on_pushButton_clicked();
    void on_confirmBookDetails_clicked();

    void on_selectedImage_activated(const QString &arg1);

    void on_selectedImage_3_activated(const QString &arg1);

private:
    Ui::adminEditCatalogue *ui;
    QString filePath;
    SystemLibrary systemlibrary;

};

#endif // ADMINEDITCATALOGUE_H
