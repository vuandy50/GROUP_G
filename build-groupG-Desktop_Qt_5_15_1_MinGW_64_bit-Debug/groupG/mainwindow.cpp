#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myDB.openDB();
    login = new loginDB();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    login->loadAccounts();
    ui->emesg->setText("");         //clear error message
    int i = 0;
    while(i < login->getSize())
    {
        QString username = login->getVector()[i].getUsername();
        QString password =login->getVector()[i].getPassword();

        //CHECK VALID USERNAME AND PASSWORD
        if(ui->username->text() == username && ui->password->text() == password)
        {
            close();                    // close login screen
            menu = new class menu();    // create new menu
            menu->show();               // show new menu
        }
        i++;
    }
    //INVALID USERNAME AND PASSWORD
    if (i == login->getSize())
    {
        ui->username->clear();      //clear username
        ui->password->clear();      //clear password

        //Display error message to User
        ui->emesg->setText("Invaild username and/or password");
    }


}

void MainWindow::on_pushButton_clicked()
{

    add = new addAccount();
    add->show();
}
