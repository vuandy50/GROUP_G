#ifndef EDITHIKES_H
#define EDITHIKES_H

#include <QDialog>
#include <QVector>
#include <database.h>
#include <QSqlQuery>
#include <QStringList>
#include <hike.h>
#include <QDebug>
#include <QRegExp>

namespace Ui {
class editHikes;
}
class editHikes : public QDialog
{
    Q_OBJECT

public:
    explicit editHikes(QWidget *parent = nullptr, QString PK = "");
    ~editHikes();
    void setPK(QString PK);
    void getHike();
    void showHike();
    hike editTrail(){return trailEdit;}
    bool is_there_an_edit();
    void ifBlank();
    void setTrailEdit();


    bool checkFormat();

private slots:
    void on_pushButton_2_clicked();

    void on_edit_clicked();

private:
    Ui::editHikes *ui;
    QString primaryKey;
    hike trail;
    hike trailEdit;
    bool check;
    QSqlDatabase db;

};

#endif // EDITHIKES_H
