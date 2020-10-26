#include "deletehike.h"
#include "ui_deletehike.h"

deleteHike::deleteHike(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteHike)
{
    ui->setupUi(this);
    ui->Label2->hide();
    ui->deleteButton->hide();
    ui->cancel->hide();
    ui->typeDelete->hide();
    delHike = false;
}

deleteHike::~deleteHike()
{
    delete ui;
}
bool deleteHike::getDelHike()
{
    return delHike;
}

void deleteHike::on_consent_clicked()
{
    ui->Label1->hide();
    ui->consent->hide();
    ui->Label2->show();
    ui->deleteButton->show();
    ui->cancel->show();
    ui->typeDelete->show();
}

void deleteHike::on_cancel_clicked()
{
    close();
}

void deleteHike::on_deleteButton_clicked()
{
    if(ui->typeDelete->text() == "delete")
    {
        delHike = true;
        close();
    }
    else
    {
        ui->error->setText("Try Again");
    }
}
