#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "memberaccountview.h"
#include "bookdetails.h"
#include "overduenotification.h"
#include "returnbooksnotification.h"
#include "notificationlog.h"
#include "loanedbooknotification.h"
namespace Ui {
class memberCatalogue;
}

class memberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberCatalogue(QWidget *parent = nullptr);
    ~memberCatalogue();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;
    void setAccID (QString);

signals:
    void showMainWindow();

private slots:
    void issueButtonClicked();
    void viewButtonClicked();
    void on_accountBtn_clicked();
    void on_signoutBtn_clicked();
    void signOutAcc();
    void on_comboBox_activated(int index);

private:
    Ui::memberCatalogue *ui;
    memberAccountView *memberaccountview;
    void createWidgets(int, int, QString, QString, QPixmap bookCover, QString, QString);
    void addRecords();
    void deleteRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    QString userId;
    BookDetails *bookdetails;
    OverdueNotification *overDueNotification;
    ReturnBooksNotification *returnBookNotification;
    LoanedBookNotification * loanedBookNotificatio;
    QVector<QGroupBox*> gBoxAZ;
};

#endif // MEMBERCATALOGUE_H
