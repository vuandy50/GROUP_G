#include "addhikes.h"
#include "ui_addhikes.h"

addHikes::addHikes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addHikes)
{
    ui->setupUi(this);
    ui->errorName->hide();
    ui->errorPark->hide();
    ui->errorDis->hide();
    ui->errorAdd->hide();
    ui->errorCity->hide();
    ui->errorZip->hide();
    ui->errorPhone->hide();
    ui->errorWB->hide();
    ui->errorType->hide();
    ui->errorAsc->hide();
    ui->errorElev->hide();
}

addHikes::~addHikes()
{
    delete ui;
}
bool addHikes::is_Successful()
{
    return successful;
}
void addHikes::on_add_clicked()
{
    if(ifBlank())
    {
        ui->errorMesg->setText("FILL OUT *");
        errorMessage();
    }
    else
    {
        errorMessage();
        if(checkFormat())
        {
            setHike();
            successful = true;
            close();
        }
    }
}
bool addHikes::checkFormat()
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
    if(mesg == "INVALID")
    {
        return true;
    }
    ui->errorMesg->setText(mesg);
    return false;
}
void addHikes::errorMessage()
{
    if(ui->name->text().isEmpty())
    {
        ui->errorName->show();
    }
    else
    {
        ui->errorName->hide();
    }
    if(ui->park->text().isEmpty())
    {
        ui->errorPark->show();
    }
    else
    {
        ui->errorPark->hide();
    }
    if(ui->distance->text().isEmpty())
    {
        ui->errorDis->show();

    }
    else
    {
        ui->errorDis->hide();
    }
    if(ui->difficulty->text().isEmpty())
    {
       ui->errorDiff->show();

    }
    else
    {
        ui->errorDiff->hide();
    }
    if(ui->address->text().isEmpty())
    {
        ui->errorAdd->show();
    }
    else
    {
        ui->errorAdd->hide();
    }
    if(ui->city->text().isEmpty())
    {
        ui->errorCity->show();
    }
    else
    {
        ui->errorCity->hide();
    }
    if(ui->zipcode->text().isEmpty())
    {
        ui->errorZip->show();
    }
    else
    {
        ui->errorZip->hide();
    }
    if(ui->phoneNum->text().isEmpty())
    {
        ui->errorPhone->show();
    }
    else
    {
        ui->errorPhone->hide();
    }
    if(!ui->walking->isChecked() && !ui->biking->isChecked() && !ui->both1->isChecked() )
    {
        ui->errorWB->show();
    }
    else
    {
        ui->errorWB->hide();
    }
    if(!ui->scenic->isChecked() && !ui->training->isChecked() && !ui->both2->isChecked())
    {
        ui->errorType->show();
    }
    else
    {
        ui->errorType->hide();
    }
    if(ui->ascent->text().isEmpty())
    {
        ui->errorAsc->show();
    }
    else
    {
        ui->errorAsc->hide();
    }
    if(ui->elevation->text().isEmpty())
    {
        ui->errorElev->show();
    }
    else
    {
        ui->errorElev->hide();
    }
}
bool addHikes::ifBlank()
{
    bool isBlank = true;
    if((ui->name->text().isEmpty()) || (ui->park->text().isEmpty()) ||
       (ui->distance->text().isEmpty()) || (ui->difficulty->text().isEmpty()) ||
       (ui->address->text().isEmpty()) || (ui->city->text().isEmpty()) ||
       (ui->zipcode->text().isEmpty()) || (ui->phoneNum->text().isEmpty()) ||
       (ui->ascent->text().isEmpty())|| (ui->elevation->text().isEmpty()))
    {
        isBlank = true;
    }
    else
    {
        if(ui->walking->isChecked() || ui->biking->isChecked())
        {
            isBlank = false;
        }
        else if (ui->both1->isChecked())
        {
            isBlank = false;
        }
        else
        {
            isBlank = true;
        }

        if(ui->scenic->isChecked()  || ui->training->isChecked())
        {
            isBlank = false;
        }
        else if (ui->both2->isChecked())
        {
            isBlank = false;
        }
        else
        {
            isBlank = true;
        }
    }
    return isBlank;
}
void addHikes::setHike()
{
    addhike.setName(ui->name->text());
    addhike.setPark(ui->park->text());
    addhike.setOpen(ui->openTime->time());
    addhike.setClose(ui->closeTime->time());
    addhike.setDistance(ui->distance->text().toDouble());
    addhike.setDiff(ui->difficulty->text().toDouble());
    addhike.setAddress(ui->address->text());
    addhike.setCity(ui->city->text());
    addhike.setZip(ui->zipcode->text().toInt());
    addhike.setPhone(ui->phoneNum->text());
    if((ui->walking->isChecked() && ui->biking->isChecked())|| ui->both1->isChecked())
    {
        addhike.setWB("WALKING/BIKING");
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
        addhike.setWB("WALKING");
    }
    else if(ui->biking->isChecked())
    {
        addhike.setWB("BIKING");
    }
    else
    {
        addhike.setWB("");
    }

    if((ui->scenic->isChecked() && ui->training->isChecked()) || ui->both2->isChecked())
    {
        addhike.setType("SCENIC/TRAINING");
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
        addhike.setType("SCENIC");
    }
    else if(ui->training->isChecked())
    {
        addhike.setType("TRAINING");
    }
    else
    {
        addhike.setType("");
    }
    addhike.setAsc(ui->ascent->text().toDouble());
    addhike.setElev(ui->elevation->text().toDouble());
}
hike addHikes::getHike()
{
    return addhike;
}
void addHikes::on_pushButton_2_clicked()
{
    successful = false;
    close();
}
