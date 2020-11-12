#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <iostream>
#include <fstream>
#include <QMainWindow>
#include <QtGui>
#include <QDebug>

#include "database.h"
#include "deletehike.h"
#include "edithikes.h"

namespace Ui {
class adminWindow;
}

class adminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminWindow(QWidget *parent = nullptr);
    ~adminWindow();
    void setTable();
    void setHikeEdit(hike edit);

private slots:
    void on_search_clicked();

    void on_refresh_clicked();

    void on_table_clicked(const QModelIndex &index);

    void on_delete_2_clicked();

    bool check();

    void on_edit_clicked();

private:
    Ui::adminWindow *ui;
    QString primaryKey;
    QSqlDatabase db;
    hike trailEdit;
    deleteHike *delHike;
    editHikes *editHike;
};

#endif // ADMINWINDOW_H
