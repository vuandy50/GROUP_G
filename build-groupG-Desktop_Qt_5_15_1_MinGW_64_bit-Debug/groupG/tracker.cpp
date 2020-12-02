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
    connect(timer,SIGNAL(timeout()),this,SLOT(updateTime()));
    timer->start(1000);

    QGeoPositionInfoSource *source = QGeoPositionInfoSource::createDefaultSource(0);
    if (source)
    {
        connect(source,SIGNAL(positionUpdated()),this,SLOT(updatePosistion()));
        source->startUpdates();
    }



}

tracker::~tracker()
{
    delete ui;
}
void tracker::updateTime()
{
    *time = time->addSecs(1);
    ui->timer->setText(time->toString("mm:ss"));
}
void tracker::updatePosition()
{
    qDebug() << "YES";
}
void tracker::on_pause_clicked()
{
    ui->pause->hide();
    ui->stop->show();
    ui->resume->show();
    timer->stop();
}

void tracker::on_resume_clicked()
{
    ui->pause->show();
    ui->stop->hide();
    ui->resume->hide();
    timer->start(1000);
}

void tracker::on_stop_clicked()
{
    ui->stop->hide();
    ui->resume->hide();
    ui->returnTo->show();
}

void tracker::on_returnTo_clicked()
{
    close();
}
