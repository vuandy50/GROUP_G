#include "deleteAccount.h"
#include "ui_deleteAccount.h"

deleteAccount::deleteAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteAccount)
{
    ui->setupUi(this);
    accounts = new loginDB();

    ui->label_3->hide();
    ui->lineEdit->hide();
    ui->deleteButton->hide();
}

deleteAccount::~deleteAccount()
{
    delete ui;
}

// Loads in account information.
void deleteAccount::setAccount(account set) {
    this->currAccount = set;
}

void deleteAccount::on_consent_clicked()
{
    ui->label->hide();
    ui->consent->hide();
    ui->label_3->show();
    ui->lineEdit->show();
    ui->deleteButton->show();
}

void deleteAccount::deleteFromDB() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("DELETE FROM accounts WHERE Email =:email");
    qry->bindValue(":email", currAccount.getEmail());


    // If works, continue, else, see what went wrong
    if (qry->exec()) {}
    else {
        qDebug() << qry->lastError().text();
        return;
    }
}

void deleteAccount::on_deleteButton_clicked()
{
    if(ui->lineEdit->text() == "delete") {
        deleteFromDB();
        QApplication::quit();
    } else {
        ui->lineEdit->clear();
        ui->label_4->setText("Try again.");
    }
}

void deleteAccount::on_cancel_clicked()
{
    this->close();
}
