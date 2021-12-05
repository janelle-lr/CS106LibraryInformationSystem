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
signals:
    void openadminEditCatalogue();
    void showadminMemberEdit();

private slots:
    void on_pushButton_clicked();
    void on_confirmBookDetails_clicked();
    void on_backBtn_clicked();
    void on_selectedImage_3_activated(int index);

private:
    Ui::adminEditCatalogue *ui;
    QString filePath;
    SystemLibrary systemlibrary;

};

#endif // ADMINEDITCATALOGUE_H
