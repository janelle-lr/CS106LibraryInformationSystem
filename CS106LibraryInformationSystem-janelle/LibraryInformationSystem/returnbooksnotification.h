#ifndef RETURNBOOKSNOTIFICATION_H
#define RETURNBOOKSNOTIFICATION_H

#include <QDialog>
#include "notificationlog.h"
#include "systemlibrary.h"
#include "book.h"
#include "bookitem.h"
namespace Ui {
class ReturnBooksNotification;
}

class ReturnBooksNotification : public QDialog
{
    Q_OBJECT

public:
    explicit ReturnBooksNotification(QWidget *parent = nullptr);
    ~ReturnBooksNotification();
    void setMemberID(QString);

private:
    Ui::ReturnBooksNotification *ui;
    SystemLibrary sysLib;
    QString memberID;
};

#endif // RETURNBOOKSNOTIFICATION_H
