#ifndef ADMINCATALOGUE_H
#define ADMINCATALOGUE_H

#include <QMainWindow>

namespace Ui {
class adminCatalogue;
}

class adminCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminCatalogue(QWidget *parent = nullptr);
    ~adminCatalogue();

private:
    Ui::adminCatalogue *ui;
};

#endif // ADMINCATALOGUE_H
