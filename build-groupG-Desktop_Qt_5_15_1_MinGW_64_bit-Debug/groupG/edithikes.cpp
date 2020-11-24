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
void editHikes::setPK(QString PK)
{
    primaryKey = PK;
}
void editHikes::getHike()
{
    QSqlQuery *qry = new QSqlQuery(db);

    QString name;
    QString park;

    QTime open;
    QStringList openTime;
    QTime close;
    QStringList closeTime;
    int hour = 0;
    int min = 0;
    int sec = 0;

    double distance;
    int difficulty;
    QString address;
    QString city;
    int zipcode;
    QString phone;
    QString walkOrBike;
    QString trailType;
    int ascent;
    int elevation;
    QByteArray pic;

    qry->prepare("SELECT * FROM hikes WHERE Name ='"+primaryKey+"';");
    qDebug() << primaryKey;
    if(qry->exec())
    {
        if(qry->first())
        {
            name = qry->value(0).toString();
            park = qry->value(1).toString();

            openTime = (qry->value(2).toString().split(QLatin1Char(':')));
            hour = openTime.front().toInt();
            openTime.pop_front();
            min = openTime.front().toInt();
            openTime.pop_front();
            sec = openTime.front().toInt();
            openTime.pop_front();
            open.setHMS(hour,min,sec);

            closeTime = (qry->value(3).toString().split(QLatin1Char(':')));
            hour = closeTime.front().toInt();
            closeTime.pop_front();
            min = closeTime.front().toInt();
            closeTime.pop_front();
            sec = closeTime.front().toInt();
            closeTime.pop_front();
            close.setHMS(hour,min,sec);

            distance = qry->value(4).toDouble();
            difficulty = qry->value(5).toInt();
            address = qry->value(6).toString();
            city = qry->value(7).toString();
            zipcode = qry->value(8).toInt();
            phone = qry->value(9).toString();
            walkOrBike = qry->value(10).toString();
            trailType = qry->value(11).toString();
            ascent = qry->value(12).toInt();
            elevation = qry->value(13).toInt();
            pic = qry->value(14).toByteArray();

            trail.setHike(name, park, open, close, distance, difficulty,
                          address, city, zipcode, phone, walkOrBike, trailType,ascent,elevation, pic);
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
    ui->openTime->setTime(trail.getOpen());
    ui->closeTime->setTime(trail.getClose());
    ui->distance->setText(QString::number(trail.getDistance()));
    ui->difficulty->setText(QString::number(trail.getDiff()));
    ui->address->setText(trail.getAddress());
    ui->city->setText(trail.getCity());
    ui->zipcode->setText(QString::number(trail.getZip()));
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
    ui->ascent->setText(QString::number(trail.getAsc()));
    ui->elevation->setText(QString::number(trail.getElev()));

    QPixmap pict = QPixmap();
    ui->pic->setAlignment(Qt::AlignCenter);
    if(!pict.loadFromData(trail.getPic())){
        qDebug() << ("Whoops.");
    }
    pict = pict.scaled(ui->pic->size(),Qt::KeepAspectRatio);

    ui->pic->setPixmap(pict);
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
    if(QString::number(trailEdit.getDistance()) == "")
    {
        trailEdit.setDistance(trail.getDistance());
    }
    if(QString::number(trailEdit.getDiff()) == "")
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
    if(QString::number(trailEdit.getZip()) == "")
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
    if(QString::number(trailEdit.getAsc()) == "")
    {
        trailEdit.setAsc(trail.getAsc());
    }
    if(QString::number(trailEdit.getElev()) == "")
    {
        trailEdit.setElev(trail.getElev());
    }
    if(trailEdit.getPic().isEmpty())
    {
        trailEdit.setPic(trail.getPic());
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
    decimal = 0;
    for(int i = 0; i < ui->ascent->text().size(); i++)
    {
        if(ui->ascent->text().toStdString()[i] == '.')
        {
            decimal++;
        }
        else
        {
            if(decimal > 1 || !isdigit(ui->ascent->text().toStdString()[i]))
            {
                mesg = mesg + " Ascent";
                i = ui->ascent->text().size();
            }
        }
    }
    decimal = 0;
    for(int i = 0; i < ui->elevation->text().size(); i++)
    {
        if(ui->elevation->text().toStdString()[i] == '.')
        {
            decimal++;
        }
        else
        {
            if(decimal > 1 || !isdigit(ui->elevation->text().toStdString()[i]))
            {
                mesg = mesg + " Elevation";
                i = ui->elevation->text().size();
            }
        }
    }
    if(ui->url->text() != "" && !trailEdit.LoadPic(ui->url->text()))
    {
        mesg = mesg + " URL";
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
    trailEdit.setOpen(ui->openTime->time());
    trailEdit.setClose(ui->closeTime->time());
    trailEdit.setDistance(ui->distance->text().toDouble());
    trailEdit.setDiff(ui->difficulty->text().toDouble());
    trailEdit.setAddress(ui->address->text());
    trailEdit.setCity(ui->city->text());
    trailEdit.setZip(ui->zipcode->text().toInt());
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
    trailEdit.setAsc(ui->ascent->text().toDouble());
    trailEdit.setElev(ui->elevation->text().toDouble());
    trailEdit.LoadPic(ui->url->text());
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
void editHikes::on_changePic_clicked()
{
    if(trailEdit.LoadPic(ui->url->text()))
    {
        QPixmap pict = QPixmap();
        ui->pic->setAlignment(Qt::AlignCenter);
        if(!pict.loadFromData(trailEdit.getPic())){
            qDebug() << ("Whoops.");
        }
        pict = pict.scaled(ui->pic->size(),Qt::KeepAspectRatio);

        ui->pic->setPixmap(pict);
    }
    else
    {
        ui->errorMesg->setText("FILENAME NOT FOUND");
    }
}

