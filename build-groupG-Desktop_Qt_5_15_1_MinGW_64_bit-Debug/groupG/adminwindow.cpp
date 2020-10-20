#include "adminwindow.h"
#include "ui_adminwindow.h"

adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
    setTable();
}

adminWindow::~adminWindow()
{
    delete ui;
}
void adminWindow:: setTable()
{
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();

    qry->prepare("SELECT * FROM hikes");

    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
}
void adminWindow::on_search_clicked()
{
    QSqlQuery *qry = new QSqlQuery(db);
    QSqlQueryModel *modal = new QSqlQueryModel();

    qry->prepare("SELECT * FROM hikes WHERE Name LIKE '%"+ui->hike->text()+"%' OR "
                                           "Park LIKE '%"+ui->hike->text()+"%' OR "
                                           "OpenTime LIKE '%"+ui->hike->text()+"%' OR "
                                           "CloseTime LIKE '%"+ui->hike->text()+"%' OR "
                                           "Distance LIKE '%"+ui->hike->text()+"%' OR "
                                           "Difficulty LIKE '%"+ui->hike->text()+"%' OR "
                                           "Address LIKE '%"+ui->hike->text()+"%' OR "
                                           "City LIKE '%"+ui->hike->text()+"%' OR "
                                           "[Zip Code] LIKE '"+ui->hike->text()+"%' OR "
                                           "PhoneNum LIKE '%"+ui->hike->text()+"%' OR "
                                           "[Walking/Biking] LIKE '%"+ui->hike->text()+"%' OR "
                                           "Type LIKE '%"+ui->hike->text()+"%';");
    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
}

void adminWindow::on_refresh_clicked()
{
    setTable();
}
