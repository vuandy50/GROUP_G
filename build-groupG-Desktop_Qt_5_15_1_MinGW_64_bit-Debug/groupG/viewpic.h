#ifndef VIEWPIC_H
#define VIEWPIC_H

#include <QDialog>

namespace Ui {
class viewPic;
}

class viewPic : public QDialog
{
    Q_OBJECT

public:
    explicit viewPic(QWidget *parent = nullptr);
    ~viewPic();

private slots:
    void on_close_clicked();
    void setScreen();

private:
    Ui::viewPic *ui;
    QString primaryKey;
};

#endif // VIEWPIC_H
