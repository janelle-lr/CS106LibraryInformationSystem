#include "membercatalogue.h"
#include "ui_membercatalogue.h"


memberCatalogue::memberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("Catalogue");

    //for database
    systemlibrary->buildDatabase();

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));
}

memberCatalogue::~memberCatalogue()
{
    delete ui;
}

void memberCatalogue::setAccID(QString username) {
    this->userId = username;

    qDebug() << "userId ==" << userId;
    addRecords();
}

void memberCatalogue::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover, QString bookId, QString bookStock){
    //Creating a gridlayout
    QHBoxLayout* group = new QHBoxLayout();

    //creating buttons
    SystemLibrary sysLib;
    BookItem bookItem;
    QVector<Member> member;
    member = sysLib.getAllMemberDetails();
    QVector<Book> book;
    book = sysLib.getAllBooks();

    //for (int k = 0; k < book.size(); k++) {
    if (sysLib.isLoaned(userId, bookId)) {
            button = new QPushButton("Return");
           //break;
    }
    else if (!sysLib.isPreBook(userId, bookId)) {
        for (int k = 0; k < book.size(); k++){
            if (book[k].getStock() == 0 && book[k].getAvailStatus() == 0 && book[k].getBookId() == bookId) {
                button = new QPushButton("Reserve");
                break;
            }
            else
                button = new QPushButton("Loan");
        }

    }
    else {
            button = new QPushButton("Loan");
       //break;
    }
    //}
    button2 = new QPushButton("View");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);
    QLabel* label4 = new QLabel("Copies Available: " + bookStock);

    //Styling buttons and labels
    //label->setStyleSheet("QLabel{background: white;}");
    label2->setStyleSheet("QLabel{font-size: 18px; font-weight: 500; margin-left: 5px;}");
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 40px; margin-left: 5px;}");
    label4->setStyleSheet("QLabel{font-size: 15px; /*margin-bottom: 65px;*/ margin-left: 5px;}");
    button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
    //button->setMaximumWidth(160);
    //button2->setMaximumWidth(140);
    button2->setStyleSheet("QPushButton{max-width: 100px; border: 1px solid; border-color: #E78A6B; color:  #E78A6B; font-weight: 500;}");

    QPixmap image(bookCover);
    label->setPixmap(image.scaled(550, 200, Qt::KeepAspectRatio));

    //adding widgets to horizontal layout
    group->addWidget(label,0);//widget, row, col
    //group->addWidget(label2,0);
    //group->addWidget(label3,1);
    //group->addWidget(button,2);
    //group->addWidget(button2,2);

    QFrame* buttonGroup = new QFrame();
    QFrame* labelGroup = new QFrame();
    QVBoxLayout* labelLayout = new QVBoxLayout();
    QHBoxLayout* buttonRow = new QHBoxLayout();

    labelGroup->setMaximumHeight(215);
    labelGroup->setMinimumHeight(215);
    //buttonGroup->setMaximumHeight(50);
    //buttonGroup->setMinimumHeight(50);
    labelGroup->setStyleSheet("QFrame{margin-right: 10px; border:none;}");
    buttonGroup->setStyleSheet("QFrame{border:none;}");

    labelLayout->addWidget(label2);
    labelLayout->addWidget(label3);
    labelLayout->addWidget(label4);
    labelGroup->setLayout(labelLayout);
    labelLayout->addWidget(buttonGroup,2);

    buttonRow->addWidget(button,0);
    buttonRow->addWidget(button2,1);
    buttonGroup->setLayout(buttonRow);

    group->addWidget(labelGroup, 1);
    //group->addWidget(buttonGroup,2);

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();

    //putting gridlayout inside group box
    groupBox->setLayout(group);

    //styling groupBox
    groupBox->setMaximumSize(QSize(450,225));//QSize(width, height)
    groupBox->setMinimumSize(QSize(450,225));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-right: 10px;border:none;}");

    ui->gridLayout_3->addWidget(groupBox,row,col);
    //ui->scrollArea->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void memberCatalogue::addRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    QString stockString = "";

    for(int i = 0; i < book.size(); i++) {
        qDebug() << book[i].getBookId() << "\n" << book[i].getBookName() << "\n" << book[i].getAuthorName();//prints in application output
        QString title = book[i].getBookName();
        QString author = book[i].getAuthorName();
        QPixmap image = book[i].getBookImageFilePath();
        int stock = book[i].getStock();
        stockString = QString::number(stock);

        if (i % 2 == 0) {
            createWidgets(i,0,title,author,image, book[i].getBookId(), stockString);
        }
        else {
            createWidgets(i - 1,1,title,author,image, book[i].getBookId(), stockString);
        }
    }

    //looping through button vector to make buttons work
    for(int i = 0; i < btn.size(); i++){
            connect(btn[i],SIGNAL(released()),this,SLOT(issueButtonClicked()));
    }

    for(int i = 0; i < btn2.size(); i++){
            connect(btn2[i],SIGNAL(released()),this,SLOT(viewButtonClicked()));
    }

}

void memberCatalogue::issueButtonClicked(){
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

        QMessageBox::information(this, "Reserve Book", "You have successfully reserved " + book[num].getBookName());
    } else {
        if (book[num].getAvailStatus() != 0 && book[num].getStock() > 0) {
        bookItem.setBookItemID(sysLib.generateID(7));
        bookItem.setBookItem_MemberID(userId);
        bookItem.setBookItem_BookID(book[num].getBookId());
        sysLib.loanBook(bookItem);
        QMessageBox::information(this, "Loaned", "You have loaned " + book[num].getBookName() + " for 7 days.");
        }
    }

    deleteRecords();
}

void memberCatalogue::viewButtonClicked(){
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
    QMessageBox::information(this,"Button",QString::number(num) + " From button 2");

    bookdetails = new BookDetails(this);
    connect(bookdetails, SIGNAL(showBookDetails()), this, SLOT(show()));
    bookdetails->show();
    bookdetails->setNum(num,userId);
}

void memberCatalogue::deleteRecords(){
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
