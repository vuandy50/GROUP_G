#include "forgot_uandp.h"
#include "ui_forgot_uandp.h"

forgot_UandP::forgot_UandP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgot_UandP)
{
    ui->setupUi(this);
    getAccounts = new loginDB();
    ui->confirm_2->hide();
    ui->pass->hide();
    ui->pass2->hide();
    ui->password->hide();
    ui->user->hide();
    ui->username->hide();
    ui->check1->hide();
    ui->check2->hide();
    ui->check3->hide();
}

forgot_UandP::~forgot_UandP()
{
    delete ui;
}
void forgot_UandP::switchMenu(account *acc)
{
    //Hide email confirmation
    ui->confirm->hide();
    ui->emailEdit->hide();
    ui->error->hide();
    ui->title->hide();

    //Show Username and Password of account
    ui->save->setText("Save");
    ui->save->setEnabled(1);
    ui->save->setFlat(0);
    ui->confirm_2->show();
    ui->pass->show();
    ui->pass2->show();
    ui->password->show();
    ui->user->show();
    ui->username->show();
    ui->check1->show();
    ui->check2->show();
    ui->check3->show();
    ui->username->setText(acc->getUsername());
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
                switchMenu(recoverAcc);
            }
            i++;
        }
        if (i == getAccounts->getSize())
        {
            ui->error->setText("**EMAIL NOT FOUND**");
        }
    }
    else
    {
        ui->error->setText("**EMAIL INVALID**");
    }

}
bool forgot_UandP::checker()
{
    if(ui->username->text().isEmpty()|| ui->password->text().isEmpty() || ui->confirm_2->text().isEmpty())
    {
        ui->error_2->setText("FILL IN ALL WITH *");
        if(ui->username->text().isEmpty())
        {
            ui->check1->setText("*");
        }
        if(ui->password->text().isEmpty())
        {
            ui->check2->setText("*");
        }
        if(ui->confirm_2->text().isEmpty())
        {
            ui->check3->setText("*");
        }
        return true;
    }
    return false;
}
void forgot_UandP::on_save_clicked()
{
    if(!checker())
    {
        if(ui->username->text() == recoverAcc->getUsername())
        {
            if(ui->password->text() == ui->confirm_2->text())
            {
                QSqlQuery *qry = new QSqlQuery(db);

                qry->prepare("UPDATE accounts SET Password = '"+ui->password->text()+"' WHERE Email = '"+recoverAcc->getEmail()+"';");
                if(qry->exec())
                {
                    qDebug("WORKS");
                }
                else
                {
                    qDebug("NOOOOO");
                }
                close();
            }
            else
            {
                ui->check3->setText("**MISMATCH**");
            }
        }
        else
        {
            int i = 0;
            while(i < getAccounts->getSize())
            {
                if(ui->username->text() == getAccounts->getVector()[i].getUsername())
                {
                    ui->check1->setText("**IN USE**");
                    i = getAccounts->getSize() + 1;
                }
                i++;
            }
            if(i == getAccounts->getSize())
            {
                QSqlQuery *qry = new QSqlQuery(db);

                qry->prepare("UPDATE accounts SET Username = '"+ui->username->text()+"', Password = '"+ui->password->text()+"' WHERE Email = '"+recoverAcc->getEmail()+"';");
                if(qry->exec())
                {
                    qDebug("WORKS");
                }
                else
                {
                    qDebug("NOOOOO");
                }
                close();
            }
        }
    }

}

void forgot_UandP::on_cancel_clicked()
{
    close();
}
