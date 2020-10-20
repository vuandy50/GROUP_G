#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <iostream>
#include <fstream>
#include <QMainWindow>
#include <QtGui>

#include "database.h"

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

private slots:
    void on_search_clicked();

    void on_refresh_clicked();

private:
    Ui::adminWindow *ui;
    QSqlDatabase db;
};

#endif // ADMINWINDOW_H
