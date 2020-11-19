#include "viewpic.h"
#include "ui_viewpic.h"

viewPic::viewPic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::viewPic)
{
    ui->setupUi(this);
}

viewPic::~viewPic()
{
    delete ui;
}
void viewPic::setScreen()
{

}
void viewPic::on_close_clicked()
{
    close();
}
