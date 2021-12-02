#ifndef OVERDUENOTIFICATION_H
#define OVERDUENOTIFICATION_H

#include <QDialog>
#include "systemlibrary.h"
namespace Ui {
class OverdueNotification;
}

class OverdueNotification : public QDialog
{
    Q_OBJECT

public:
    explicit OverdueNotification(QWidget *parent = nullptr);
    ~OverdueNotification();
    void setMemberID(QString);

private:
    Ui::OverdueNotification *ui;
    SystemLibrary sysLib;
    QString memberID;
};

#endif // OVERDUENOTIFICATION_H
