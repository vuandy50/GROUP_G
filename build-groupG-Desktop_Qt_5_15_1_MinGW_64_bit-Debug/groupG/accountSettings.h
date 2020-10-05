#ifndef ACCOUNTSETTINGS_H
#define ACCOUNTSETTINGS_H

#include <QDialog>
#include "logindb.h"
#include "account.h"
#include "deleteAccount.h"

namespace Ui {
class accountSettings;
}

class accountSettings : public QDialog
{
    Q_OBJECT

public:
    explicit accountSettings(QWidget *parent = nullptr);
    ~accountSettings();

    void setAccount(account&);
    account changedAccount();
private slots:
    void updateDB();
    bool checker();
    void on_Save_clicked();
    void on_cancel_clicked();
    void on_del_clicked();

private:
    Ui::accountSettings *ui;
    QSqlDatabase db;
    account currAccount = account();
    loginDB *accounts;

    deleteAccount *del;

    void setDefault();
    void setAll();
    void resetUI();
};

#endif // ACCOUNTSETTINGS_H
