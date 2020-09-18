#ifndef SQL_H
#define SQL_H

#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
class sql
{
public:
    sql();
    QSqlDatabase db;
    QString const userDB = "account.sqlite";
    QString const dataDB = "";
    void setUserDB();
    void setDataDB();
};

#endif // SQL_H
