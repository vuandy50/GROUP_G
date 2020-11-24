#ifndef ADDHIKES_H
#define ADDHIKES_H

#include <QDialog>
#include <QDebug>

#include "hike.h"

namespace Ui {
class addHikes;
}

class addHikes : public QDialog
{
    Q_OBJECT

public:
    explicit addHikes(QWidget *parent = nullptr);
    ~addHikes();
    bool is_Successful();
    hike getHike();
private slots:
    void on_add_clicked();
    bool ifBlank();
    void setHike();
    void errorMessage();
    bool checkFormat();
    void on_pushButton_2_clicked();

    void on_changePic_clicked();

private:
    Ui::addHikes *ui;
    bool successful;
    hike addhike;
};

#endif // ADDHIKES_H
