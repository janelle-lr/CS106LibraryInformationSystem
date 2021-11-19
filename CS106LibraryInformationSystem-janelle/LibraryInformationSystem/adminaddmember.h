#ifndef ADMINADDMEMBER_H
#define ADMINADDMEMBER_H

#include <QMainWindow>

namespace Ui {
class adminAddMember;
}

class adminAddMember : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminAddMember(QWidget *parent = nullptr);
    ~adminAddMember();

private:
    Ui::adminAddMember *ui;
};

#endif // ADMINADDMEMBER_H
