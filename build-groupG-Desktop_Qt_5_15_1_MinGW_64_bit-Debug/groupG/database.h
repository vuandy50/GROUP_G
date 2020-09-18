#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QVector>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include <QDebug>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>

class DB
{
public:
    DB();
    ~DB();
    bool openDB();
    //!< Creates and opens a database connection if not open
    /*!< POSTCONDITONS: return database.open(); */

    bool closeDB();
    //!< Closes database connection
    /*!< POSTCONDITONS: return database.isOpen() */

    QSqlError lastError();
    //!< Returns last database related error
    /*!< POSTCONDITONS: return database.lastError(); */

    QSqlDatabase currentDB() const;
    //!< Returns connected database object
    /*!< POSTCONDITONS: return database */

private:
     QSqlDatabase database;
};

#endif // DATABASE_H
