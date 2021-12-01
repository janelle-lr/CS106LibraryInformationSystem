#include "memberaccountview.h"
#include "ui_memberaccountview.h"

memberAccountView::memberAccountView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberAccountView)
{
    ui->setupUi(this);
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
}

memberAccountView::~memberAccountView()
{
    delete ui;
}

void memberAccountView::setAccID(QString username) {
    this->userId = username;

    qDebug() << "userId ==" << userId;
}

void memberAccountView::on_loanedBooksBtn_clicked()
{
    memberviewloans = new memberViewLoans(this);
    memberviewloans->setAccID(userId);
    connect(memberviewloans, SIGNAL(openmemberViewLoans()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    memberviewloans->show();
    hide();
}

