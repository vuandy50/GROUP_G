#ifndef HIKESDB_H
#define HIKESDB_H

#include "database.h"
#include "menu.h"

// helper class to read in .csv files.
// Reads in a file, stores lines into a std::vector
// Then, parses via parse function.
class hikesdb {
private:

    QSqlDatabase db;
    QVector<location> data;

public:
    hikesdb();
    ~hikesdb();
    void populate();
};
#endif // CSVREADER_H
