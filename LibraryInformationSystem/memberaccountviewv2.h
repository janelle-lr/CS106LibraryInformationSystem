#ifndef MEMBERACCOUNTVIEWV2_H
#define MEMBERACCOUNTVIEWV2_H

#include <QDialog>
#include "membercataloguev2.h"

namespace Ui {
class memberAccountViewV2;
}

class memberAccountViewV2 : public QDialog
{
    Q_OBJECT

public:
    explicit memberAccountViewV2(QWidget *parent = nullptr);
    ~memberAccountViewV2();

signals:
    void showMemberAccWindow();

private slots:
    void on_viewCatalogue_clicked();

private:
    Ui::memberAccountViewV2 *ui;
    memberCatalogueV2 memberCat;

};

#endif // MEMBERACCOUNTVIEWV2_H
