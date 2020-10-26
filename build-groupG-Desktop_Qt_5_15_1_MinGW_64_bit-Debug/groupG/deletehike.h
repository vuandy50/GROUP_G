#ifndef DELETEHIKE_H
#define DELETEHIKE_H

#include <QDialog>

namespace Ui {
class deleteHike;
}

class deleteHike : public QDialog
{
    Q_OBJECT

public:
    explicit deleteHike(QWidget *parent = nullptr);
    ~deleteHike();
    bool getDelHike();

private slots:
    void on_consent_clicked();

    void on_cancel_clicked();

    void on_deleteButton_clicked();

private:
    Ui::deleteHike *ui;
    bool delHike;
};

#endif // DELETEHIKE_H
