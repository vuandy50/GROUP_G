#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QDate>
#include <QRegExp>

class account
{
public:
    account();
    account(QString F, QString L, QString E, QString U, QString P, QDate D);
    bool checkEmail(QString C);
    void setFname(QString F);
    void setLname(QString L);
    void setEmail(QString E);
    void setUsername(QString U);
    void setPassword(QString P);
    void setDob(int y, int m, int d);
    void setDob(QDateTime dt);
    QString getFname();
    QString getLname();
    QString getEmail();
    QString getUsername();
    QString getPassword();
    QDate getDob();

private:
    QString Fname;
    QString Lname;
    QString email;
    QString username;
    QString password;
    QDate dob;
    QRegExp check;
};

#endif // ACCOUNT_H
