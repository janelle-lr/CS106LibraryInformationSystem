#ifndef MEMBERCATALOGUEV2_H
#define MEMBERCATALOGUEV2_H

#include <QDialog>
#include "memberaccountviewv2.h"

namespace Ui {
class memberCatalogueV2;
}

class memberCatalogueV2 : public QDialog
{
    Q_OBJECT

public:
    explicit memberCatalogueV2(QWidget *parent = nullptr);
    ~memberCatalogueV2();

private slots:
    void on_viewAccount_clicked();

private:
    Ui::memberCatalogueV2 *ui;
    //memberAccountViewV2* memberaccountview;
};

#endif // MEMBERCATALOGUEV2_H
