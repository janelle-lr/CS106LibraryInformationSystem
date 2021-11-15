#include "admincatalogue.h"
#include "ui_admincatalogue.h"
#include <QGridLayout>


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

void adminCatalogue::createWidgets(int row, int col, QString title, QString author){
    //Creating a gridlayout
    QGridLayout* group = new QGridLayout();

    //creating buttons
    button = new QPushButton("Edit");
    button2 = new QPushButton("Delete");

    //creating labels
    QLabel* label = new QLabel("image");
    QLabel* label2 = new QLabel(title);
    QLabel* label3 = new QLabel(author);

    //adding widgets to gridlayout
    group->addWidget(label,0,0);
    group->addWidget(label2,0,1);
    group->addWidget(label3,1,1);
    group->addWidget(button,2,1);
    group->addWidget(button2,2,2);

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();
    //putting gridlayout inside group box
    groupBox->setLayout(group);
    groupBox->setMaximumSize(QSize(350,150));//QSize(width, height)
    groupBox->setMinimumSize(QSize(350,150));
    //qApp->setStylesheet("QGroupBox{margin:90px}");
    ui->gridLayout_2->addWidget(groupBox,row,col);
    //ui->scrollArea->addWidget(groupBox,row,col);
}

void adminCatalogue::addRecords(){
    SystemLibrary sysLib;

    QVector<Book> book;
    book = sysLib.getAllBooks();

    for(int i = 0; i < book.size(); i++) {
        qDebug() << book[i].getBookId() << "\n" << book[i].getBookName() << "\n i = " << i << "\n i % 2 ==" << i % 2;//prints in application output
        QString title = book[i].getBookName();
        QString author = book[i].getAuthorName();

        if (i % 2 == 0) {
            createWidgets(i,0,title,author);
        }
        else {
            createWidgets(i - 1,1,title,author);
        }

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

void adminCatalogue::on_pushButton_clicked()
{
    addRecords();
}


void adminCatalogue::on_pushButton_2_clicked()
{
    hide();

}

