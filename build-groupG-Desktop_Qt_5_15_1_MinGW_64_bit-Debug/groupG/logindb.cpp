#include "logindb.h"

loginDB::loginDB()
{
    db = QSqlDatabase :: database();
    setAccounts();
}
void loginDB::setAccounts()
{
    QString fname;
    QString lname;
    QString email;
    QString username;
    QString password;
    QDate dob;
    account *newAccount;

    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("SELECT * FROM accounts");

    if(qry->exec())
    {
        while(qry->next())
        {
            fname = qry->value(0).toString();
            lname = qry->value(1).toString();
            email = qry->value(2).toString();
            username = qry->value(3).toString();
            password = qry->value(4).toString();
            dob = QDate(qry->value(7).toInt(),qry->value(6).toInt(),qry->value(5).toInt());
            newAccount = new account(fname,lname,email,username,password,dob);

            data.push_back(*newAccount);
        }
    }
    else
    {
        qDebug() << ("Error: qry failed.");
    }

}
void loginDB::loadAccounts()
{
    data.clear();
    setAccounts();
}
QVector<account> loginDB::getVector()
{
    return data;
}
int loginDB::getSize()
{
    return data.size();
}
bool loginDB::checkUsername(QString u)
{
    int i = 0;
    while(i < getSize())
    {
        if(u == data[i].getUsername())
        {
            return true;
        }
        i++;
    }
    return false;
}
bool loginDB::checkEmail(QString e)
{
    int i = 0;
    while(i < getSize())
    {
        if(e == data[i].getEmail())
        {
            return true;
        }
        i++;
    }
    return false;
}
