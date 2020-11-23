/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLabel *label;
    QPushButton *add;
    QPushButton *edit;
    QPushButton *delete_2;
    QLineEdit *hike;
    QPushButton *search;
    QTableView *table;
    QPushButton *refresh;
    QLabel *error;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminWindow)
    {
        if (adminWindow->objectName().isEmpty())
            adminWindow->setObjectName(QString::fromUtf8("adminWindow"));
        adminWindow->resize(694, 292);
        centralwidget = new QWidget(adminWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 91, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setItalic(true);
        label->setFont(font1);
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(590, 100, 75, 23));
        edit = new QPushButton(centralwidget);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setGeometry(QRect(590, 140, 75, 23));
        delete_2 = new QPushButton(centralwidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(590, 180, 75, 23));
        hike = new QLineEdit(centralwidget);
        hike->setObjectName(QString::fromUtf8("hike"));
        hike->setGeometry(QRect(120, 30, 231, 21));
        search = new QPushButton(centralwidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(360, 30, 75, 21));
        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(20, 70, 541, 201));
        table->setEditTriggers(QAbstractItemView::AllEditTriggers);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        refresh = new QPushButton(centralwidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        refresh->setGeometry(QRect(590, 250, 75, 23));
        error = new QLabel(centralwidget);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(450, 30, 231, 21));
        error->setAlignment(Qt::AlignCenter);
        adminWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(adminWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        adminWindow->setStatusBar(statusbar);

        retranslateUi(adminWindow);

        QMetaObject::connectSlotsByName(adminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminWindow)
    {
        adminWindow->setWindowTitle(QCoreApplication::translate("adminWindow", "Admin", nullptr));
        label_2->setText(QCoreApplication::translate("adminWindow", "H.E.L.P", nullptr));
        label->setText(QCoreApplication::translate("adminWindow", "Welcome Admin", nullptr));
        add->setText(QCoreApplication::translate("adminWindow", "Add", nullptr));
        edit->setText(QCoreApplication::translate("adminWindow", "Edit", nullptr));
        delete_2->setText(QCoreApplication::translate("adminWindow", "Delete", nullptr));
        hike->setText(QString());
        search->setText(QCoreApplication::translate("adminWindow", "Search", nullptr));
        refresh->setText(QCoreApplication::translate("adminWindow", "Refresh", nullptr));
        error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminWindow: public Ui_adminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
