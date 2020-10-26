#include "edithikes.h"
#include "ui_edithikes.h"

editHikes::editHikes(QWidget *parent, QString PK) :
    QDialog(parent),
    ui(new Ui::editHikes)
{
    ui->setupUi(this);
    check = false;
    setPK(PK);
    getHike();
    showHike();

}
editHikes::~editHikes()
{
    delete ui;
}
bool editHikes::is_there_an_edit()
{
    return check;
}
void editHikes::addToQuery(QString line)
{
    queryLine + line;
}
QString editHikes::getQuery()
{
    return queryLine;
}
void editHikes::setPK(QString PK)
{
    primaryKey = PK;
}
void editHikes::getHike()
{
    QSqlQuery *qry = new QSqlQuery(db);

    QString name;
    QString park;
    int open;
    int close;
    QString distance;
    QString difficulty;
    QString address;
    QString city;
    QString zipcode;
    QString phone;
    QString walkOrBike;
    QString trailType;
    QString ascent;
    QString elevation;

    qry->prepare("SELECT * FROM hikes WHERE Name ='"+primaryKey+"';");
    qDebug() << primaryKey;
    if(qry->exec())
    {
        if(qry->first())
        {
            name = qry->value(0).toString();
            park = qry->value(1).toString();
            open = qry->value(2).toInt();
            close = qry->value(3).toInt();
            distance = qry->value(4).toString();
            difficulty = qry->value(5).toString();
            address = qry->value(6).toString();
            city = qry->value(7).toString();
            zipcode = qry->value(8).toString();
            phone = qry->value(9).toString();
            walkOrBike = qry->value(10).toString();
            trailType = qry->value(11).toString();
            ascent = qry->value(12).toString();
            elevation = qry->value(13).toString();

            trail.setHike(name, park, open, close, distance, difficulty,
                          address, city, zipcode, phone, walkOrBike, trailType,ascent,elevation);
        }
    }
    else
    {
        qDebug("NOPE");
    }
}
void editHikes::showHike()
{
    ui->name->setText(trail.getName());
    ui->park->setText(trail.getPark());
    QTime open;
    open.setHMS(trail.getOpen(),0,0);
    ui->openTime->setTime(open);
    QTime close;
    close.setHMS(trail.getClose(),0,0);
    ui->closeTime->setTime(close);
    ui->distance->setText(trail.getDistance());
    ui->difficulty->setText(trail.getDiff());
    ui->address->setText(trail.getAddress());
    ui->city->setText(trail.getCity());
    ui->zipcode->setText(trail.getZip());
    ui->phoneNum->setText(trail.getPhone());
    if(trail.getWB() == "WALKING/BIKING")
    {
        ui->both1->click();

    }
    else if(trail.getWB() == "WALKING")
    {
        ui->walking->click();
    }
    else
    {
        ui->biking->click();
    }
    if(trail.getType() == "SCENIC/TRAINING")
    {
        ui->both2->click();
    }
    else if(trail.getType() == "SCENIC")
    {
        ui->scenic->click();
    }
    else
    {
        ui->training->click();
    }
    ui->ascent->setText(trail.getAsc());
    ui->elevation->setText(trail.getElev());
}
void editHikes::ifBlank()
{
    if(trailEdit.getName() == "")
    {
        trailEdit.setName(trail.getName());
    }
    if(trailEdit.getPark() == "")
    {
        trailEdit.setPark(trail.getPark());
    }
    if(trailEdit.getDistance() == "")
    {
        trailEdit.setDistance(trail.getDistance());
    }
    if(trailEdit.getDiff() == "")
    {
        trailEdit.setDiff(trail.getDiff());
    }
    if(trailEdit.getAddress() == "")
    {
        trailEdit.setAddress(trail.getAddress());
    }
    if(trailEdit.getCity() == "")
    {
        trailEdit.setCity(trail.getCity());
    }
    if(trailEdit.getZip() == "")
    {
        trailEdit.setZip(trail.getZip());
    }
    if(trailEdit.getPhone() == "")
    {
        trailEdit.setPhone(trail.getPhone());
    }
    if(trailEdit.getWB() == "")
    {
        trailEdit.setWB(trail.getWB());
        if(trail.getWB() == "WALKING/BIKING")
        {
            ui->both1->click();
        }
        else if(trail.getWB() == "WALKING")
        {
            ui->walking->click();
        }
        else
        {
            ui->biking->click();
        }

    }
    if(trailEdit.getType() == "")
    {
        trailEdit.setType(trail.getType());
        if(trail.getType() == "SCENIC/TRAINING")
        {
            ui->both2->click();
        }
        else if(trail.getType() == "SCENIC")
        {
            ui->scenic->click();
        }
        else
        {
            ui->training->click();
        }
    }
    if(trailEdit.getAsc() == "")
    {
        trailEdit.setAsc(trail.getAsc());
    }
    if(trailEdit.getElev() =="")
    {
        trailEdit.setElev(trail.getElev());
    }

}
bool editHikes::checkFormat() //NO PHONE OR ADDRESS CHECK
{
    QString mesg = "INVALID";
    QRegExp checkAddress;
    int decimal = 0;
    for(int i = 0; i < ui->distance->text().size(); i++)
    {
        if(ui->distance->text().toStdString()[i] == '.')
        {
            decimal++;
        }
        else
        {
            if(decimal > 1 || !isdigit(ui->distance->text().toStdString()[i]))
            {
                mesg = mesg + " Distance";
                i = ui->distance->text().size();
            }
        }


    }
    decimal = 0;
    for(int i = 0; i < ui->difficulty->text().size(); i++)
    {
        if(ui->difficulty->text().toStdString()[i] == '.')
        {
            decimal++;
        }
        else
        {
            if(decimal > 1 || !isdigit(ui->difficulty->text().toStdString()[i]))
            {
                mesg = mesg + " Difficulty";
                i = ui->difficulty->text().size();
            }
        }
    }
    decimal = 0;
    if(ui->zipcode->text().size() == 5)
    {
        for(int i = 0; i < ui->zipcode->text().size(); i++)
        {
            if(!isdigit(ui->zipcode->text().toStdString()[i]))
            {
                mesg = mesg + " Zip Code";
                i = ui->zipcode->text().size();
            }
        }
    }
    else
    {
        mesg = mesg + " Zip Code";
    }
    if(mesg == "INVALID")
    {
        return true;
    }
    ui->errorMesg->setText(mesg);
    return false;
}
void editHikes::setTrailEdit()
{
    trailEdit.setName(ui->name->text());
    trailEdit.setPark(ui->park->text());
    trailEdit.setOpen(ui->openTime->text().toInt());
    trailEdit.setClose(ui->closeTime->text().toInt());
    trailEdit.setDistance(ui->distance->text());
    trailEdit.setDiff(ui->difficulty->text());
    trailEdit.setAddress(ui->address->text());
    trailEdit.setCity(ui->city->text());
    trailEdit.setZip(ui->zipcode->text());
    trailEdit.setPhone(ui->phoneNum->text());
    if((ui->walking->isChecked() && ui->biking->isChecked())|| ui->both1->isChecked())
    {
        trailEdit.setWB("WALKING/BIKING");
        if(ui->walking->isChecked())
        {
            ui->walking->click();
        }
        if(ui->biking->isChecked())
        {
            ui->biking->click();
        }
    }
    else if(ui->walking->isChecked())
    {
        trailEdit.setWB("WALKING");
    }
    else if(ui->biking->isChecked())
    {
        trailEdit.setWB("BIKING");
    }
    else
    {
        trailEdit.setWB("");
    }

    if((ui->scenic->isChecked() && ui->training->isChecked()) || ui->both2->isChecked())
    {
        trailEdit.setType("SCENIC/TRAINING");
        if(ui->scenic->isChecked())
        {
            ui->scenic->click();
        }
        if(ui->training->isChecked())
        {
            ui->training->click();
        }
    }
    else if(ui->scenic->isChecked())
    {
        trailEdit.setType("SCENIC");
    }
    else if(ui->training->isChecked())
    {
        trailEdit.setType("TRAINING");
    }
    else
    {
        trailEdit.setType("");
    }
    trailEdit.setAsc(ui->ascent->text());
    trailEdit.setElev(ui->elevation->text());
}
void editHikes::on_pushButton_2_clicked()
{
    check = false;  // Cancel edit
    close();
}
void editHikes::on_edit_clicked()
{
    check = true;  //Made an edit
    setTrailEdit();
    ifBlank();
    ui->errorMesg->setText("");
    if(checkFormat())
    {
        close();
    }
}
