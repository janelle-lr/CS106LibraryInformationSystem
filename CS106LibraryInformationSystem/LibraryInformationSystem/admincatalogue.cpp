#include "admincatalogue.h"
#include "ui_admincatalogue.h"
#include <QGridLayout>
#include <QSpacerItem>


adminCatalogue::adminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminCatalogue)
{
    ui->setupUi(this);

    setWindowTitle("BiblioThicc Libraries - View Catalogue Page");

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    //for icons in UI
    QPixmap img(":/resources/images/catalogue.png");
    ui->catalogueIcon->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/viewMembers.png");
    ui->memberIcon->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img3(":/resources/images/account.png");
    ui->accountIcon->setPixmap(img3.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img4(":/resources/images/uis_signout.png");
    ui->signoutIcon->setPixmap(img4.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img5(":/resources/images/addBook.png");
    ui->addBookIcon->setPixmap(img5.scaled(25, 25, Qt::KeepAspectRatio));

    addRecords();
}

adminCatalogue::~adminCatalogue()
{
    delete ui;
}

void adminCatalogue::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover){
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
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 55px; margin-left: 5px;}");
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

    labelGroup->setMaximumHeight(235);
    labelGroup->setMinimumHeight(235);
    //buttonGroup->setMaximumHeight(50);
    //buttonGroup->setMinimumHeight(50);
    labelGroup->setStyleSheet("QFrame{margin-right: 10px; border:none;}");
    buttonGroup->setStyleSheet("QFrame{border:none;}");

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
    groupBox->setMaximumSize(QSize(450,225));//QSize(width, height)
    groupBox->setMinimumSize(QSize(450,225));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-right: 10px;border:none;}");

    ui->gridLayout_3->addWidget(groupBox,row,col);
    //ui->scrollArea->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void adminCatalogue::addRecords(){
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
            connect(btn[i],SIGNAL(released()),this,SLOT(editButtonClicked()));
        }

    for(int i = 0; i < btn2.size(); i++){
            connect(btn2[i],SIGNAL(released()),this,SLOT(deleteButtonClicked()));
    }
}

void adminCatalogue::editButtonClicked(){
    int num = 7;
    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn[i] == button){
            num = i;
            break;
        }
    }
    QMessageBox::information(this,"Button",QString::number(num));
    admineditbook = new adminEditBook(this);
    connect(admineditbook, SIGNAL(showadminEditBook()), this, SLOT(show()));
    admineditbook->show();
    admineditbook->setNum(num);
    //hide();
}

void adminCatalogue::deleteButtonClicked(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    int num = 8;
    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn2[i] == button){
            num = i;
            break;
        }
    }
    QMessageBox::information(this,"Button",QString::number(num) + " From button 2");
    //QMessageBox::question(this,"Delete Book", "Are you sure you want to permanently delete " + book[num].getBookName() + " from library records?");

    while ( QLayoutItem* item = ui->gridLayout_3->layout()->takeAt( 0 ) )
    {
        for(int i = 0; i < book.size(); i++) {
            if(num == i){
                QString id = book[i].getBookId();
                sysLib.removeBookRecord(id);
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




void adminCatalogue::on_pushButton_clicked()
{
    addRecords();
}


void adminCatalogue::on_pushButton_2_clicked()
{
    while ( QLayoutItem* item = ui->gridLayout_3->layout()->takeAt( 0 ) )
        {
            Q_ASSERT( ! item->layout() );
            delete item->widget();
            delete item;
        }

    btn.clear();
    btn2.clear();

}

