#include "addaccount.h"
#include "ui_addaccount.h"

addAccount::addAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addAccount)
{
    ui->setupUi(this);
    accounts = new loginDB();
}

addAccount::~addAccount()
{
    delete ui;
}
void addAccount::clearScreen()
{
    ui->check1->clear();
    ui->check2->clear();
    ui->check3->clear();
    ui->check4->clear();
    ui->check5->clear();
    ui->check6->clear();
    ui->error->clear();

}
bool addAccount::checkEmpty()
{
    if(ui->fname->text().isEmpty())
    {
        ui->check1->setText("*");
    }
    if(ui->lname->text().isEmpty())
    {
        ui->check2->setText("*");
    }
    if(ui->email->text().isEmpty())
    {
        ui->check3->setText("*");
    }
    if(ui->username->text().isEmpty())
    {
        ui->check4->setText("*");
    }
    if(ui->password->text().isEmpty())
    {
        ui->check5->setText("*");
    }
    if(ui->confirm->text().isEmpty())
    {
        ui->check6->setText("*");
    }
    if(ui->fname->text().isEmpty()||
       ui->lname->text().isEmpty()||
       ui->email->text().isEmpty()||
       ui->username->text().isEmpty()||
       ui->password->text().isEmpty()||
       ui->confirm->text().isEmpty()||
       ui->password->text() != ui->confirm->text())
    {
         ui->error->setText("FILL IN ALL WITH *");
         return true;
    }
    return false;

}
bool addAccount::checkDuplicate()
{
    if(accounts->checkEmail(ui->email->text()))
    {
        ui->check3->setText("**IN USE**");
    }
    if(accounts->checkUsername(ui->username->text()))
    {
        ui->check4->setText("**IN USE**");
    }
    if(accounts->checkUsername(ui->username->text())||accounts->checkEmail(ui->email->text()))
    {
        return true;
    }
    return false;
}
void addAccount::addtoDB(account a)
{
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("INSERT INTO accounts"
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?");

    qry->addBindValue(a.getFname());
    qry->addBindValue(a.getLname());
    qry->addBindValue(a.getEmail());
    qry->addBindValue(a.getUsername());
    qry->addBindValue(a.getPassword());
    qry->addBindValue(a.getDob().day());
    qry->addBindValue(a.getDob().month());
    qry->addBindValue(a.getDob().year());

    if (qry->exec())
    {
        qDebug("YES");
    }
    else
    {
        qDebug("NO");
    }
}
void addAccount::finalCheck()
{

    if(checkEmpty()){}
    qDebug("3");
    if(checkDuplicate()){}
    qDebug("4");
    /*
    if(!(ui->email->text().isEmpty()) && !(newAccount->checkEmail(ui->email->text())))
    {
        qDebug("5");
        ui->check3->setText("**INVALID**");
    }
    qDebug("6");
    if (!(ui->password->text().isEmpty()) && !(ui->confirm->text().isEmpty()) && (ui->password->text() != ui->confirm->text()))
    {
        qDebug("7");
        ui->check6->setText("**MISMATCH**");
    }
    */
}
void addAccount::on_Save_clicked()
{
    clearScreen();
    //finalCheck();
    newAccount = new account();

    if(newAccount->checkEmail(ui->email->text()) && (ui->password->text() == ui->confirm->text()) && !(checkEmpty()) && !(checkDuplicate()))
    {
        newAccount->setFname(ui->fname->text());
        newAccount->setLname(ui->lname->text());
        newAccount->setEmail(ui->email->text());
        newAccount->setUsername(ui->username->text());
        newAccount->setPassword(ui->password->text());
        newAccount->setDob(ui->dob->dateTime());
        //addtoDB(*newAccount);
        close();
    }
}

void addAccount::on_cancel_clicked()
{
        close();
}
