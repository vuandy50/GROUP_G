#include "accountSettings.h"
#include "ui_accountSettings.h"

accountSettings::accountSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accountSettings)
{
    ui->setupUi(this);
    accounts = new loginDB();
}

accountSettings::~accountSettings()
{
    delete ui;
}

// Loads in account information.
void accountSettings::setAccount(account& set) {
    this->currAccount = set;
    setDefault();
}

account accountSettings::changedAccount() {
    return currAccount;
}

// Default settings printed out; don't know how to do this in constructor rip
void accountSettings::setDefault() {
    ui->email->setText(currAccount.getEmail());
    ui->fname->setPlaceholderText(currAccount.getFname());
    ui->lname->setPlaceholderText(currAccount.getLname());
    ui->username->setPlaceholderText(currAccount.getUsername());
    ui->dob->setDate(currAccount.getDob());
    ui->check6->setText(" ");
}

void accountSettings::resetUI() {
    ui->fname->clear();
    ui->lname->clear();
    ui->username->clear();
    ui->password->clear();
    ui->confirm->clear();
    setDefault();
}

// Repurposed from addaccount.cpp
// if the password does not match
// the check fails, and user is prompted to type again.
bool accountSettings::checker() {
    bool flag = true;
    if(ui->password->text() != ui->confirm->text() && !(ui->password->text().isEmpty())) {
        ui->check6->setText("**MISMATCH**");
     } else if(ui->password->text().isEmpty()) {
        ui->check6->setText("**EMPTY**");
    } else {
        flag = false;
    }

    return flag;
}

// Preps an UPDATE via user email.
void accountSettings::updateDB() {
    QSqlQuery *qry = new QSqlQuery(db);

    qry->prepare("UPDATE accounts SET Fname =:fname, Lname =:lname, Username =:username, Password =:password, Day =:day, Month =:month, Year=:year WHERE Email =:email");
    qry->bindValue(":fname", currAccount.getFname());
    qry->bindValue(":lname", currAccount.getLname());
    qry->bindValue(":username", currAccount.getUsername());
    qry->bindValue(":password", currAccount.getPassword());
    qry->bindValue(":day", currAccount.getDob().day());
    qry->bindValue(":month", currAccount.getDob().month());
    qry->bindValue(":year", currAccount.getDob().year());
    qry->bindValue(":email", currAccount.getEmail());


    // If works, continue, else, see what went wrong
    if (qry->exec()) {}
    else {
        qDebug() << qry->lastError().text();
    }

}

/*
 * Reads in from the text fields.
 * If they're empty, leave it as they are.
 */
void accountSettings::setAll() {
    QString firstName = ui->fname->text();
    QString lastName = ui->lname->text();
    QString username = ui->username->text();
    QString password = ui->password->text();

    if(!firstName.isEmpty()) {
        currAccount.setFname(firstName);
    }
    if(!lastName.isEmpty()) {
        currAccount.setLname(lastName);
    }

    if(!username.isEmpty()) {
        currAccount.setUsername(username);
    }

    if(!password.isEmpty()) {
        currAccount.setPassword(password);
    }

    // Because currAccount already holds the user inputted dob, keep as is.
    currAccount.setDob(ui->dob->dateTime());

    // tries to rewrite the placeholder text.
    setDefault();
}

/* Button to update the DB; reads info
 * from the text fields regardless if it's filled.
 * Passed in vals used if empty.
 */
void accountSettings::on_Save_clicked() {
    if(!(checker())) {
        setAll();
        updateDB();

        resetUI();
        close();
    }
}

// Returns to menu
void accountSettings::on_cancel_clicked() {
    close();
}

// exe's a deletion query.
// New popup will ask "ARE YOU SURE???"
// Only after the textarea matches the hard-coded message,
// the deletion will be proc'd
void accountSettings::on_del_clicked() {
    del = new deleteAccount();
    del->setAccount(currAccount);
    del->show();
    del->setWindowState(Qt::WindowState::WindowActive);
    close();
}
