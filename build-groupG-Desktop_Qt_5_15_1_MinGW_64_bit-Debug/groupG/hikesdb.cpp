#include "hikesdb.h"

void hikesdb::populate() {
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