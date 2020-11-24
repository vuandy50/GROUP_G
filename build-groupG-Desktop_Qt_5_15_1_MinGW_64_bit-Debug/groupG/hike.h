#ifndef HIKE_H
#define HIKE_H

#include <QString>
#include <QDebug>
#include <QTime>
#include <QByteArray>
#include <QFileInfo>
#include <QPixmap>
#include <QBuffer>
#include <QUrl>

class hike
{
public:
    hike();
    hike(QString name, QString park, QTime open, QTime close,
         double distance, double difficulty, QString address, QString city, int zipcode,
         QString phone, QString walkOrBike, QString trailType,double ascent,double elevation,QByteArray pict );
    hike operator = (hike const & obj);
    void setHike(QString name, QString park, QTime open, QTime close,
                 double distance, double difficulty, QString address, QString city, int zipcode,
                 QString phone, QString walkOrBike, QString trailType, double ascent,double elevation,QByteArray pict);

    QString getName() {return name_;}
    QString getPark() {return park_;}
    QTime getOpen() {return open_;}
    QTime getClose() {return close_;}
    double getDistance() {return distance_;}
    double getDiff() {return difficulty_;}
    QString getAddress() {return address_;}
    QString getCity() {return city_;}
    int getZip() {return zipcode_;}
    QString getPhone() {return phone_;}
    QString getWB() {return walkOrBike_;}
    QString getType() {return trailType_;}
    double getAsc(){return ascent_;}
    double getElev(){return elevation_;}
    QByteArray getPic(){return pic;}

    void setName(QString n);
    void setPark(QString p);
    void setOpen(QTime o);
    void setClose(QTime c);
    void setDistance(double d);
    void setDiff(double d);
    void setAddress(QString a);
    void setCity(QString c);
    void setZip(int z);
    void setPhone(QString p);
    void setWB(QString w);
    void setType(QString t);
    void setAsc(double a);
    void setElev(double e);
    void setPic(QByteArray p);

    bool LoadPic(QString path);

private:
    QString name_;
    QString park_;
    QTime open_;
    QTime close_;
    double distance_;
    double difficulty_;
    QString address_;
    QString city_;
    int zipcode_;
    QString phone_;
    QString walkOrBike_;
    QString trailType_;
    double ascent_;
    double elevation_;
    QByteArray pic;
};

#endif // HIKE_H
