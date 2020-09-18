#ifndef ADDACCOUNT_H
#define ADDACCOUNT_H

#include <QDialog>
#include "logindb.h"


namespace Ui {
class addAccount;
}

class addAccount : public QDialog
{
    Q_OBJECT

public:
    explicit addAccount(QWidget *parent = nullptr);
    ~addAccount();

private slots:
    void addtoDB(account a);
    void clearScreen();
    void finalCheck();
    bool checkEmpty();
    bool checkDuplicate();
    void on_Save_clicked();
    void on_cancel_clicked();

private:
    QSqlDatabase db;
    Ui::addAccount *ui;
    account *newAccount;
    loginDB *accounts;
};

#endif // ADDACCOUNT_H
