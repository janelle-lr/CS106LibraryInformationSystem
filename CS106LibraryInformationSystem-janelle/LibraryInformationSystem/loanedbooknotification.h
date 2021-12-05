#ifndef LOANEDBOOKNOTIFICATION_H
#define LOANEDBOOKNOTIFICATION_H

#include <QDialog>
#include "notificationlog.h"
#include "systemlibrary.h"
#include "book.h"
#include "bookitem.h"
namespace Ui {
class LoanedBookNotification;
}

class LoanedBookNotification : public QDialog
{
    Q_OBJECT

public:
    explicit LoanedBookNotification(QWidget *parent = nullptr);
    ~LoanedBookNotification();
    void setMemberID(QString);

private:
    Ui::LoanedBookNotification *ui;
    SystemLibrary sysLib;
    QString memberID;
};

#endif // LOANEDBOOKNOTIFICATION_H
