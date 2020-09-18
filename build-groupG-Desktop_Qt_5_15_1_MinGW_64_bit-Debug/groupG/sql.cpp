#include "sql.h"

sql::sql()
{
    db = QSqlDatabase ::addDatabase("QSQLITE");
}
void sql::setUserDB()
{
    db.setDatabaseName(userDB);
}
void sql::setDataDB()
{
    db.setDatabaseName(dataDB);
}
