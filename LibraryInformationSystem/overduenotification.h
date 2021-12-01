#ifndef OVERDUENOTIFICATION_H
#define OVERDUENOTIFICATION_H

#include <QDialog>

namespace Ui {
class OverdueNotification;
}

class OverdueNotification : public QDialog
{
    Q_OBJECT

public:
    explicit OverdueNotification(QWidget *parent = nullptr);
    ~OverdueNotification();

private:
    Ui::OverdueNotification *ui;
};

#endif // OVERDUENOTIFICATION_H
