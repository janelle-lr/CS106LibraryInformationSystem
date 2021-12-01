#include "adminmembercatalogue.h"
#include "ui_adminmembercatalogue.h"

adminMemberCatalogue::adminMemberCatalogue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminMemberCatalogue)
{
    ui->setupUi(this);

    //for logo in UI
    QPixmap logo(":/resources/images/miniLogo.png");
    ui->logoImage->setPixmap(logo.scaled(300, 75, Qt::KeepAspectRatio));

    //for icons in UI
    QPixmap img(":/resources/images/catalogue.png");
    ui->catalogueIcon_2->setPixmap(img.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img2(":/resources/images/viewMembers.png");
    ui->memberIcon_2->setPixmap(img2.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img4(":/resources/images/uis_signout.png");
    ui->signoutIcon_2->setPixmap(img4.scaled(40, 40, Qt::KeepAspectRatio));

    QPixmap img5(":/resources/images/addMember.png");
    ui->addMemberIcon->setPixmap(img5.scaled(40, 40, Qt::KeepAspectRatio));

    addRecords();
}

adminMemberCatalogue::~adminMemberCatalogue()
{
    delete ui;
}

//NAV BAR CONNECTION START
void adminMemberCatalogue::on_catalogueBtn_2_clicked()
{
    emit showAdmin();
    hide();
}

void adminMemberCatalogue::on_signoutBtn_2_clicked()
{
    emit getMainWindow();
    hide();
}
//NAV BAR CONNECTION END

void adminMemberCatalogue::on_addMemberBtn_clicked()
{
    adminaddmember = new adminAddMember(this);
    connect(adminaddmember, SIGNAL(openadminAddMember()), this, SLOT(deleteAllRecords())); //connect(pointerName, SIGNAL(openWindowYouWantToOpen()), this, SLOT(openWindowUrOpeningFrom()));
    adminaddmember->show();
}

void adminMemberCatalogue::createWidgets(int row, int col, QString name, QString userId, int i){
    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();

    //Creating a gridlayout
    QVBoxLayout* group = new QVBoxLayout();

    //creating buttons
    button = new QPushButton("Edit");
    button2 = new QPushButton("Delete");

    //creating labels
    QLabel* label = new QLabel(name);
    QLabel* label2 = new QLabel("User ID: " + userId);
    //QLabel* label3 = new QLabel(author);

    //Styling buttons and labels
    label->setStyleSheet("QLabel{font-size: 18px; font-weight: 500; margin-left: 5px;}");
    label2->setStyleSheet("QLabel{font-size: 15px; margin-bottom: 40px; margin-left: 5px;}");
    button->setStyleSheet("QPushButton{max-width: 105px; background-color: #E78A6B; color:  #fff; font-weight: 500;}");
    button2->setStyleSheet("QPushButton{max-width: 100px; border: 1px solid; border-color: #E78A6B; color:  #E78A6B; font-weight: 500;}");

    //adding widgets to horizontal layout
    group->addWidget(label,0);//widget, row
    group->addWidget(label2,1);

    QFrame* buttonGroup = new QFrame();
    QHBoxLayout* buttonRow = new QHBoxLayout();

    buttonGroup->setMaximumHeight(50);
    buttonGroup->setMinimumHeight(50);
    buttonGroup->setStyleSheet("QFrame{border:none;}");

    buttonRow->addWidget(button,0);
    buttonRow->addWidget(button2,1);
    buttonGroup->setLayout(buttonRow);

    group->addWidget(buttonGroup,3);

    //creating group box widget
    QGroupBox* groupBox = new QGroupBox();

    //putting gridlayout inside group box
    groupBox->setLayout(group);

    //styling groupBox
    groupBox->setMaximumSize(QSize(450,170));//QSize(width, height)
    groupBox->setMinimumSize(QSize(450,170));
    groupBox->setStyleSheet("QGroupBox{margin-bottom: 10px; margin-left: 10px; border:none;}");


    if(member[i].getAccStatus() == true) {
        ui->gridLayout_3->addWidget(groupBox,row,col);
        qDebug() << i << " " << member[i].getAccStatus();
    }
    //ui->scrollArea->addWidget(groupBox,row,col);
    btn.push_back(button);
    btn2.push_back(button2);
}

void adminMemberCatalogue::addRecords(){
    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();
    int activeUserIndex = 1;
    qDebug() << member.size();

    for(int i = 0; i < member.size(); i++) {
        qDebug() << member[i].getMemberId() << "\n" << member[i].getName();//prints in application output

        if(member[i].getAccStatus() == true) {
            activeUserIndex++;
        }

        if (activeUserIndex % 2 == 0) {
            createWidgets(activeUserIndex,0,member[i].getName(),member[i].getAccId(), i);
        }
        else {
            createWidgets(activeUserIndex - 1,1,member[i].getName(),member[i].getAccId(), i);
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

void adminMemberCatalogue::editButtonClicked(){
    int num = 7;
    qDebug() << btn.size();
    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn[i] == button){
            num = i;
            break;
        }
    }
    QMessageBox::information(this,"Button",QString::number(num));
    adminmemberedit = new adminMemberEdit(this);
    connect(adminmemberedit, SIGNAL(showadminMemberEdit()), this, SLOT(deleteAllRecords()));
    adminmemberedit->show();
    adminmemberedit->setNum(num);
}

void adminMemberCatalogue::deleteButtonClicked(){
    SystemLibrary sysLib;

    QVector<Member> member;
    member = sysLib.getAllMemberDetails();

    int num = 8;
    QPushButton *button = (QPushButton *)sender();
    for(int i = 0; i < btn.size(); i++){
        if(btn2[i] == button){
            num = i;
            break;
        }
    }
    QMessageBox::information(this,"Button",QString::number(num) + " From button 2");
    //QMessageBox::question(this,"Delete Member", "Are you sure you want to permanently delete " + book[num].getBookName() + " from library records?");

    while ( QLayoutItem* item = ui->gridLayout_3->layout()->takeAt( 0 ) )
    {
        for(int i = 0; i < member.size(); i++) {
            if(num == i){
                member[i].setAccStatus(0);
                sysLib.updateAllMemberDetails(member);
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

void adminMemberCatalogue::deleteAllRecords(){
    qDebug() << "Delete recs";
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
        Q_ASSERT( ! item->layout() );
        delete item->widget();//clears whole widget like a 'refresh' of page
        delete item;
    }
    btn.clear();
    btn2.clear();
    addRecords();//reprints updated catalogue
}
