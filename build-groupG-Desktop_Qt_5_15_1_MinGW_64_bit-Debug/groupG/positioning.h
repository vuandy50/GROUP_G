#ifndef POSITIONING_H
#define POSITIONING_H

#include <QGeoCoordinate>
#include <QGeoPositionInfoSource>
#include <QGeoPositionInfo>
#include <QList>
#include <QDebug>

class positioning : public QObject
{
    Q_OBJECT
public:
    positioning(QObject *parent = 0)
        : QObject(parent)
    {
        source = QGeoPositionInfoSource::createDefaultSource(this);
        if (source) {
            connect(source, SIGNAL(positionUpdated(QGeoPositionInfo)),
                    this, SLOT(positionUpdated(QGeoPositionInfo)));
            source->startUpdates();
        }
    }
    void start();
    void stop();
    QList<QGeoCoordinate> getPath(){return path;}
private slots:
    void positionUpdated(const QGeoPositionInfo &info)
    {
        qDebug() << "Position Info: " << info;
        coordinates = new QGeoCoordinate();
        coordinates->setLongitude(QString::number(info.coordinate().longitude(),'f',0).toDouble());
        coordinates->setLatitude(QString::number(info.coordinate().latitude(),'f',0).toDouble());

        qDebug() << "Longitude: " << QString::number(info.coordinate().longitude(),'f',0);
        qDebug() << "Latitude: " << QString::number(info.coordinate().latitude(),'f',0);

        path.push_back(*coordinates);
    }
private:
    QGeoPositionInfoSource *source;
    QGeoCoordinate *coordinates;
    QList<QGeoCoordinate> path;

};

#endif // POSITIONING_H
