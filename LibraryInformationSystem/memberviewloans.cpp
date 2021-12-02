#include "memberviewloans.h"
#include "ui_memberviewloans.h"

memberViewLoans::memberViewLoans(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberViewLoans)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - View Loans");

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

memberViewLoans::~memberViewLoans()
{
    delete ui;
}

void memberViewLoans::setAccID(QString username) {
    this->userId = username;

    qDebug() << "userId ==" << userId;
    addRecords();
}

void memberViewLoans::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover, QString bookId, QString dueDate){
    //Creating a gridlayout
    QHBoxLayout* group = new QHBoxLayout();

    button = new QPushButton("Return");
    button2 = new QPushButton("View");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);
    QLabel* label4 = new QLabel("Expiring on: " + dueDate);

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

    ui->gridLayout_3->addWidget(groupBox,row,col);
    //ui->scrollArea->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void memberViewLoans::addRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();
    QVector<BookItem> bookitem;
    bookitem = sysLib.getAllBookItem();
    QString stockString = "";
    QStringList loanedBooks;
    loanedBooks = sysLib.getAllMemberLoanedBooks(userId);
    QString dueDate = "";

    for (int i = 0; i < loanedBooks.size(); i++) {
        for (int j = 0; j < book.size(); j++) {
            if (loanedBooks[i] == book[j].getBookId()) {
                //int num = i;
                for (int k = 0; k < bookitem.size(); k++) {
                    if(loanedBooks[i] == bookitem[k].getBookItem_BookID()) {
                        dueDate = bookitem[k].getExpiryDate();
                    }
                }
                createWidgets(i,0,book[j].getBookName(),book[j].getAuthorName(),book[j].getBookImageFilePath(), book[j].getBookId(), dueDate);

            }
        }
    }

    //looping through button vector to make buttons work
    for(int i = 0; i < btn.size(); i++){
        connect(btn[i],SIGNAL(released()),this,SLOT(returnButtonClicked()));
    }

    for(int i = 0; i < btn2.size(); i++){
        connect(btn2[i],SIGNAL(released()),this,SLOT(viewButtonClicked()));
    }

}

void memberViewLoans::returnButtonClicked(){
    int num = 7;
    SystemLibrary sysLib;
    BookItem bookItem;
    QVector<Member> member;
    member = sysLib.getAllMemberDetails();
    QVector<Book> book;
    book = sysLib.getAllBooks();

    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn[i] == button){
            num = i;
            break;
        }
    }

    if (sysLib.isLoaned(userId, book[num].getBookId())) {
        sysLib.returnBook(userId, book[num].getBookId());
        QMessageBox::information(this, "Book Returned", book[num].getBookName() + " has been successfully returned!");
    } else if (!sysLib.isPreBook(userId, book[num].getBookId()) && book[num].getStock() == 0 && book[num].getAvailStatus() == 0) {
        PreOrderBook preOrder;

        preOrder.setPreBookID(sysLib.generateID(8));
        preOrder.setPreBook_BookID(book[num].getBookId());
        preOrder.setPreBook_MemberID(userId);

        sysLib.preOrderBook(preOrder);

        QMessageBox::information(this, "Reserve Book", "You have successfully reserved " + book[num].getBookName() +
                                 " it will be available on " + sysLib.getAvailPreBookDate(book[num].getBookId(),userId));
    } else {
        if (book[num].getAvailStatus() != 0 && book[num].getStock() > 0 && !sysLib.isPreBook(userId, book[num].getBookId())) {
            bookItem.setBookItemID(sysLib.generateID(7));
            bookItem.setBookItem_MemberID(userId);
            bookItem.setBookItem_BookID(book[num].getBookId());
            sysLib.loanBook(bookItem);
            QMessageBox::information(this, "Loaned", "You have loaned " + book[num].getBookName() + " for 7 days.");
        }
    }

    deleteRecords();
}

void memberViewLoans::viewButtonClicked(){
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
   // QMessageBox::information(this,"Button",QString::number(num) + " From button 2");

    bookdetails = new BookDetails(this);
    connect(bookdetails, SIGNAL(showBookDetails()), this, SLOT(show()));
    bookdetails->show();
    bookdetails->setNum(num,userId);
}

void memberViewLoans::deleteRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    int num = 7;

    while ( QLayoutItem* item = ui->gridLayout_3->layout()->takeAt( 0 ) )
    {
        for(int i = 0; i < book.size(); i++) {
            if(num == i){
                Q_ASSERT( ! item->layout() );
                delete item->widget();//clears whole widget like a 'refresh' of page
                delete item;
                break;
            }
        }
    }
    btn.clear();
    btn2.clear();
    addRecords();//reprints updated catalogue
}

void memberViewLoans::on_editAccountBtn_clicked()
{
    emit showAccountView();
    close();
}


void memberViewLoans::on_reservedBooksBtn_clicked()
{
    emit showReservesWindow();
    hide();
}


void memberViewLoans::on_signoutBtn_clicked()
{
    emit signOut();
    close();
}

