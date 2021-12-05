#ifndef ADMINMEMBERCATALOGUE_H
#define ADMINMEMBERCATALOGUE_H

#include <QMainWindow>
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "adminmemberedit.h"
#include "adminaddmember.h"

namespace Ui {
class adminMemberCatalogue;
}

class adminMemberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminMemberCatalogue(QWidget *parent = nullptr);
    ~adminMemberCatalogue();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;

signals:
    void showAdmin();
    void getMainWindow();

private slots:
    void editButtonClicked();
    void deleteButtonClicked();
    void on_catalogueBtn_2_clicked();
    void on_signoutBtn_2_clicked();
    void on_addMemberBtn_clicked();
    void deleteAllRecords();

private:
    Ui::adminMemberCatalogue *ui;
    void createWidgets(int, int, QString, QString, int);
    void addRecords();
    SystemLibrary *sysLib;
    QPushButton* button;
    QPushButton* button2;
    adminMemberEdit* adminmemberedit;
    adminAddMember* adminaddmember;
};

#endif // ADMINMEMBERCATALOGUE_H
