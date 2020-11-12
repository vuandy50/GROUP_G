#include "singleView.h"
#include "ui_singleview.h"

singleView::singleView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::singleView)
{
    ui->setupUi(this);
    preCheck = false;
    postCheck = false;
}

singleView::~singleView()
{
    delete ui;
}

// Extended initializer.
void singleView::setNameEmail(QString n, QString e) {
    name = n;
    email = e;
    this->setWindowTitle(name);
    displayAll();
}

// Display initial conditions. Interactive bits is save checkbox and cancel button.
void singleView::displayAll() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("SELECT * FROM hikes WHERE Name =:name");
    qry->bindValue(":name", name);

    // If works, continue, else, see what went wrong
    if (qry->exec()) {}
    else {
        qDebug() << qry->lastError().text();
    }

    // Print to vals.
    qry->first();

    QTime open = qry->value(2).toTime();
    QString openTime = open.toString("h:mm ap"); //hour:min am/pm
    QTime close = qry->value(3).toTime();
    QString closeTime = close.toString("h:mm ap");


    ui->address->setText(qry->value(6).toString() + " " + qry->value(7).toString() + ", CA " + qry->value(8).toString());
    ui->ascent->setText("Ascent: " + QString::number(qry->value(12).toDouble()) + " ft");
    ui->difficulty->setText("Difficulty: " + QString::number(qry->value(5).toDouble()));
    ui->distance->setText("Distance: " + QString::number(qry->value(4).toDouble(), 'f', 3) + " miles");
    ui->elevation->setText("Elevation: " + QString::number(qry->value(13).toDouble()) + " ft");
    ui->hours->setText(openTime + " - " + closeTime);
    ui->name->setText(qry->value(0).toString());
    ui->park->setText(qry->value(1).toString());
    ui->phone->setText(qry->value(9).toString());


    ui->trail->setText(qry->value(11).toString());
    ui->wob->setText(qry->value(10).toString());

    QPixmap pict;
    ui->pic->setAlignment(Qt::AlignCenter);
    // qDebug() << QDir::currentPath();
    if(!pict.load(QDir::currentPath() + "/resources/" + qry->value(14).toString())){
        qDebug() << ("Whoops.");
    }
    pict = pict.scaled(ui->pic->size(),Qt::KeepAspectRatio);

    ui->pic->setPixmap(pict);

    checkBoxInit();
}

// Separate function to delineate if the checkbox should be filled on startup because the code was large.
void singleView::checkBoxInit() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("SELECT hikes.Name, hikes.Park, hikes.Distance, hikes.Difficulty, accounts.Email "
                 "FROM hikes "
                 "INNER JOIN saved_hikes "
                 "ON hikes.Name = saved_hikes.Trailname "
                 "AND saved_hikes.Trailname =:name "
                 "AND saved_hikes.Useremail =:email "
                 "LEFT OUTER JOIN accounts "
                 "ON saved_hikes.Useremail = accounts.Email");

    qry->bindValue(":name", name);
    qry->bindValue(":email", email);

    if (qry->exec()) {}
    else {
        qDebug() << qry->lastError().text();
    }

    // Sees if the given query is empty.
    qry->next();
    QSqlRecord rec = qry->record();

    // First query; gives Name.
    QSqlField field=rec.field(0);

    // preCheck sees if Name is not empty, thus meaning that there is a valid query.
    preCheck = (field.value() != "");
    ui->saveCheckBox->setChecked(preCheck);
}

void singleView::on_saveCheckBox_stateChanged(int arg1) {
    if(arg1) {
        // if checked true, and previously not,
        if(!preCheck) {
            postCheck = true;
        } else {
            postCheck = false;
        }
    } else {
        // if empty, and previously was full,
        if(preCheck) {
            postCheck = true;
        } else {
            postCheck = false;
        }
    }
}

// When window closes, update database, as opposed to updating every time the checkbox is clicked.
void singleView::closeEvent(QCloseEvent *event)
{
    updateDB();
    event->accept();
}

// One kink; when deleting from Saved Hikes, list does not update because the update list is in menu.cpp AND is triggered through a button.
void singleView::updateDB() {
    if(postCheck) {
        QSqlQuery *qry = new QSqlQuery(db);
        // exe insert.
        if(!preCheck) {
            qry->prepare("INSERT INTO saved_hikes (Useremail, Trailname) VALUES(:email, :name)");

            qry->bindValue(":email", email);
            qry->bindValue(":name", name);

            // If works, continue, else, see what went wrong
            if (qry->exec()) {}
            else {
                qDebug() << qry->lastError().text();
            }
        }
        // exe delete.
        else if (preCheck) {
            qry->prepare("DELETE FROM saved_hikes WHERE Useremail =:email AND Trailname =:name");

            qry->bindValue(":email", email);
            qry->bindValue(":name", name);

            // If works, continue, else, see what went wrong
            if (qry->exec()) {}
            else {
                qDebug() << qry->lastError().text();
            }
        }
    }
}
void singleView::on_cancel_clicked()
{
    close();
}
