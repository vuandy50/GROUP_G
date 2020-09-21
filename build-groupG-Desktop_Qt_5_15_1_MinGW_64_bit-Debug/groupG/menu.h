#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <fstream>
#include <QMainWindow>
#include <QtGui>

#include "database.h"

namespace Ui {
class menu;
}

/*
 * 9/21/2020 - Michael Moon
 * location is a helper struct that is used to display the information retrieved from
 * "hiking.csv"
 *
 * menu class is a glorified vector that reads in the .csv file in the constructor.
 * Displays the information onto a scroll text area.
 * QButtons "name" "distance" "difficulty" are used to reorder the print out.
 *
 *
*/
struct location{
    QString name_;
    QString park_;
    int open_;
    int close_;
    int distance_;
    int difficulty_;
    QString address_;
    QString city_;
    int zipcode_;
    QString phone_;
    QString walkOrBike_;
    QString trailType_;


    // Default constructor.
    location() : location("NAME", "PARK", 0, 1, 0, 1, "800 N State College Blvd",
                          "Fullerton", 92831, "(657) 278-2011", "WALKING", "SCENIC") {}

    //  Overloaded constructor.
    location(QString name, QString park, int open, int close,
             int distance, int difficulty, QString address, QString city, int zipcode,
             QString phone, QString walkOrBike, QString trailType) : name_(name), park_(park),
        open_(open), close_(close), distance_(distance), difficulty_(difficulty), address_(address),
        city_(city), zipcode_(zipcode), phone_(phone), walkOrBike_(walkOrBike), trailType_(trailType) {}

    // Massive setter.
    void setAll(QString name, QString park, int open, int close,
                int distance, int difficulty, QString address, QString city, int zipcode,
                QString phone, QString walkOrBike, QString trailType) {
        name_ = name;
        park_ = park;
        open_ = open;
        close_ = close;
        distance_ = distance;
        difficulty_ = difficulty;
        address_ = address;
        city_ = city;
        zipcode_ = zipcode;
        phone_ = phone;
        walkOrBike_ = walkOrBike;
        trailType_ = trailType;
    }
};

/*
 * 9/21/2020 - Michael Moon
 * Menu class holds a vector of location data, sorted by Name [ascending]
 * Main UI component. the vector list_ is mostly unused thus far.
*/
class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();
private slots:
    void on_buttonName_clicked();
    void on_buttonDistance_clicked();
    void on_buttonDifficulty_clicked();

private:
    Ui::menu *ui;
    QSqlDatabase db;

    QVector<location> list_;

    bool orderName;
    bool orderDistance;
    bool orderDifficulty;

    // One time read in from database help.sqlite;hikes
    // Note, database has been opened by the previous processes by Andy.
    void populate();

    // helper function. If passed in boolean is true, ascending
    // else, descending order. the char determines which variable to switch by.
    // Also prints the contents to a list area.
    void sort(bool&, char);
};

#endif // MENU_H
