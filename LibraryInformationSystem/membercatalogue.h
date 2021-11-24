#ifndef MEMBERCATALOGUE_H
#define MEMBERCATALOGUE_H

#include <QMainWindow>
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QGroupBox>
#include "systemlibrary.h"
#include "memberaccountview.h"

namespace Ui {
class memberCatalogue;
}

class memberCatalogue : public QMainWindow
{
    Q_OBJECT

public:
    explicit memberCatalogue(QWidget *parent = nullptr);
    ~memberCatalogue();
    QVector<QPushButton *>btn;
    QVector<QPushButton *>btn2;

private slots:
    void issueButtonClicked();


private:
    Ui::memberCatalogue *ui;
    memberAccountView *memberaccountview;
    void createWidgets(int, int, QString, QString, QPixmap bookCover);
    void addRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    void loanBook(BookItem bookItem);
    bool isLoaned(QString,QString);
    void setBookItemID(QString);
    void setBookItem_MemberID(QString);
    void setBookItem_BookID(QString);
};

#endif // MEMBERCATALOGUE_H
