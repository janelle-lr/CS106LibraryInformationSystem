#include "membercatalogue.h"
#include "ui_membercatalogue.h"


memberCatalogue::memberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::memberCatalogue)
{
    ui->setupUi(this);
    setWindowTitle("Catalogue");

    //for database
<<<<<<< HEAD:CS106LibraryInformationSystem-janelle/LibraryInformationSystem/membercatalogue.cpp
    sysLib->buildDatabase();
=======
    systemlibrary->buildDatabase();
>>>>>>> 2f747572dcb20e883f439ba5722f45ddb2727113:LibraryInformationSystem/membercatalogue.cpp

    //for logo in UI
    QPixmap logo(":/resources/images/bblLogo.png");
    ui->logoImage->setPixmap(logo.scaled(450, 74, Qt::KeepAspectRatio));

    addRecords();
}

memberCatalogue::~memberCatalogue()
{
    delete ui;
}


void memberCatalogue::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover){
    //Creating a gridlayout
    QHBoxLayout* group = new QHBoxLayout();

    //creating buttons
    button = new QPushButton("Edit");
    button2 = new QPushButton("Delete");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);

    //Styling buttons and labels
    //label->setStyleSheet("QLabel{background: white;}");
    label2->setStyleSheet("QLabel{font-size: 18px; font-weight: 500; margin-left: 5px;}");
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 65px; margin-left: 5px;}");
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

    labelGroup->setMaximumHeight(180);
    labelGroup->setMinimumHeight(180);
    buttonGroup->setMaximumHeight(50);
    buttonGroup->setMinimumHeight(50);
    labelGroup->setStyleSheet("QFrame{margin-right: 10px; /*border:none;*/}");
    buttonGroup->setStyleSheet("QFrame{background: white; /*border:none;*/}");

    labelLayout->addWidget(label2);
    labelLayout->addWidget(label3);
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
    groupBox->setMaximumSize(QSize(450,200));//QSize(width, height)
    groupBox->setMinimumSize(QSize(450,200));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-right: 10px;/*border:none;*/}");

    ui->gridLayout_3->addWidget(groupBox,row,col);
    //ui->scrollArea->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void memberCatalogue::addRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    for(int i = 0; i < book.size(); i++) {
        qDebug() << book[i].getBookId() << "\n" << book[i].getBookName() << "\n" << book[i].getAuthorName();//prints in application output
        QString title = book[i].getBookName();
        QString author = book[i].getAuthorName();
        QPixmap image = book[i].getBookImageFilePath();

        if (i % 2 == 0) {
            createWidgets(i,0,title,author,image);
        }
        else {
            createWidgets(i - 1,1,title,author,image);
        }
    }

    //looping through button vector to make buttons work
    for(int i = 0; i < btn.size(); i++){
            connect(btn[i],SIGNAL(released()),this,SLOT(issueButtonClicked()));
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
            for (int j = 0; j < member.size(); j++) {
                if (sysLib.isLoaned(member[j].getMemberId(), book[j].getBookId())) {
                    QMessageBox::warning(this, "Loaned", "You have already loaned this book");
                }else {
                    bookItem.setBookItemID(sysLib.generateID(7));
                    bookItem.setBookItem_MemberID(member[j].getMemberId());
                    bookItem.setBookItem_BookID(book[j].getBookId());
                    sysLib.loanBook(bookItem);
                    QMessageBox::information(this, "Loaned", "Book has been loaned.");
                }
            }
            break;
        }
    }




    //admineditbook = new adminEditBook();
    //admineditbook->show();
    //admineditbook->setNum(num);
}


void memberCatalogue::on_pushButton_clicked()
{
    QVector<Book> getAllBooks();
}

