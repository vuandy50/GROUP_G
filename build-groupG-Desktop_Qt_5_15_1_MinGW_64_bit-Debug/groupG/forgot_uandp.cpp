#include "forgot_uandp.h"
#include "ui_forgot_uandp.h"

forgot_UandP::forgot_UandP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgot_UandP)
{
    ui->setupUi(this);
    getAccounts = new loginDB();
}

forgot_UandP::~forgot_UandP()
{
    delete ui;
}

void forgot_UandP::on_confirm_clicked()
{
    QString email = ui->emailEdit->text();
    recoverAcc = new account;
    if(recoverAcc->checkEmail(ui->emailEdit->text()))
    {
        getAccounts->loadAccounts();
        int i = 0;
        while(i < getAccounts->getSize())
        {
            QString check = getAccounts->getVector()[i].getEmail();
            if(email == check)
            {
                *recoverAcc = getAccounts->getVector()[i];
            }
            i++;
        }
        if (i == getAccounts->getSize())
        {
            qDebug("Error incorrect email");
        }
    }
    else
    {
        qDebug("Error Invalid email");
    }

}
