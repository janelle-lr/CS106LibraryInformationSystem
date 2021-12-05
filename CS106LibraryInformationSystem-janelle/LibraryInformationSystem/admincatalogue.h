#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "admineditbook.h"
#include "admineditcatalogue.h"
#include "adminaddmember.h"
#include "adminmembercatalogue.h"

namespace Ui {
class adminCatalogue;
}

class adminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminCatalogue(QWidget *parent = nullptr);
    ~adminCatalogue();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;

signals:
    void showMainWindow();

private slots:
    void on_pushButton_clicked();
    void editButtonClicked();
    void deleteButtonClicked();
    void deleteAllRecords();
    void on_memberBtn_clicked();
    void on_signoutBtn_clicked();
    void signOutBtn();
private:
    Ui::adminCatalogue *ui;
    void createWidgets(int, int, QString, QString, QPixmap bookCover);
    void addRecords();
    void deleteRecords();

    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    adminEditBook* admineditbook;
    adminEditCatalogue* admineditcatalogue;
    //for nav bar connections
    adminCatalogue *admincatalogue;
    adminMemberCatalogue *adminmembercatalogue;
};

#endif // ADMINCATALOGUE_H
