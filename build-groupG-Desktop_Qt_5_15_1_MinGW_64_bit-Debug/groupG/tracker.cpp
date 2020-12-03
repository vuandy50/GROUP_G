#include "tracker.h"
#include "ui_tracker.h"

tracker::tracker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tracker)
{
    ui->setupUi(this);

    ui->stop->hide();
    ui->resume->hide();
    ui->returnTo->hide();
    time = new QTime(0,0,0);
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(1000);

    position = new positioning();
}

tracker::~tracker()
{
    delete ui;
}
void tracker::update()
{
    *time = time->addSecs(1);
    ui->timer->setText(time->toString("mm:ss"));

    QGeoPath dist(position->getPath());
    ui->distance->setText(QString::number(toMiles(dist.length(0,dist.size()-1)),'f',2));

    double speed = toMiles(dist.length(0,dist.size()-1)) / (time->minute() + time->second()/60.0);
    ui->speed->setText(QString::number(speed,'f',2));
}
double tracker::toMiles(double meters)
{
    return meters * 0.000621371;
}
void tracker::on_pause_clicked()
{
    ui->pause->hide();
    ui->stop->show();
    ui->resume->show();
    timer->stop();
    position->stop();
}

void tracker::on_resume_clicked()
{
    ui->pause->show();
    ui->stop->hide();
    ui->resume->hide();
    timer->start(1000);
    position->start();

}

void tracker::on_stop_clicked()
{
    ui->stop->hide();
    ui->resume->hide();
    ui->returnTo->show();
    timer->stop();
    position->stop();
}

void tracker::on_returnTo_clicked()
{
    close();
}
