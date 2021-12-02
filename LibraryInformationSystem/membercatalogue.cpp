#include "membercatalogue.h"
#include "ui_membercatalogue.h"


memberCatalogue::memberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("BiblioThicc Libraries - Catalogue");

    //for database
    systemlibrary->buildDatabase();

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    QPixmap img(":/resources/images/catalogue.png");
    ui->catalogueIcon->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/account.png");
    ui->accountIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img3(":/resources/images/uis_signout.png");
    ui->signoutIcon->setPixmap(img3.scaled(40, 40, Qt::KeepAspectRatio));
}

memberCatalogue::~memberCatalogue()
{
    delete ui;
}

void memberCatalogue::setAccID(QString username) {
    this->userId = username;

    qDebug() << "userId ==" << userId;
    addRecords();

    QVector<NotificationLog> log = systemlibrary->getNotificationLog();
    QStringList dueList = systemlibrary->getNearbyDueDateBooks(userId);
    int count = 0;

    //check if user needs to be notified for any nearby expired books
    overDueNotification = new OverdueNotification(this);
    overDueNotification->setMemberID(userId);
    if(dueList.size() != 0)
        overDueNotification->show();


    //check if user needs to be notified for any returned book
    for(int i = 0; i < log.size(); i++){
        if(log[i].getMemberID() == userId && log[i].getstatus() == false && log[i].getnotificationType() == "@Returned")
            count++;
    }
    returnBookNotification = new ReturnBooksNotification(this);
    returnBookNotification->setMemberID(userId);
    if(count != 0)
        returnBookNotification->show();

    count = 0;
    //check if user needs to be notified for any Loaned book
    for(int i = 0; i < log.size(); i++){
        if(log[i].getMemberID() == userId && log[i].getstatus() == false && log[i].getnotificationType() == "@Loaned")
            count++;
    }
    loanedBookNotificatio = new LoanedBookNotification(this);
    loanedBookNotificatio->setMemberID(userId);
    if(count != 0)
        loanedBookNotificatio->show();
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

    if (sysLib.isLoaned(userId, bookId)) {
        button = new QPushButton("Return");
        button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
    }
    else if (!sysLib.isPreBook(userId, bookId)) {
        for (int k = 0; k < book.size(); k++){
            if (book[k].getStock() == 0 && book[k].getAvailStatus() == 0 && book[k].getBookId() == bookId) {
                button = new QPushButton("Reserve");
                button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
                break;
            }
            else
                button = new QPushButton("Loan");
            button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
        }

    }
    else if (sysLib.isPreBook(userId, bookId)) {
        button = new QPushButton("Reserved");
        button->setStyleSheet("QPushButton{max-width: 100px; border: 1px solid; border-color: #E78A6B; color:  #E78A6B; font-weight: 500;}");
    }
    else {
        button = new QPushButton("Loan");
        button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
    }
    button2 = new QPushButton("View");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);
    QLabel* label4 = new QLabel("Copies Available: " + bookStock);

    //Styling buttons and labels
    label2->setWordWrap(true);
    label2->setStyleSheet("QLabel{font-size: 18px; font-weight: 500; margin-left: 5px;}");
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 40px; margin-left: 5px;}");
    label4->setStyleSheet("QLabel{font-size: 15px; /*margin-bottom: 65px;*/ margin-left: 5px;}");

    button2->setStyleSheet("QPushButton{max-width: 100px; border: 1px solid; border-color: #E78A6B; color:  #E78A6B; font-weight: 500;}");

    QPixmap image(bookCover);
    label->setPixmap(image.scaled(550, 200, Qt::KeepAspectRatio));

    //adding widgets to horizontal layout
    group->addWidget(label,0);//widget, row, col

    QFrame* buttonGroup = new QFrame();
    QFrame* labelGroup = new QFrame();
    QVBoxLayout* labelLayout = new QVBoxLayout();
    QHBoxLayout* buttonRow = new QHBoxLayout();

    labelGroup->setMaximumHeight(215);
    labelGroup->setMinimumHeight(215);
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

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();

    //putting gridlayout inside group box
    groupBox->setLayout(group);

    //styling groupBox
    groupBox->setMaximumSize(QSize(450,225));//QSize(width, height)
    groupBox->setMinimumSize(QSize(450,225));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-right: 10px;border:none;}");

    gBoxAZ.push_back(groupBox);
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
    ui->comboBox->setCurrentIndex(0);
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
    //QMessageBox::information(this,"Button",QString::number(num) + " From button 2");

    bookdetails = new BookDetails(this);
    connect(bookdetails, SIGNAL(showCatalogue()), this, SLOT(show()));
    bookdetails->show();
    bookdetails->setNum(num,userId);
    hide();
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

void memberCatalogue::on_accountBtn_clicked()
{
    memberaccountview = new memberAccountView(this);
    memberaccountview->setAccID(userId);
    connect(memberaccountview, SIGNAL(showCatalogue()), this, SLOT(show())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    connect(memberaccountview, SIGNAL(signOut()), this, SLOT(signOutAcc()));
    memberaccountview->show();
    hide();
}

void memberCatalogue::signOutAcc(){
    emit showMainWindow();
    systemlibrary->checkLoanedBooks();
    systemlibrary->checkPreorders();
    close();
}

void memberCatalogue::on_signoutBtn_clicked()
{
    emit showMainWindow();
    systemlibrary->checkLoanedBooks();
    systemlibrary->checkPreorders();
    close();
}


void memberCatalogue::on_comboBox_activated(int index)
{
    QVector<Book> book = systemlibrary->getAllBooks();
    QStringList bookList;
    QStringList authorList;

    int row = 0, col = 0;

    for(int i = 0; i < book.size(); i++){
        bookList.append(book[i].getBookName());
    }

    for(int x = 0; x < book.size(); x++){
        authorList.append(book[x].getAuthorName());
    }

    //Title A-Z
    if(index == 1){
        bookList.sort();
        for(int i = 0; i < bookList.size(); i++){
            for(int x = 0; x < book.size(); x++){
                if(bookList[i] == book[x].getBookName()){
                   ui->gridLayout_3->addWidget(gBoxAZ[x],row,col);
                   col++;
                }
                if(col == 2){
                    col = 0;
                    row++;
                }
            }
        }
    }

    //Title Z-A
    else if(index == 2){
        bookList.sort();
        for(int i = bookList.size(); i > 0; i--){
            for(int x = 0; x < book.size(); x++){
                if(bookList[i-1] == book[x].getBookName()){
                   ui->gridLayout_3->addWidget(gBoxAZ[x],row,col);
                   col++;
                }
                if(col == 2){
                    col = 0;
                    row++;
                }
            }
        }
    }

    //Author A-Z
    if(index == 3){
        authorList.sort();
        for(int i = 0; i < bookList.size(); i++){
            for(int x = 0; x < book.size(); x++){
                if(authorList[i] == book[x].getAuthorName()){
                   ui->gridLayout_3->addWidget(gBoxAZ[x],row,col);
                   col++;
                }
                if(col == 2){
                    col = 0;
                    row++;
                }
            }
        }
    }

    //Author Z-A
    else if(index == 4){
        authorList.sort();
        for(int i = bookList.size(); i > 0; i--){
            for(int x = 0; x < book.size(); x++){
                if(authorList[i-1] == book[x].getAuthorName()){
                   ui->gridLayout_3->addWidget(gBoxAZ[x],row,col);
                   col++;
                }
                if(col == 2){
                    col = 0;
                    row++;
                }
            }
        }
    }
}

