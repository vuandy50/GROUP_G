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
    mapper = new gmap();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_login_clicked()
{
    login->loadAccounts();
    int i = 0;
    if (ui->username->text() == "admin" && ui->password->text() == "admin")
    {
            close();
            admin = new adminWindow();
            admin->show();
    }
    else
    {
        while(i < login->getSize())
        {
            QString username = login->getVector()[i].getUsername();
            QString password =login->getVector()[i].getPassword();

            //CHECK VALID USERNAME AND PASSWORD
            if(ui->username->text() == username && ui->password->text() == password)
            {
                close();                    // close login screen
                menu = new class menu();    // create new menu
                menu->setAccount(login->getVector()[i]);
                menu->move(20, 120);
                menu->show();               // show new menu

                mapper->resize(1024, 840);
                mapper->move(880, 60);
                mapper->show();
                // terminates early.
                close();
            }
            i++;
        }
    }
    //INVALID USERNAME AND PASSWORD
    if (i == login->getSize())
    {
        ui->username->clear();      //clear username
        ui->password->clear();      //clear password

        //Display error message to User
        ui->change->setText("Forgot Username/Password?");
        ui->change->setEnabled(TRUE);
    }
}

void MainWindow::on_pushButton_clicked()
{

    add = new addAccount();
    add->show();
}


void MainWindow::on_change_clicked()
{
    forget = new forgot_UandP();
    forget->show();
}
