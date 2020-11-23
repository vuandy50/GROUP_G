#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "menu.h"
#include "ui_menu.h"
#include "addaccount.h"
#include "ui_addaccount.h"
#include "logindb.h"
#include "forgot_uandp.h"
#include "adminwindow.h"
#include "gmap.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_clicked();

    void on_pushButton_clicked();

    void on_change_clicked();

private:
    Ui::MainWindow *ui;
    DB myDB;
    menu *menu;
    addAccount *add;
    forgot_UandP *forget;
    loginDB *login;
    adminWindow *admin;
    gmap *mapper;
};
#endif // MAINWINDOW_H
