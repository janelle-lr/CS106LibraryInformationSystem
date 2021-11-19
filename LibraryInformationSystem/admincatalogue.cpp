#include "admincatalogue.h"
#include "ui_admincatalogue.h"
#include <QGridLayout>
#include <QSpacerItem>


adminCatalogue::adminCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminCatalogue)
{
    ui->setupUi(this);
}

adminCatalogue::~adminCatalogue()
{
    delete ui;
}

void adminCatalogue::createWidgets(int row, int col, QString title, QString author, QPixmap bookCover){
    //Creating a gridlayout
    QGridLayout* group = new QGridLayout();

    //creating buttons
    button = new QPushButton("Edit");
    button2 = new QPushButton("Delete");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);

    label->setStyleSheet("QLabel{background: white;}");
    label2->setStyleSheet("QLabel{font-size: 20px;}");
    label3->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 80px;}");

    QPixmap image(bookCover);
    label->setPixmap(image.scaled(177, 235, Qt::KeepAspectRatio));

    //adding widgets to gridlayout
    group->addWidget(label,0,0);
    group->addWidget(label2,0,1);
    group->addWidget(label3,1,1);
    group->addWidget(button,2,1);
    group->addWidget(button2,2,2);

    //QSpacerItem* verticalSpacer

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();
    //putting gridlayout inside group box
    groupBox->setLayout(group);
    groupBox->setMaximumSize(QSize(579,285));//QSize(width, height)
    groupBox->setMinimumSize(QSize(579,285));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px;}");

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
        qDebug() << book[i].getBookId() << "\n" << book[i].getBookName() << "\n i = " << i << "\n i % 2 ==" << i % 2;//prints in application output
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



    //createWidgets(0,0,title);//book title
    //createWidgets(0,1,"Jade");

//    createWidgets(1,0,"Levi");
//    createWidgets(1,1,"Rock Lee");

//    createWidgets(2,0,"Geralt");
//    createWidgets(2,1,"Anna");

//    createWidgets(3,0,"Buwad");
//    createWidgets(3,1,"Langka");

//    createWidgets(4,0,"Homba");
//    createWidgets(4,1,"Tinoloan");
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
    admineditbook = new adminEditBook();
    admineditbook->show();
    admineditbook->setNum(num);
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

