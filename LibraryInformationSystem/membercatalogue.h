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
#include "bookdetails.h"

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
    void setAccID (QString);

private slots:
    void issueButtonClicked();
    void viewButtonClicked();

    void on_comboBox_activated(const QString &arg1);

private:
    Ui::memberCatalogue *ui;
    memberAccountView *memberaccountview;
    void createWidgets(int, int, QString, QString, QPixmap bookCover, QString, QString);
    void addRecords();
    void deleteRecords();
    QPushButton* button;
    QPushButton* button2;
    SystemLibrary* systemlibrary;
    void loanBook(BookItem bookItem);
    bool isLoaned(QString,QString);
    void setBookItemID(QString);
    void setBookItem_MemberID(QString);
    void setBookItem_BookID(QString);
    QString userId;
    BookDetails *bookdetails;
};

#endif // MEMBERCATALOGUE_H
