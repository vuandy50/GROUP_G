#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu), orderName(true), orderDistance(true), orderDifficulty(true)
{
    ui->setupUi(this);

    populate();
}

menu::~menu()
{
    delete ui;
}

/*
 * 10/4/2020 - Michael Moon
 * Adding user-based funcitonality to menu; specifically for saved hikes
 * and later, to edit and delete account when logged in.
 *
 */
void menu::setAccount(account newItem) {
    newAccount = newItem;
    setting = new accountSettings();
    setting->setAccount(newAccount);
}

/* 9/21/2020 - Michael Moon
 * Populates the array list_ with values retrieved from database
 * help.sqlite;hikes. Located in
 * build-groupG-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/build-groupG-Desktop_Qt_5_15_1_MinGW_64_bit-Debug/help.sqlite
 *
 *
*/
void menu::populate() {
    QSqlQuery *qry = new QSqlQuery(db);

    QString name;
    QString park;
    int open;
    int close;
    int distance;
    int difficulty;
    QString address;
    QString city;
    int zipcode;
    QString phone;
    QString walkOrBike;
    QString trailType;
    location newLocation;

    // Readies the SQL reader.
    qry->prepare("SELECT * FROM hikes ORDER BY Name ASC");

    // exe if the prepared sql statement is valid.
    if(qry->exec())
    {
        // Populating vector.
        while(qry->next())
        {
            name = qry->value(0).toString();
            park = qry->value(1).toString();
            open = qry->value(2).toInt();
            close = qry->value(3).toInt();
            distance = qry->value(4).toInt();
            difficulty = qry->value(5).toInt();
            address = qry->value(6).toString();
            city = qry->value(7).toString();
            zipcode = qry->value(8).toInt();
            phone = qry->value(9).toString();
            walkOrBike = qry->value(10).toString();
            trailType = qry->value(11).toString();

            // Much cheaper method of populating the vector.
            newLocation.setAll(name, park, open, close, distance, difficulty,
                                       address, city, zipcode, phone, walkOrBike, trailType);
            list_.push_back(newLocation);
        }
        // Sort and print.
        sort(orderName, 0);
    }
    else
    {
        qDebug() << ("Error: qry failed.");
    }
}

/* 9/21/2020 - Michael Moon
 * General flip flop method to determine order. Uses SQL to flip flop.
 * works in couple stages:
 *
 * Stage 1: Determine sorting config
 *  IF we want the list to ascend
 *  By which column are we ascending by
 *  ELSE we want it to descend
 *
 * Stage 2: Set up the column names
 *
 * Stage 3: Display the rows
*/
void menu::sort(bool &toSwap, char qual) {

    QSqlQuery qry(db);
    QString queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Name ASC";

    //=======================
    // STAGE 1
    // ======================

    // If the switch is true, ascending order, else, false.
    if(toSwap) {
        toSwap = false;
        if(qual == '1') {
            queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Distance ASC";
        } else if(qual == '2') {
            queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Difficulty ASC";
        }
    } else {
        toSwap = true;
        if(qual == '0') {
            queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Name DESC";
        } else if(qual == '1') {
            queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Distance DESC";
        } else if(qual == '2') {
            queryName = "SELECT Name, Park, Distance, Difficulty FROM hikes ORDER BY Difficulty DESC";
        }
    }

    //=======================
    // STAGE 2
    // ======================


    // Prints out; note, does NOT record information.
    if(!qry.exec(queryName)) {
        qDebug() << "Query Failed.";
        return;
    }

    ui->table->setColumnCount(4);
    QStringList labels;

    labels << "Name" << "Park" << "Distance" << "Difficulty";
    ui->table->setHorizontalHeaderLabels(labels);


    //=======================
    // STAGE 3
    // ======================

    int rowCount = 0;
    while(qry.next()) {
        ui->table->insertRow(rowCount);
        QTableWidgetItem *name = new QTableWidgetItem;
        QTableWidgetItem *park = new QTableWidgetItem;
        QTableWidgetItem *distance = new QTableWidgetItem;
        QTableWidgetItem *difficulty = new QTableWidgetItem;

        name->setText(qry.value(0).toString());
        park->setText(qry.value(1).toString());
        distance->setText(QStringLiteral("%1").arg(qry.value(2).toInt()));
        difficulty->setText(QStringLiteral("%1").arg(qry.value(3).toInt()));

        ui->table->setItem(rowCount, 0, name);
        ui->table->setItem(rowCount, 1, park);
        ui->table->setItem(rowCount, 2, distance);
        ui->table->setItem(rowCount, 3, difficulty);

        ++rowCount;
    }
}
/*
void menu::renewAccount() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->first();
    qry->prepare("SELECT * FROM accounts WHERE Email =:email");
    qry->bindValue(":email", newAccount.getEmail());

    newAccount.setFname(qry->value(0).toString());
    newAccount.setLname(qry->value(1).toString());
    newAccount.setUsername(qry->value(4).toString());
    newAccount.setPassword(qry->value(5).toString());
    newAccount.setDob(qry->value(8).toInt(), qry->value(7).toInt(), qry->value(6).toInt());
}
*/
/*
 * 9/21/2020 - Michael Moon
 * The following:
 * on_buttonName_clicked
 * on_buttonDistance_clicked
 * on_buttonDifficulty_clicked
 *
 * All reset row count, other qualifiers, and sort the list again.
*/
void menu::on_buttonName_clicked()
{
    ui->table->setRowCount(0);
    orderDistance = true;
    orderDifficulty = true;

    sort(orderName, '0');
}

void menu::on_buttonDistance_clicked()
{
    ui->table->setRowCount(0);
    orderName = true;
    orderDifficulty = true;

    sort(orderDistance, '1');
}

void menu::on_buttonDifficulty_clicked()
{
    ui->table->setRowCount(0);
    orderName = true;
    orderDistance = true;

    sort(orderDifficulty, '2');
}

void menu::on_buttonAccount_clicked()
{
    setting->show();
    setting->setWindowState(Qt::WindowState::WindowActive);
    //renewAccount();
}
