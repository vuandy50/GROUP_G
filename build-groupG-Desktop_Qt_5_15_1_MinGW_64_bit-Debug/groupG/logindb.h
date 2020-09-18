#ifndef LOGINDB_H
#define LOGINDB_H

#include "database.h"
#include "account.h"

class loginDB
{
public:
    loginDB();
    void setAccounts();
    QVector<account> getVector();
    int getSize();
    void loadAccounts();
    bool checkUsername(QString u);
    bool checkEmail(QString e);

private:
    QSqlDatabase db;
    QVector<account> data;
};

#endif // LOGINDB_H
