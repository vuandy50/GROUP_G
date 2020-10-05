#ifndef DELETEACCOUNT_H
#define DELETEACCOUNT_H

#include <QDialog>
#include "logindb.h"
#include "account.h"

namespace Ui {
class deleteAccount;
}

class deleteAccount : public QDialog
{
    Q_OBJECT

public:
    explicit deleteAccount(QWidget *parent = nullptr);
    ~deleteAccount();

    void setAccount(account);
private slots:
    void on_consent_clicked();

    void on_deleteButton_clicked();

    void on_cancel_clicked();

private:
    Ui::deleteAccount *ui;
    QSqlDatabase db;
    loginDB *accounts;

    void deleteFromDB();

    account currAccount;
};

#endif // DELETEACCOUNT_H
