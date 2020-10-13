#ifndef SINGLEVIEW_H
#define SINGLEVIEW_H

#include <QDialog>
#include <QPixmap>

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

    void setName(QString);

private slots:
    void on_cancel_clicked();

private:
    Ui::singleView *ui;
    QSqlDatabase db;
    QString name;

    void displayAll();
};

#endif // SINGLEVIEW_H
