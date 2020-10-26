#ifndef HIKE_H
#define HIKE_H

#include <QString>
class hike
{
public:
    hike();
    hike(QString name, QString park, int open, int close,
         QString distance, QString difficulty, QString address, QString city, QString zipcode,
         QString phone, QString walkOrBike, QString trailType,QString ascent,QString elevation );
    hike operator = (hike const & obj);
    void setHike(QString name, QString park, int open, int close,
                 QString distance, QString difficulty, QString address, QString city, QString zipcode,
                 QString phone, QString walkOrBike, QString trailType,QString ascent,QString elevation );

    QString getName() {return name_;}
    QString getPark() {return park_;}
    int getOpen() {return open_;}
    int getClose() {return close_;}
    QString getDistance() {return distance_;}
    QString getDiff() {return difficulty_;}
    QString getAddress() {return address_;}
    QString getCity() {return city_;}
    QString getZip() {return zipcode_;}
    QString getPhone() {return phone_;}
    QString getWB() {return walkOrBike_;}
    QString getType() {return trailType_;}
    QString getAsc(){return ascent_;}
    QString getElev(){return elevation_;}

    void setName(QString n);
    void setPark(QString p);
    void setOpen(int o);
    void setClose(int c);
    void setDistance(QString d);
    void setDiff(QString d);
    void setAddress(QString a);
    void setCity(QString c);
    void setZip(QString z);
    void setPhone(QString p);
    void setWB(QString w);
    void setType(QString t);
    void setAsc(QString a);
    void setElev(QString e);

private:
    QString name_;
    QString park_;
    int open_;
    int close_;
    QString distance_;
    QString difficulty_;
    QString address_;
    QString city_;
    QString zipcode_;
    QString phone_;
    QString walkOrBike_;
    QString trailType_;
    QString ascent_;
    QString elevation_;
};

#endif // HIKE_H
