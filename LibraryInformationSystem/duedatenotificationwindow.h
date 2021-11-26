#ifndef DUEDATENOTIFICATIONWINDOW_H
#define DUEDATENOTIFICATIONWINDOW_H

#include <QDialog>
#include "systemlibrary.h"
#include "book.h"
namespace Ui {
class DuedateNotificationWindow;
}

class DuedateNotificationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DuedateNotificationWindow(QWidget *parent = nullptr);
    ~DuedateNotificationWindow();

private:
    Ui::DuedateNotificationWindow *ui;
    SystemLibrary sysLib;
};

#endif // DUEDATENOTIFICATIONWINDOW_H
