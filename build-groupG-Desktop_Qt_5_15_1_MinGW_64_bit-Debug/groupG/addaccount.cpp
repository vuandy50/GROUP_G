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
bool addAccount::checker()
{
    if(ui->fname->text().isEmpty()|| ui->lname->text().isEmpty()|| ui->email->text().isEmpty()||
       ui->username->text().isEmpty()||ui->password->text().isEmpty()||ui->confirm->text().isEmpty()||
       ui->password->text() != ui->confirm->text())
     {
          ui->error->setText("FILL IN ALL WITH *");

          if(ui->fname->text().isEmpty())
          {
              ui->check1->setText("*");
          }
          else
          {
              ui->check1->setText("");
          }

          if(ui->lname->text().isEmpty())
          {
              ui->check2->setText("*");
          }
          else
          {
              ui->check2->setText("");
          }

          if(ui->email->text().isEmpty())
          {
              ui->check3->setText("*");
          }
          else
          {
              if(accounts->checkEmail(ui->email->text()))
              {
                  ui->check3->setText("**IN USE**");
              }
              else if(!(newAccount->checkEmail(ui->email->text())))
              {
                      ui->check3->setText("**INVALID**");
              }
              else
              {
                   ui->check3->setText("");
              }
          }
          if(ui->username->text().isEmpty())
          {
              ui->check4->setText("*");
          }
          else
          {
              if(accounts->checkUsername(ui->username->text()))
              {
                  ui->check4->setText("**IN USE**");
              }
              else
              {
                  ui->check4->setText("");
              }

          }
          if(ui->password->text().isEmpty())
          {
              ui->check5->setText("*");
          }
          else
          {
              ui->check5->setText("");
          }

          if(ui->confirm->text().isEmpty())
          {
              ui->check6->setText("*");
          }
          else
          {
              ui->check6->setText("");
          }

          if (!(ui->password->text().isEmpty()) && !(ui->confirm->text().isEmpty()) && (ui->password->text() != ui->confirm->text()))
          {
              ui->check6->setText("**MISMATCH**");
          }

          return true;
     }
   else
    {
        ui->error->setText("");
        return false;
    }
}
void addAccount::addtoDB(account a)
{
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("INSERT INTO accounts ("
                 "Fname,"
                 "Lname,"
                 "Email,"
                 "Username,"
                 "Password,"
                 "Day,"
                 "Month,"
                 "Year)"
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?)");

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

void addAccount::on_Save_clicked()
{
    newAccount = new account();

    if(!(checker()) && newAccount->checkEmail(ui->email->text()) && (ui->password->text() == ui->confirm->text()))
    {
        newAccount->setFname(ui->fname->text());
        newAccount->setLname(ui->lname->text());
        newAccount->setEmail(ui->email->text());
        newAccount->setUsername(ui->username->text());
        newAccount->setPassword(ui->password->text());
        newAccount->setDob(ui->dob->dateTime());
        addtoDB(*newAccount);
        close();
    }
}

void addAccount::on_cancel_clicked()
{
        close();
}
