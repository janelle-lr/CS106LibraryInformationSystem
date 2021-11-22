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
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/LibraryInformationSystem/membercatalogue.h
#include "systemlibrary.h"
=======
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:LibraryInformationSystem/membercatalogue.h

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
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/LibraryInformationSystem/membercatalogue.h
    void on_viewAccount_triggered();
=======
    void issueButtonClicked();

>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:LibraryInformationSystem/membercatalogue.h

    void on_pushButton_clicked();

private:
    Ui::memberCatalogue *ui;
    memberAccountView *memberaccountview;
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/LibraryInformationSystem/membercatalogue.h

    SystemLibrary *sysLib;
=======
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
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:LibraryInformationSystem/membercatalogue.h
};

#endif // MEMBERCATALOGUE_H
