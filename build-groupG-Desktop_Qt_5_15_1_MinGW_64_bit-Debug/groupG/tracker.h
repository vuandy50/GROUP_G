#ifndef TRACKER_H
#define TRACKER_H

#include <QDialog>
#include <QTimer>
#include <QTime>
#include <QDebug>
#include <QGeoPath>

#include "positioning.h"


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
    void update();
    double toMiles(double meters);

private:
    Ui::tracker *ui;
    QTimer *timer;
    QTime *time;
    positioning *position;


};

#endif // TRACKER_H
