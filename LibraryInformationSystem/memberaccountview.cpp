#include "memberaccountview.h"
#include "ui_memberaccountview.h"

memberAccountView::memberAccountView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberAccountView)
{
    ui->setupUi(this);

    setWindowTitle("BiblioThicc Libraries - View Account");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    //for nav bar icons
    QPixmap img(":/resources/images/uis_signout.png");
    ui->signoutIcon->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/currentLoanBook.png");
    ui->loanedBooksIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img3(":/resources/images/reserveBook.png");
    ui->reservedBooksIcon->setPixmap(img3.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img4(":/resources/images/account.png");
    ui->editAccountIcon->setPixmap(img4.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img5(":/resources/images/backIcon.png");
    ui->bcktoCatologueIcon->setPixmap(img5.scaled(40, 40, Qt::KeepAspectRatio));

    memberviewloans = new memberViewLoans(this);
    memberviewloans->setAccID(userId);
    connect(memberviewloans, SIGNAL(showAccountView()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    connect(memberviewloans, SIGNAL(showReservesWindow()), this, SLOT(showReservedWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    connect(memberviewloans, SIGNAL(signOut()), this, SLOT(signOutAcc()));
    connect(memberviewloans, SIGNAL(showCatalogue()), this, SLOT(showCatalogueWindow()));


    memberviewreserves = new memberViewReserves(this);
    memberviewreserves->setAccID(userId);
    connect(memberviewreserves, SIGNAL(showAccountView()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    connect(memberviewreserves, SIGNAL(showLoanWindow()), this, SLOT(showLoanedWindow())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    connect(memberviewreserves, SIGNAL(signOut()), this, SLOT(signOutAcc()));
    connect(memberviewreserves, SIGNAL(showCatalogue()), this, SLOT(showCatalogueWindow()));
}

memberAccountView::~memberAccountView()
{
    delete ui;
}

void memberAccountView::setAccID(QString username) {
    this->userId = username;

    SystemLibrary sysLib;
    QVector<Member> member;
    member = sysLib.getAllMemberDetails();

    for (int i = 0; i < member.size(); i++) {
        if (member[i].getMemberId() == userId) {
            QString date = member[i].getDob();
            QStringList dob = date.split("/");
            qDebug() << dob.size();
            QDate birthday = QDate (dob[2].toInt(), dob[1].toInt(), dob[0].toInt());
            ui->memberFirstName->setText(member[i].getName());
            ui->memberDOB->setDate(birthday);
            ui->memberMobile->setText(member[i].getMobileNum());
            ui->memberEmail->setText(member[i].getEmail());
            ui->memberUser->setText(member[i].getAccId());
            ui->memberPass->setText(member[i].getPassword());
        }
    }
}

void memberAccountView::on_loanedBooksBtn_clicked()
{
    memberviewloans->show();
    hide();
}

void memberAccountView::on_reservedBooksBtn_clicked()
{
    memberviewreserves->show();
    hide();
}


void memberAccountView::on_memberPass_textEdited(const QString &arg1)
{
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgba(231, 138, 107, 1); color: #fff}");
    //ui->pushButton->setStyleSheet("QPushButton:hover{background-color: rgba(231, 138, 107, 0.8);}");
}


void memberAccountView::on_memberFirstName_textEdited(const QString &arg1)
{
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgba(231, 138, 107, 1); color: #fff}");
    //ui->pushButton->setStyleSheet("QPushButton:hover{background-color: rgba(231, 138, 107, 0.8);}");
}


void memberAccountView::on_memberMobile_textEdited(const QString &arg1)
{
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgba(231, 138, 107, 1); color: #fff}");
    //ui->pushButton->setStyleSheet("QPushButton:hover{background-color: rgba(231, 138, 107, 0.8);}");
}

void memberAccountView::on_memberEmail_textEdited(const QString &arg1)
{
    ui->pushButton->setStyleSheet("QPushButton{background-color: rgba(231, 138, 107, 1); color: #fff}");
    //ui->pushButton->setStyleSheet("QPushButton:hover{background-color: rgba(231, 138, 107, 0.8);}");
}


void memberAccountView::on_pushButton_clicked()
{
    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();

    for (int i = 0; i < member.size(); i++) {
        if(member[i].getAccId() == userId) {
        member[i].setName(ui->memberFirstName->text());
        member[i].setMobileNum(ui->memberMobile->text());
        member[i].setEmail(ui->memberEmail->text());
        member[i].setPassword(ui->memberPass->text());
        break;
        }
    }
    sysLib.updateAllMemberDetails(member);//passing edited member details to csv file
    QMessageBox::information(this,"Edit Account Details", "Account changes successfully saved.");
}

void memberAccountView::on_bcktoCatologueBtn_clicked()
{
    emit showCatalogue();
    hide();
}

void memberAccountView::signOutAcc(){
    emit signOut();
    close();
}

void memberAccountView::showCatalogueWindow(){
    emit showCatalogue();
    hide();
}

void memberAccountView::showReservedWindow(){
    memberviewreserves->show();
}

void memberAccountView::showLoanedWindow(){
    memberviewloans->show();
}

void memberAccountView::on_signoutBtn_clicked()
{
    emit signOut();
    close();
}

