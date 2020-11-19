#include "hike.h"

hike::hike()
{

}

hike::hike(QString name, QString park, QTime open, QTime close,
     double distance, double difficulty, QString address, QString city, int zipcode,
     QString phone, QString walkOrBike, QString trailType, double ascent,double elevation,QByteArray pict)
{
    name_ = name;
    park_ = park;
    open_.setHMS(open.hour(),open.minute(),open.second());
    close_.setHMS(close.hour(),close.minute(),close.second());
    distance_ = distance;
    difficulty_ = difficulty;
    address_ = address;
    city_ = city;
    zipcode_ = zipcode;
    phone_ = phone;
    walkOrBike_ = walkOrBike;
    trailType_ = trailType;
    ascent_ = ascent;
    elevation_ = elevation;
    pic = pict;
}
hike hike::operator = (hike const & obj)
{
    name_ = obj.name_;
    park_ = obj.park_;
    open_.setHMS(obj.open_.hour(),obj.open_.minute(),obj.open_.second());
    close_.setHMS( obj.close_.hour(), obj.close_.minute(), obj.close_.second());
    distance_ = obj.distance_;
    difficulty_ = obj.difficulty_;
    address_ = obj.address_;
    city_ = obj.city_;
    zipcode_ = obj.zipcode_;
    phone_ = obj.phone_;
    walkOrBike_ = obj.walkOrBike_;
    trailType_ = obj.trailType_;
    ascent_ = obj.ascent_;
    elevation_ = obj.elevation_;
    pic = obj.pic;
    return *this;
}
void hike::setHike(QString name, QString park, QTime open, QTime close,
             double distance, double difficulty, QString address, QString city, int zipcode,
             QString phone, QString walkOrBike, QString trailType, double ascent,double elevation,QByteArray pict )
{
    name_ = name;
    park_ = park;
    open_.setHMS(open.hour(),open.minute(),open.second());
    close_.setHMS(close.hour(),close.minute(),close.second());
    distance_ = distance;
    difficulty_ = difficulty;
    address_ = address;
    city_ = city;
    zipcode_ = zipcode;
    phone_ = phone;
    walkOrBike_ = walkOrBike;
    trailType_ = trailType;
    ascent_ = ascent;
    elevation_ = elevation;
    pic = pict;
}
void hike::setName(QString n)
{
    name_ = n;
}
void hike::setPark(QString p)
{
    park_ = p;
}
void hike::setOpen(QTime o)
{
    open_.setHMS(o.hour(),o.minute(),o.second());
    ;
}
void hike::setClose(QTime c)
{
    close_.setHMS(c.hour(),c.minute(),c.second());
}
void hike::setDistance(double d)
{
    distance_ = d;
}
void hike::setDiff(double d)
{
    difficulty_ = d;
}
void hike::setAddress(QString a)
{
    address_ = a;
}
void hike::setCity(QString c)
{
    city_ = c;
}
void hike::setZip(int z)
{
    zipcode_ = z;
}
void hike::setPhone(QString p)
{
     phone_ = p;
}
void hike::setWB(QString w)
{
    walkOrBike_ = w;
}
void hike::setType(QString t)
{
    trailType_ = t;
}
void hike::setAsc(double a)
{
    ascent_ = a;
}
void hike::setElev(double e)
{
    elevation_ = e;
}
void hike::setPic(QByteArray p)
{
    pic = p;
}
