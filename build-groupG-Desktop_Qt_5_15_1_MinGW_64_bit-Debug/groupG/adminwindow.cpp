#include "adminwindow.h"
#include "ui_adminwindow.h"

adminWindow::adminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::adminWindow)
{
    ui->setupUi(this);
    primaryKey = "-1";
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
    ui->error->setText("");
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
                                           "Zipcode LIKE '"+ui->hike->text()+"%' OR "
                                           "PhoneNum LIKE '%"+ui->hike->text()+"%' OR "
                                           "[Walking/Biking] LIKE '%"+ui->hike->text()+"%' OR "
                                           "Type LIKE '%"+ui->hike->text()+"%';");
    qry->exec();
    modal->setQuery(*qry);
    ui->table->setModel(modal);
}

void adminWindow::on_refresh_clicked()
{
    ui->error->setText("");
    setTable();
}
void adminWindow::on_table_clicked(const QModelIndex &index)
{
    primaryKey = ui->table->model()->data(index.siblingAtColumn(0),0).toString();

}
bool adminWindow::check()
{
    if(primaryKey == "-1")
    {
        return false;
    }
    else
    {
        return true;
    }
}
void adminWindow::on_delete_2_clicked()
{
    if(check())
    {
        ui->error->setText("");
        delHike = new deleteHike();
        delHike->exec();

        if(delHike->getDelHike())
        {

            QSqlQuery *qry = new QSqlQuery(db);
            qry->prepare("DELETE FROM hikes WHERE Name = '"+primaryKey+"';");
            qry->exec();

            ui->error->setText("Delete SUCESSFUL! Please Refresh Table");
        }
        else
        {
            primaryKey = "-1";
            ui->error->setText("Delete UNSUCESSFUL!");
        }

    }
    else
    {
        ui->error->setText("Please Select a Hike Before Deleting!");
    }

}

void adminWindow::on_edit_clicked()
{
    if(check())
    {
        ui->error->setText("");
        editHike = new editHikes(nullptr,primaryKey);
        editHike->exec();

        if(editHike->is_there_an_edit())
        {
            /*
            trailEdit = editHike->editTrail();
            QSqlQuery *qry = new QSqlQuery(db);
            qry->prepare("UPDATE hikes SET Name = '"+trailEdit.getName()+"', "
                                        "Park = '"+trailEdit.getPark()+"', "
                                        "OpenTime = '"+trailEdit.getOpen().toString()+"', "
                                        "CloseTime = '"+trailEdit.getClose().toString()+"', "
                                        "Distance = '"+QString::number(trailEdit.getDistance())+"', "
                                        "Difficulty = '"+QString::number(trailEdit.getDiff())+"', "
                                        "Address = '"+trailEdit.getAddress()+"', "
                                        "City = '"+trailEdit.getCity()+"', "
                                        "Zipcode = '"+QString::number(trailEdit.getZip())+"', "
                                        "PhoneNum = '"+trailEdit.getPhone()+"', "
                                        "[Walking/Biking] = '"+trailEdit.getWB()+"', "
                                        "Type = '"+trailEdit.getType()+"', "
                                        "Ascent = '"+QString::number(trailEdit.getAsc())+"', "
                                        "Elevation = '"+QString::number(trailEdit.getElev())+",' "
                                        "Picture = '"+trailEdit.getPic()+",' "
                                        "WHERE Name = '"+primaryKey+"';");

            if(qry->exec())
            {
                qDebug("YES");
            }
            else
            {
                qDebug("NO");
            }
            ui->error->setText("Edit SUCESSFUL! Please Refresh Table");
            */
        }
        else
        {
            primaryKey = "-1";
            ui->error->setText("Edit UNSUCESSFUL!");
        }

    }
    else
    {
        ui->error->setText("Please Select a Hike Before Editing!");
    }

}

void adminWindow::on_add_clicked()
{
    addHike = new addHikes;
    addHike->exec();

    if(addHike->is_Successful())
    {
        /*
        trailEdit = addHike->getHike();
        QSqlQuery *qry = new QSqlQuery(db);
        qry->prepare("INSERT INTO hikes ("
                     "Name,"
                     "Park,"
                     "OpenTime,"
                     "CloseTime,"
                     "Distance,"
                     "Difficulty,"
                     "Address,"
                     "City,"
                     "Zipcode,"
                     "PhoneNum,"
                     "[Walking/Biking],"
                     "Type,"
                     "Ascent,"
                     "Elevation,"
                     "Picture)"
                     "VALUES(?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
        qry->addBindValue(trailEdit.getName());
        qry->addBindValue(trailEdit.getPark());
        qry->addBindValue(trailEdit.getOpen().toString());
        qry->addBindValue(trailEdit.getClose().toString());
        qry->addBindValue(trailEdit.getDistance());
        qry->addBindValue(trailEdit.getDiff());
        qry->addBindValue(trailEdit.getAddress());
        qry->addBindValue(trailEdit.getCity());
        qry->addBindValue(trailEdit.getZip());
        qry->addBindValue(trailEdit.getPhone());
        qry->addBindValue(trailEdit.getWB());
        qry->addBindValue(trailEdit.getType());
        qry->addBindValue(trailEdit.getAsc());
        qry->addBindValue(trailEdit.getElev());
        qry->addBindValue(trailEdit.getPic());

        if(qry->exec())
        {
            qDebug("YES");
        }
        else
        {
            qDebug("NO");
        }
        ui->error->setText("Add SUCESSFUL! Please Refresh Table");
        */
    }
    else
    {
        ui->error->setText("Add UNSUCESSFUL!");
    }
}
