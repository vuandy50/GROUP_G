#ifndef TRACKER_H
#define TRACKER_H

#include <QDialog>
#include <QGeoRoute>
#include <QGeoCoordinate>
#include <QGeoPositionInfoSource>
#include <QGeoSatelliteInfoSource>
#include <QTimer>
#include <QTime>
#include <QDebug>

namespace Ui {
class tracker;
}

class tracker : public QDialog
{
    Q_OBJECT

public:
    explicit tracker(QWidget *parent = nullptr);
    ~tracker();

private slots:
    void on_pause_clicked();
    void on_resume_clicked();
    void on_stop_clicked();
    void on_returnTo_clicked();
    void updateTime();
    void updatePosition();

private:
    Ui::tracker *ui;
    QTimer *timer;
    QTime *time;

};

#endif // TRACKER_H
