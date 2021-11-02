#include "librarydatabase.h"

LibraryDatabase::LibraryDatabase(){}
//This function creates the database
void LibraryDatabase::buildDatabase(){

    QDir dir("LibraryDB");
    if(!dir.exists()){
        dir.mkpath("LibraryDB");
        qDebug() << "Database has been created...\n";
    }else
        qDebug() << "Database already exist...\n";

    //Create Account data Table
    QFile file("LibraryDB/Accounts.csv");
    if(!QFileInfo::exists("LibraryDB/Accounts.csv")){
        //if cant be open
        if(!file.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error can't open file";
        }
        //reference to file
        QTextStream out(&file);
        //File header
        out << "AccountID" << "," << "User ID" << "," << "Account Type"  << "," << "Password" << "," << "Date Created" << "," << "Account Status" << "\n";
        //flush the file after and close
        file.flush();
        file.close();
        qDebug() << "Account file created";
        createTestAccount();
    }else
        qDebug() << "File already exists";

    //create Member table
    QFile accFile("LibraryDB/Member.csv");
    if(!QFileInfo::exists("LibraryDB/Member.csv")){
        //if cant be open
        if(!accFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error can't open file";
        }
        //reference to file
        QTextStream out(&accFile);
        //File header
        out << "MemberID" << "," << "Name" << "," << "Age" << "," << "Date of Birth" << "," << "Email" << "," << "Mobile number" << "\n";
        //flush the file after and close
        accFile.flush();
        accFile.close();
        qDebug() << "Account file created";
    }else
        qDebug() << "File already exists";

    //create Book table
    QFile bookFile("LibraryDB/Book.csv");
    if(!QFileInfo::exists("LibraryDB/Book.csv")){
        //if the file is not open
        if(!bookFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&bookFile);
        out << "BookID" << "," << "Book Name" << "," << "Genre" << "," << "InStock" << "," << "Book Copies" << "," << "Available Status" << "," << "Book Image Filepath" << "\n";
        //flush the file after and close
        bookFile.flush();
        bookFile.close();
    }else
        qDebug() << "File already exists";

    //create Author table
    QFile authorFile("LibraryDB/Author.csv");
    if(!QFileInfo::exists("LibraryDB/Author.csv")){
        //if the file is not open
        if(!authorFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&authorFile);
        out << "AuthorID" << "," << "BookID" << "," << "Author Name" << "," << "Biography" << "," << "Date of Birth" << "\n";
        //flush the file after and close
        authorFile.flush();
        authorFile.close();
    }else
        qDebug() << "File already exists";

    //create Author table
    QFile pubFile("LibraryDB/Publisher.csv");
    if(!QFileInfo::exists("LibraryDB/Publisher.csv")){
        //if the file is not open
        if(!pubFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&pubFile);
        out << "PublisherID" << "," << "BookID" << "," << "Publisher Name" << "," << "Publication Date" << "," << "Location" << "\n";
        //flush the file after and close
        pubFile.flush();
        pubFile.close();
    }else
        qDebug() << "File already exists";

    //create Book Item table
    QFile bookItemFile("LibraryDB/BookItem.csv");
    if(!QFileInfo::exists("LibraryDB/BookItem.csv")){
        //if the file is not open
        if(!bookItemFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&bookItemFile);
        out << "BookItemID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "Expiry Date" << "," << "Returned Date" << "," << "User Access" << "\n";
        //flush the file after and close
        bookItemFile.flush();
        bookItemFile.close();
    }else
        qDebug() << "File already exists";

    //create PreBook table
    QFile preBookFile("LibraryDB/PreBook.csv");
    if(!QFileInfo::exists("LibraryDB/PreBook.csv")){
        //if the file is not open
        if(!preBookFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&preBookFile);
        out << "PreBookID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "Pre Order Status" << "\n";
        //flush the file after and close
        preBookFile.flush();
        preBookFile.close();
    }else
        qDebug() << "File already exists";
}
//This functions creates the defautl Admin and the test member
void LibraryDatabase::createTestAccount(){
    QFile file("LibraryDB/Admin.csv");
    //if the file is not open
    if(!file.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    out << "AdminID" << "\n";
    out << "STJB001" << "\n";
    //flush the file after and close
    file.flush();
    file.close();

    //create admin account and test member account
    QFile accFile("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!accFile.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream accOut(&accFile);
    QDate date = QDate::currentDate();
    accOut << "AccountID" << "," << "User ID" << "," << "Account Type"  << "," << "Password" << "," << "Date Created" << "," << "Account Status" << "\n";
    accOut << "230069BB" << "," << "Admin" << "," << "@Admin" << "," << "AdminPass" << "," << date.toString() << "," << 1 << "\n";
    accOut << "230020SJ" << "," << "TestMember" << "," << "@Member" << "," << "MemberPass" << "," << date.toString() << "," << 1 << "\n";
}
//This function updates the Admin details
void LibraryDatabase::updateAdminDetails(Admin admin){
    QFile file("LibraryDB/Admin.csv");
    //if the file is not open
    if(!file.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    out << "AdminID" << "\n";
    out << admin.getAdminID() << "\n";

    //flush the file after and close
    file.flush();
    file.close();

    //update Account database
    QFile accFile("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!accFile.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream accOut(&accFile);
    accOut << "AccountID" << "," << "User ID" << "," << "Account Type"  << "," << "Password" << "," << "Date Created" << "," << "Account Status" << "\n";
    accOut << admin.getAccId() << "," << admin.getAdminID() << "," << admin.getAccType() << "," << admin.getPassword() << "," << admin.getDateCreated() << "," << admin.getAccStatus() << "\n";
    QVector<Member> member;
    member = getAllMemberDetails();
    for(int i = 0; i < member.size(); i++){
        accOut << member[i].getAccId() << "," << member[i].getMemberId() << "," << member[i].getAccType() << "," << member[i].getPassword() << "," << member[i].getDateCreated() << "," << member[i].getAccStatus() << "\n";
    }
    //flush the file after and close
    accFile.flush();
    accFile.close();
}
//This function returns the admin details
Admin LibraryDatabase::getAdminDeatils(){
    Admin admin;
    //get all data from Member.csv and store it in Qvector
    QFile file("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="AdminID" && list[0] != ""){
                admin.setAccId(list[0]);
                admin.setAdminId(list[1]);
                admin.setAccType(list[2]);
                admin.setPassword(list[3]);
                admin.setDateCreated(list[4]);
                admin.setAccStatus(list[5].toInt());
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        file.close();
    }
    return admin;
}

//This function checks if admin account is valid
bool LibraryDatabase::checkAdminAccount(QString username,QString pass){
    bool exist = false;
    QFile file("LibraryDB/Admin.csv");

    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }

    //reference to your file
    QTextStream in(&file);
    QStringList list;
    QString line;
    //loop through csv data
    while(!in.atEnd()){
        line = file.readLine().replace("\n","");
        list.append(line.split(","));
        if(list[0] == username){
            if(list[1] == pass){
                exist = true;
                break;
            }
        }
        list.clear();
    }
    //we dont need to flush bec we are only reading
    file.close();
    return exist;
}
//This function checks if member account is valid
bool LibraryDatabase::checkAccount(QString username,QString pass){
    bool exist = false;
    QFile file("LibraryDB/Accounts.csv");

    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }

    //reference to your file
    QTextStream in(&file);
    QStringList list;
    QString line;
    //loop through csv data
    while(!in.atEnd()){
        line = file.readLine().replace("\n","");
        list.append(line.split(","));
        if(list[0] == username){
            if(list[3] == pass){
                exist = true;
                break;
            }
        }
        list.clear();
    }
    //we dont need to flush bec we are only reading
    file.close();
    return exist;
}
//This function creates a member and adds it to the database
void LibraryDatabase::createMember(Member member){
    QFile file("LibraryDB/Member.csv");
    //if the file is not open
    if(!file.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    out << member.getMemberId() << "," << member.getName() << "," << member.getAge() << "," << member.getDob() << "," << member.getEmail() << "," << member.getMobileNum() << "\n";

    //flush the file after and close
    file.flush();
    file.close();

    QFile accFile("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!accFile.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream accOut(&accFile);
    accOut << member.getAccId() << "," << member.getMemberId() << "," << "@Member"  << "," << member.getPassword() << "," << member.getDateCreated() << "," << 1 << "\n";

    //flush the file after and close
    accFile.flush();
    accFile.close();
}
//This function is used to check if ID is valid
bool LibraryDatabase::isIdUnique(QString id,int fileName){
    bool unique = true;
    QStringList files = {"LibraryDB/Admin.csv","LibraryDB/Member.csv","LibraryDB/Accounts.csv","LibraryDB/Book.csv","LibraryDB/Author.csv"
                          "LibraryDB/Publisher.csv","LibraryDB/BookItem.csv","LibraryDB/PreBook.csv"};
    QFile file(files[fileName-1]);
    qDebug() << files[fileName-1];
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }

    //reference to your file
    QTextStream in(&file);
    QStringList list;
    QString line;
    //loop through csv data
    while(!in.atEnd()){
        line = file.readLine().replace("\n","");
        list.append(line.split(","));
        if(list[0] == id){
            unique = false;
            break;
        }
        list.clear();
    }
    //we dont need to flush bec we are only reading
    file.close();
    return unique;
}
//This function gets all member and its details including there account details
QVector<Member> LibraryDatabase::getAllMemberDetails(){
    Member member;
    QVector<Member> ListOfMembers;

    //get all data from Member.csv and store it in Qvector
    QFile file("LibraryDB/Member.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="MemberID" && list[0] != ""){
                member.setMemberID(list[0]);
                member.setName(list[1]);
                member.setAge(list[2].toInt());
                member.setDob(list[3]);
                member.setEmail(list[4]);
                member.setMobileNum(list[5]);
                ListOfMembers.push_back(member);
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        file.close();
    }

    QFile accFile("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!accFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&accFile);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = accFile.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="AccountID" && list[0] != ""){
                for(int i = 0; i < ListOfMembers.size(); i++){
                    if(list[1] == ListOfMembers[i].getMemberId()){
                        ListOfMembers[i].setAccId(list[0]);
                        ListOfMembers[i].setAccType(list[2]);
                        ListOfMembers[i].setPassword(list[3]);
                        ListOfMembers[i].setDateCreated(list[4]);
                        ListOfMembers[i].setAccStatus(list[5].toInt());
                        break;
                    }
                }
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        accFile.close();
    }
    //Get all data from accounts and store it in Qvector
    return ListOfMembers;
}
//this function will update database with all the updated details of all members (Accounts.csv and Member.csv will be update)
void LibraryDatabase::updateAllMemberDetails(QVector<Member>member){
    //update Member database
    QFile file("LibraryDB/Member.csv");
    //if the file is not open
    if(!file.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    out << "MemberID" << "," << "Name" << "," << "Age" << "," << "Date of Birth" << "," << "Email" << "," << "Mobile number" << "\n";
    for(int i = 0; i < member.size(); i++){
        out << member[i].getMemberId() << "," << member[i].getName() << "," << member[i].getAge() << "," << member[i].getDob() << "," << member[i].getEmail() << "," << member[i].getMobileNum() << "\n";
    }
    //flush the file after and close
    file.flush();
    file.close();
    //update Account database
    QFile accFile("LibraryDB/Accounts.csv");
    //if the file is not open
    if(!accFile.open(QFile::WriteOnly | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream accOut(&accFile);
    Admin admin;
    admin = getAdminDeatils();
    accOut << "AccountID" << "," << "User ID" << "," << "Account Type"  << "," << "Password" << "," << "Date Created" << "," << "Account Status" << "\n";
    accOut << admin.getAccId() << "," << admin.getAdminID() << "," << admin.getAccType() << "," << admin.getPassword() << "," << admin.getDateCreated() << "," << admin.getAccStatus() << "\n";
    for(int i = 0; i < member.size(); i++){
        accOut << member[i].getAccId() << "," << member[i].getMemberId() << "," << member[i].getAccType() << "," << member[i].getPassword() << "," << member[i].getDateCreated() << "," << member[i].getAccStatus() << "\n";
    }
    //flush the file after and close
    accFile.flush();
    accFile.close();
}
//This function adds a book record in the database
void LibraryDatabase::addBook(Book book){
    //add record to database
    QFile file("LibraryDB/Book.csv");
    //if the file is not open
    if(!file.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    out << book.getBookId() << "," << book.getBookName() << "," << book.getGenre() << "," << book.getStock() << "," <<book.getBookCopies() << "," << book.getAvailStatus() << "," << book.getBookImageFilePath() << "\n";
    //flush the file after and close
    file.flush();
    file.close();

    //add record to database
    QFile authorFile("LibraryDB/Author.csv");
    //if the file is not open
    if(!authorFile.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream authorOut(&authorFile);
    authorOut << book.getAuthorId() << "," << book.getBookId() << "," << book.getAuthorName() << "," << book.getAuthorBiography() << "," <<book.getAuthorDob() << "\n";
    //flush the file after and close
    authorFile.flush();
    authorFile.close();

    //add record to database
    QFile publisherFile("LibraryDB/Publisher.csv");
    //if the file is not open
    if(!publisherFile.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream pubOut(&publisherFile);
    pubOut << book.getPublID() << "," << book.getBookId() << "," << book.getPubName() << "," << book.getPublicationDate() << "," <<book.getLocation() << "\n";
    //flush the file after and close
    publisherFile.flush();
    publisherFile.close();
}
//This function updates book details in the database
void LibraryDatabase::updateBook(Book){

}
//This function returns all book records in the database
QVector<Book> LibraryDatabase::getAllBooks(){
    QVector<Book> ListOfBooks;
    Book book;

    //get all data from Book.csv and store it in Qvector
    QFile file("LibraryDB/Book.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="BookID" && list[0] != ""){
                book.setBookid(list[0]);
                book.setBookName(list[1]);
                book.setGenre(list[2]);
                book.setStock(list[3].toInt());
                book.setBookCopies(list[4].toInt());
                book.setAvailStatus(list[5].toInt());
                book.setBookImageFilePath(list[6]);
                ListOfBooks.push_back(book);
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        file.close();
    }

    //get all data from Author.csv and store it in Qvector
    QFile authorFile("LibraryDB/Author.csv");
    //if the file is not open
    if(!authorFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&authorFile);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = authorFile.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="AuthorID" && list[0] != ""){
                for(int i = 0; i < ListOfBooks.size(); i++){
                    if(list[1] == ListOfBooks[i].getBookId()){
                        ListOfBooks[i].setAuthorId(list[0]);
                        ListOfBooks[i].setAuthorName(list[2]);
                        ListOfBooks[i].setAuthorBiography(list[3]);
                        ListOfBooks[i].setAuthorDob(list[4]);
                        break;
                    }
                }
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        authorFile.close();
    }

    //get all data from Publisher.csv and store it in Qvector
    QFile pubFile("LibraryDB/Publisher.csv");
    //if the file is not open
    if(!pubFile.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&pubFile);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = pubFile.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="PublisherID" && list[0] != ""){
                for(int i = 0; i < ListOfBooks.size(); i++){
                    if(list[1] == ListOfBooks[i].getBookId()){
                        ListOfBooks[i].setPublID(list[0]);
                        ListOfBooks[i].setPubName(list[2]);
                        ListOfBooks[i].setPublicationDate(list[3]);
                        ListOfBooks[i].setLocation(list[4]);
                        break;
                    }
                }
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        pubFile.close();
    }
    return ListOfBooks;
}
//This function updates all book details in the Database
void LibraryDatabase::updateAllBookDetails(QVector<Book> book){
    QFile bookFile("LibraryDB/Book.csv");
    if(!QFileInfo::exists("LibraryDB/Book.csv")){
        //if the file is not open
        if(!bookFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&bookFile);
        out << "BookID" << "," << "Book Name" << "," << "Genre" << "," << "InStock" << "," << "Book Copies" << "," << "Available Status" << "\n";
        for(int i = 0; i < book.size(); i++){
            out << book[i].getBookId() << "," << book[i].getBookName() << "," << book[i].getGenre() << "," << book[i].getStock() << "," <<book[i].getBookCopies() << "," << book[i].getAvailStatus() << "," << book[i].getBookImageFilePath() << "\n";
        }
        //flush the file after and close
        bookFile.flush();
        bookFile.close();
    }else
        qDebug() << "File already exists";

    //create Author table
    QFile authorFile("LibraryDB/Author.csv");
    if(!QFileInfo::exists("LibraryDB/Author.csv")){
        //if the file is not open
        if(!authorFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&authorFile);
        out << "AuthorID" << "," << "BookID" << "," << "Author Name" << "," << "Biography" << "," << "Date of Birth" << "\n";
        for(int i = 0; i < book.size(); i++){
            out << book[i].getAuthorId() << "," << book[i].getBookId() << "," << book[i].getAuthorName() << "," << book[i].getAuthorBiography() << "," << book[i].getAuthorDob() << "\n";
        }
        //flush the file after and close
        authorFile.flush();
        authorFile.close();
    }else
        qDebug() << "File already exists";

    //create Author table
    QFile pubFile("LibraryDB/Publisher.csv");
    if(!QFileInfo::exists("LibraryDB/Publisher.csv")){
        //if the file is not open
        if(!pubFile.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&pubFile);
        out << "PublisherID" << "," << "BookID" << "," << "Publisher Name" << "," << "Publication Date" << "," << "Location" << "\n";
        for(int i = 0; i < book.size(); i++){
            out << book[i].getPublID() << "," << book[i].getBookId() << "," << book[i].getPubName() << "," << book[i].getPublicationDate() << "," << book[i].getLocation() << "\n";
        }
        //flush the file after and close
        pubFile.flush();
        pubFile.close();
    }else
        qDebug() << "File already exists";
}
//Removes a book record in the database
void LibraryDatabase::removeBookRecord(int arrPos){
    QVector<Book> book;
    book = getAllBooks();
    book.remove(arrPos);
    updateAllBookDetails(book);
}
//This function will record the book item of member(Note: only requires the bookitem id, member id and book id to be passed)
void LibraryDatabase::loanBook(BookItem bookItem){
    QFile file("LibraryDB/BookItem.csv");
    //if the file is not open
    if(!file.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);
    QDate date = QDate::currentDate();
    QDate expiryDate = date.addDays(daysOfAccess);
    out << bookItem.getBookItem_ID() << "," << bookItem.getBookItem_MemberID() << "," << bookItem.getBookItem_BookID() << "," << date.toString("dd/MM/yyyy") << "," << expiryDate.toString("dd/MM/yyyy") << "," << bookItem.getBookReturnedDate() << "," << 1 << "\n";

    //flush the file after and close
    file.flush();
    file.close();
    //update book stock
    QVector<Book>book;
    book = getAllBooks();
    for(int i = 0; i < book.size(); i++){
        if(book[i].getBookId() == bookItem.getBookItem_BookID()){
            if(book[i].getStock() != 0){
                book[i].setStock(book[i].getStock() - 1);
            }
            if(book[i].getStock() == 0){
                book[i].setAvailStatus(0);//book out of stock
            }
            break;
        }
    }
    updateAllBookDetails(book);//update database
}
//This function lets member pre order a book(Note: only requires the bookitem id, member id and book id to be passed)
void LibraryDatabase::preOrderBook(PreOrderBook preOrder){
    QFile file("LibraryDB/PreBook.csv");
    //if the file is not open
    if(!file.open(QFile::Append | QFile::Text)){
       qDebug() << "Error cant open file";
    }
    //reference to your file
    QTextStream out(&file);

    //Check which loaned book is near due date and set that as the book date of the preorder
    QVector<BookItem> bookItem;
    bookItem = getAllBookItem();
    QDate preOrderDate = QDate(2077,12,25);//year, month, day
    QDate compareDate;
    for(int i = 0; i < bookItem.size(); i++){
        QString loanedDate = bookItem[i].getExpiryDate();
        QStringList date =(loanedDate.split("/"));
        compareDate = QDate(date[2].toInt(),date[1].toInt(),date[0].toInt());
        if(preOrderDate > compareDate)
            preOrderDate = compareDate;
    }

    //"PreBookID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "isLoaned" << "\n";
    out << preOrder.getPreBookID() << "," << preOrder.getPreBook_MemberID() << "," << preOrder.getPreBook_BookID() << "," << preOrderDate.toString("dd/MM/yyyy") << "," << 0 << "\n";

    //flush the file after and close
    file.flush();
    file.close();
}
//This function returns all records from BookItem.csv
QVector<BookItem> LibraryDatabase::getAllBookItem(){
    QVector<BookItem> listOfBookItem;
    BookItem bookItem;

    //get all data from Book.csv and store it in Qvector
    QFile file("LibraryDB/BookItem.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="BookID" && list[0] != ""){
                bookItem.setBookItemID(list[0]);
                bookItem.setBookItem_MemberID(list[1]);
                bookItem.setBookItem_BookID(list[2]);
                bookItem.setBookDate(list[3]);
                bookItem.setExpiryDate(list[4]);
                bookItem.setBookReturnedDate(list[5]);
                bookItem.setUserAccess(list[6].toInt());
                listOfBookItem.push_back(bookItem);
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        file.close();
    }
    return listOfBookItem;
}
//This function returns all records from PreBook.csv
QVector<PreOrderBook> LibraryDatabase::getAllPreOrders(){
    QVector<PreOrderBook> listOfPreOrders;
    PreOrderBook preOrder;

    //get all data from Book.csv and store it in Qvector
    QFile file("LibraryDB/PreBook.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="BookID" && list[0] != ""){
                preOrder.setPreBookID(list[0]);
                preOrder.setPreBook_MemberID(list[1]);
                preOrder.setPreBook_BookID(list[2]);
                preOrder.setPreBookDate(list[3]);
                preOrder.setPreOrderStatus(list[4].toInt());
                listOfPreOrders.push_back(preOrder);
            }
            list.clear();
        }
        //we dont need to flush bec we are only reading
        file.close();
    }
    return listOfPreOrders;
}
//This function updates all records of BookItem.csv
void LibraryDatabase::updateAllBookItemDetails(QVector<BookItem> bookItem){
    QFile file("LibraryDB/BookItem.csv");
    if(!QFileInfo::exists("LibraryDB/BookItem.csv")){
        //if the file is not open
        if(!file.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&file);
        out << "BookItemID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "Expiry Date" << "," << "Returned Date" << "," << "User Access" << "\n";
        for(int i = 0; i < bookItem.size(); i++){
            out << bookItem[i].getBookItem_ID() << "," << bookItem[i].getBookItem_MemberID() << "," << bookItem[i].getBookItem_BookID() << "," << bookItem[i].getBookDate() << "," <<bookItem[i].getExpiryDate() << "," << bookItem[i].getBookReturnedDate() << "," << bookItem[i].getUserAccess() << "\n";
        }
        //flush the file after and close
        file.flush();
        file.close();
    }else
        qDebug() << "File already exists";
}
//This function updates all records of PreBook.csv
void LibraryDatabase::updateAllPreOrderDetails(QVector<PreOrderBook> preOrder){
    QFile file("LibraryDB/PreBook.csv");
    if(!QFileInfo::exists("LibraryDB/PreBook.csv")){
        //if the file is not open
        if(!file.open(QFile::WriteOnly | QFile::Text)){
           qDebug() << "Error cant open file";
        }
        //reference to your file
        QTextStream out(&file);
        out << "PreBookID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "Pre Order Status" << "\n";
        for(int i = 0; i < preOrder.size(); i++){
            out << preOrder[i].getPreBookID() << "," << preOrder[i].getPreBook_MemberID() << "," << preOrder[i].getPreBook_BookID() << "," << preOrder[i].getPreBookDate() << "," <<preOrder[i].getPreOrderStatus() << "\n";
        }
        //flush the file after and close
        file.flush();
        file.close();
    }else
        qDebug() << "File already exists";
}
//This function returns the loaned book
void LibraryDatabase::returnBook(QString memberID,QString bookID){
    QVector<BookItem> bookItem;
    bookItem = getAllBookItem();
    QVector<Book> book;
    book = getAllBooks();

    for(auto element: bookItem){
        if(element.getBookItem_MemberID() == memberID && element.getBookItem_BookID()  == bookID){
            if(element.getBookReturnedDate() == "n/a" && element.getUserAccess() == 1){//if book has not been returned and user still has access
                QDate date = QDate::currentDate();
                element.setBookReturnedDate(date.toString("dd/MM/yyyy"));
                element.setUserAccess(0);
                //then increase instock
                for(auto bookElement: book){
                    if(bookElement.getBookId() == bookID){
                        if(bookElement.getStock() != bookElement.getBookCopies())//book instock must not be greater than the book copies owned
                            bookElement.setStock(bookElement.getStock() + 1);
                        if(bookElement.getStock() > 0 && bookElement.getAvailStatus() == 0)//if book is not available and we have in stock set book to available
                            bookElement.setAvailStatus(1);
                        //update book records and bookitem records
                        updateAllBookDetails(book);
                        updateAllBookItemDetails(bookItem);
                        break;
                    }
                }
            }
            break;
        }
    }
}
//This function returns all book that has been loaned by a member
QStringList LibraryDatabase::getAllMemberLoanedBooks(QString memberID){
    QStringList bookLoanedList;

    //get all data from BookItem.csv and store it in Qvector
    QFile file("LibraryDB/BookItem.csv");
    //if the file is not open
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        qDebug() << "Error cant open file";
    }else{
        //reference to your file
        QTextStream in(&file);
        QStringList list;
        QString line;
        //loop through csv data
        while(!in.atEnd()){
            line = file.readLine().replace("\n","");
            list.append(line.split(","));
            if(list[0]!="BookID" && list[0] != ""){
                //<< "BookItemID" << "," << "MemberID" << "," << "BookID" << "," << "Book Date" << "," << "Expiry Date" << "," << "Returned Date" << "," << "User Access" << "\n";
                if(list[1] == memberID){
                    if(list[5] == "n/a" && list[6].toInt() != 0){//if book is in loaned state
                        bookLoanedList.append(list[2]);//then get book id
                    }
                }
            }
            list.clear();
        }
        file.close();
    }
    return bookLoanedList;
}
//This function change how many days a book can be loaned
void LibraryDatabase::setDaysOfAcess(int days){
    this->daysOfAccess = days;
}
//check if any loaned books has expired
void LibraryDatabase::checkLoanedBooks(){
    QVector<BookItem> bookItem;
    bookItem = getAllBookItem();

    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd/MM/yyyy");
    for(auto element: bookItem){
        if(element.getExpiryDate() == currentDate){
            returnBook(element.getBookItem_MemberID(),element.getBookItem_BookID());
        }
    }
}
//This function checks if the pre order book is now available
void LibraryDatabase::checkPreorders(){
    QVector<PreOrderBook> preOrder;
    QVector<Book> book;
    preOrder = getAllPreOrders();
    book = getAllBooks();

    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd/MM/yyyy");
    for(auto preOrderElement: preOrder){
        if(preOrderElement.getPreBookDate() == currentDate){
            for(auto bookElement: book){
                if(preOrderElement.getPreBookID() == bookElement.getBookId()){
                    if(bookElement.getStock() > 0 && bookElement.getAvailStatus() == true){
                        BookItem bookItem;
                        int randNum = 0, randLetter1, randLetter2;
                        QString uniqueID;
                        do{
                            srand(time(0));
                            randNum = (rand() % 101) + 100;//generates random number between 100-200
                            randLetter1 = (rand() % 26) + 65;//generates random number between 65-90 which is then converted to char A-Z
                            randLetter2 = (rand() % 26) + 65;
                            //Unique ID for Book item
                            uniqueID = "410" + QString::number(randNum) + (char)randLetter1 + (char)randLetter2;
                        }while(!isIdUnique(uniqueID,7));

                        bookItem.setBookItemID(uniqueID);
                        bookItem.setBookItem_MemberID(preOrderElement.getPreBook_MemberID());
                        bookItem.setBookItem_BookID(preOrderElement.getPreBook_BookID());
                        loanBook(bookItem);
                    }
                    break;
                }
            }
        }
    }
}

