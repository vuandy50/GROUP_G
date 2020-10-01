#ifndef FORGOT_UANDP_H
#define FORGOT_UANDP_H

#include <QDialog>
#include "logindb.h"

namespace Ui {
class forgot_UandP;
}

class forgot_UandP : public QDialog
{
    Q_OBJECT

public:
    explicit forgot_UandP(QWidget *parent = nullptr);
    ~forgot_UandP();
    void switchMenu(account *acc);
    bool checker();

private slots:
    void on_confirm_clicked();
    void on_save_clicked();

    void on_cancel_clicked();

private:
    Ui::forgot_UandP *ui;
    account *recoverAcc;
    loginDB *getAccounts;
    QSqlDatabase db;
};

#endif // FORGOT_UANDP_H
