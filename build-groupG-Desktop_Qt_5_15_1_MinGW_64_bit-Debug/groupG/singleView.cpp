#include "singleview.h"
#include "ui_singleview.h"

singleView::singleView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::singleView)
{
    ui->setupUi(this);
}

singleView::~singleView()
{
    delete ui;
}


void singleView::setName(QString n) {
    name = n;
    displayAll();
}

void singleView::displayAll() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("SELECT * FROM hikes WHERE Name =:name");
    qry->bindValue(":name", name);

    // If works, continue, else, see what went wrong
    if (qry->exec()) {
        qDebug("YES");
    }
    else {
        qDebug() << qry->lastError().text();
    }

    // Print to vals.
    qry->first();

    int open = qry->value(2).toInt();
    QString openTime = (open < 12 ? " AM - " : " PM -" );
    int close = qry->value(3).toInt();
    QString closeTime = (close < 12 ? " AM" : " PM");
    close = (close > 12 ? close - 12 : close);

    ui->address->setText(qry->value(6).toString() + " " + qry->value(7).toString() + ", CA " + qry->value(8).toString());
    ui->ascent->setText("Ascent: " + QString::number(qry->value(12).toInt()) + " ft");
    ui->difficulty->setText("Difficulty: " + QString::number(qry->value(5).toInt()));
    ui->distance->setText("Distance: " + QString::number(qry->value(4).toDouble(), 'f', 3) + " miles");
    ui->elevation->setText("Elevation: " + QString::number(qry->value(13).toInt()) + " ft");
    ui->hours->setText(QString::number(open) + openTime + QString::number(close) + closeTime);
    ui->name->setText(qry->value(0).toString());
    ui->park->setText(qry->value(1).toString());
    ui->phone->setText(qry->value(9).toString());

    ui->pic->setPixmap(QPixmap(QDir::homePath() + "resources\\" + qry->value(14).toString()));

    ui->trail->setText(qry->value(11).toString());
    ui->wob->setText(qry->value(10).toString());
}

void singleView::on_cancel_clicked()
{
    close();
}
