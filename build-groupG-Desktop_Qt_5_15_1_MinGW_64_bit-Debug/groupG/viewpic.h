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

private:
    Ui::viewPic *ui;
};

#endif // VIEWPIC_H
