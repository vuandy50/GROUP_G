/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *login;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *change;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(370, 280);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        username = new QLineEdit(centralwidget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(90, 90, 191, 20));
        password = new QLineEdit(centralwidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(90, 120, 191, 20));
        password->setEchoMode(QLineEdit::Password);
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(140, 170, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 40, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 90, 61, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 120, 61, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 220, 141, 23));
        change = new QPushButton(centralwidget);
        change->setObjectName(QString::fromUtf8("change"));
        change->setEnabled(false);
        change->setGeometry(QRect(90, 140, 191, 23));
        change->setAutoDefault(false);
        change->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        change->raise();
        username->raise();
        password->raise();
        login->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        pushButton->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        change->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Login", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "H.E.L.P", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Create New Account", nullptr));
        change->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
