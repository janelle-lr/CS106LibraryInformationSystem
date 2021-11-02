#ifndef WOOOOSH_H
#define WOOOOSH_H

#include <QMainWindow>

namespace Ui {
class woooosh;
}

class woooosh : public QMainWindow
{
    Q_OBJECT

public:
    explicit woooosh(QWidget *parent = nullptr);
    ~woooosh();

private:
    Ui::woooosh *ui;
};

#endif // WOOOOSH_H
