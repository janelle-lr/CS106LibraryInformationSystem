#ifndef MEMBERACCOUNTVIEW_H
#define MEMBERACCOUNTVIEW_H

#include <QMainWindow>


namespace Ui {
class memberAccountView;
}

class memberAccountView : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberAccountView(QWidget *parent = nullptr);
    ~memberAccountView();

private slots:
    void on_actionView_Catalogue_triggered();

private:
    Ui::memberAccountView *ui;
};

#endif // MEMBERACCOUNTVIEW_H
