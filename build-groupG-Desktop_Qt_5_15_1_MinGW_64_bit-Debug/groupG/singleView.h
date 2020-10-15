#ifndef SINGLEVIEW_H
#define SINGLEVIEW_H

#include <QDialog>
#include <QCloseEvent>
#include <QCheckBox>
#include <QSqlRecord>
#include <QPixmap>
#include <QSqlField>
#include "logindb.h"

namespace Ui {
class singleView;
}

class singleView : public QDialog
{
    Q_OBJECT

public:
    explicit singleView(QWidget *parent = nullptr);
    ~singleView();

    void setNameEmail(QString, QString);
protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void on_cancel_clicked();

    void on_saveCheckBox_stateChanged(int arg1);

private:
    Ui::singleView *ui;
    QSqlDatabase db;
    QString name;
    QString email;
    bool preCheck;
    bool postCheck;

    void updateDB();
    void displayAll();
    void checkBoxInit();
};

#endif // SINGLEVIEW_H
