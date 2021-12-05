#ifndef NOTIFICATIONLOG_H
#define NOTIFICATIONLOG_H
#include <QString>

class NotificationLog
{
private:
    QString memberID;
    QString bookID;
    QString notificationType;
    bool status;
public:
    NotificationLog();
    void setMemberID(QString);
    void setbookID(QString);
    void setnotificationType(QString);
    void setstatus(bool);

    QString getMemberID();
    QString getbookID();
    QString getnotificationType();
    bool getstatus();
};

#endif // NOTIFICATIONLOG_H

//out << "MemberID" << "," << "BookID" << "," << "Notification Type" << "," << "Status" << "\n";
