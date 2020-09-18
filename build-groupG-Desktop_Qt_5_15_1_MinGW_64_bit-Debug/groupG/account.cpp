#include "account.h"

account::account()
{
    Fname ="";
    Lname ="";
    email = "";
    username = "";
    password ="";
    dob = QDate();
    check.setPattern(("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));
}
account::account(QString F, QString L, QString E, QString U, QString P, QDate D)
{
    Fname = F;
    Lname = L;
    email = E;
    username = U;
    password = P;
    dob = D;
    check.setPattern(("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));
}
bool account::checkEmail(QString C)
{
    return check.exactMatch(C);
}
void account::setFname(QString F)
{
    Fname = F;
}
void account::setLname(QString L)
{
    Lname = L;
}
void account::setEmail(QString E)
{
    email = E;
}
void account::setUsername(QString U)
{
    username = U;
}
void account::setPassword(QString P)
{
    password = P;
}
void account::setDob(int y, int m, int d)
{
    dob = QDate(y,m,d);
}
void account::setDob(QDateTime dt)
{
    dob = dt.date();
}
QString account::getFname()
{
    return Fname;
}
QString account::getLname()
{
    return Lname;
}
QString account::getEmail()
{
    return email;
}
QString account::getUsername()
{
    return username;
}
QString account::getPassword()
{
    return password;
}
QDate account::getDob()
{
    return dob;
}
