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

private slots:
    void on_confirm_clicked();

private:
    Ui::forgot_UandP *ui;
    account *recoverAcc;
    loginDB *getAccounts;
    QSqlDatabase db;
};

#endif // FORGOT_UANDP_H
