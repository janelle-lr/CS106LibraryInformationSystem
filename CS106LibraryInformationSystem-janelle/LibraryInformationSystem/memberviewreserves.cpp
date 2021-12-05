#include "memberviewreserves.h"
#include "ui_memberviewreserves.h"

memberViewReserves::memberViewReserves(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberViewReserves)
{
    ui->setupUi(this);

    setWindowTitle("BiblioThicc Libraries - View Reserves");

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
}

memberViewReserves::~memberViewReserves()
{
    delete ui;
}

void memberViewReserves::setAccID(QString username) {
    this->userId = username;

    qDebug() << "userId ==" << userId;
    addRecords();
}

void memberViewReserves::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover, QString bookId, QString issueDate){
    //Creating a gridlayout
    QHBoxLayout* group = new QHBoxLayout();

    button = new QPushButton("Cancel Reserve");
    button2 = new QPushButton("View");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);
    QLabel* label4 = new QLabel("Available on: " + issueDate);

    //Styling buttons and labels
    label2->setWordWrap(true);
    label2->setStyleSheet("QLabel{font-size: 18px; font-weight: 500; margin-left: 5px;}");
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 40px; margin-left: 5px;}");
    label4->setStyleSheet("QLabel{font-size: 15px; /*margin-bottom: 65px;*/ margin-left: 5px;}");

    button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
    button2->setStyleSheet("QPushButton{max-width: 100px; border: 1px solid; border-color: #E78A6B; color:  #E78A6B; font-weight: 500;}");

    QPixmap image(bookCover);
    label->setPixmap(image.scaled(550, 200, Qt::KeepAspectRatio));

    //adding widgets to horizontal layout
    group->addWidget(label,0);//widget, row, col

    QFrame* labelGroup = new QFrame();
    QVBoxLayout* labelLayout = new QVBoxLayout();

    labelGroup->setMaximumHeight(215);
    labelGroup->setMinimumHeight(215);
    labelGroup->setStyleSheet("QFrame{margin-right: 10px; border:none;}");

    labelLayout->addWidget(label2);
    labelLayout->addWidget(label3);
    labelLayout->addWidget(label4);
    labelGroup->setLayout(labelLayout);


    group->addWidget(labelGroup, 1);
    group->addWidget(button,2);
    group->addWidget(button2,3);

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();

    //putting gridlayout inside group box
    groupBox->setLayout(group);

    //styling groupBox
    groupBox->setMaximumSize(QSize(900,225));//QSize(width, height)
    groupBox->setMinimumSize(QSize(900,225));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-right: 10px;border:none;}");

    ui->gridLayout_4->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void memberViewReserves::addRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();
    QVector<PreOrderBook> preOrder;
    preOrder = sysLib.getAllPreOrders();

    for (int i = 0; i < preOrder.size(); i++) {

        for (int j = 0; j < book.size(); j++) {
            if (preOrder[i].getPreBook_BookID() == book[j].getBookId() && preOrder[i].getPreBook_MemberID() == userId && preOrder[i].getPreOrderStatus() == 0) {
                createWidgets(i,0,book[j].getBookName(),book[j].getAuthorName(),book[j].getBookImageFilePath(), book[j].getBookId(), preOrder[i].getPreBookDate());
                //break;
                reserveList.append(preOrder[i].getPreBook_BookID());
                indexPos.append(j);
            }
        }
    }

    //looping through button vector to make buttons work
    for(int i = 0; i < btn.size(); i++){
        connect(btn[i],SIGNAL(released()),this,SLOT(cancelReserveButtonClicked()));
    }

    for(int i = 0; i < btn2.size(); i++){
        connect(btn2[i],SIGNAL(released()),this,SLOT(viewButtonClicked()));
    }

}

void memberViewReserves::cancelReserveButtonClicked(){
    int num = 7;
    SystemLibrary sysLib;
    BookItem bookItem;
    QVector<Member> member;
    member = sysLib.getAllMemberDetails();
    QVector<Book> book;
    book = sysLib.getAllBooks();
    QVector<PreOrderBook> preOrder = sysLib.getAllPreOrders();

    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn[i] == button){
            num = i;
            break;
        }
    }

    for(int i = 0; i < reserveList.size(); i++){
        for(int x = 0; x < preOrder.size(); x++){
            if(preOrder[x].getPreBook_MemberID() == userId && reserveList[i] == preOrder[x].getPreBook_BookID() && preOrder[x].getPreOrderStatus() == false){
                preOrder[x].setPreOrderStatus(1);
                sysLib.updateAllPreOrderDetails(preOrder);
                qDebug() << reserveList[i] << " " << preOrder[x].getPreBook_BookID();
                x = preOrder.size();
                i = reserveList.size();
            }
        }
    }
    deleteRecords();
}

void memberViewReserves::viewButtonClicked(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    int num = 8;
    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn2.size(); i++){
        if(btn2[i] == button){
            num = i;
            break;
        }
    }
    //QMessageBox::information(this,"Button",QString::number(num) + " From button 2");

    bookdetails = new BookDetails(this);
    connect(bookdetails, SIGNAL(showBookDetails()), this, SLOT(show()));
    bookdetails->show();
    qDebug() << num << "hello";
    bookdetails->setNum(indexPos[num],userId);
}

void memberViewReserves::deleteRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    int num = 7;

    while ( QLayoutItem* item = ui->gridLayout_4->layout()->takeAt( 0 ) )
    {
        for(int i = 0; i < book.size(); i++) {
            //if(num == i){
                Q_ASSERT( ! item->layout() );
                delete item->widget();//clears whole widget like a 'refresh' of page
                delete item;
                break;
           // }
        }
    }
    btn.clear();
    btn2.clear();
    indexPos.clear();
    addRecords();//reprints updated catalogue
}

void memberViewReserves::on_editAccountBtn_clicked()
{
    emit showAccountView();
    close();
}


void memberViewReserves::on_loanedBooksBtn_clicked()
{
    emit showLoanWindow();
    hide();
}


void memberViewReserves::on_signoutBtn_clicked()
{
    emit signOut();
    close();
}


void memberViewReserves::on_bcktoCatologueBtn_clicked()
{
    emit showCatalogue();
    hide();
}

