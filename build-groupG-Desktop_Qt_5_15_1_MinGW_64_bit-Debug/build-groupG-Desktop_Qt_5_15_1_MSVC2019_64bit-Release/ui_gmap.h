/********************************************************************************
** Form generated from reading UI file 'gmap.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GMAP_H
#define UI_GMAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gmap
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gmap)
    {
        if (gmap->objectName().isEmpty())
            gmap->setObjectName(QString::fromUtf8("gmap"));
        gmap->resize(800, 600);
        menubar = new QMenuBar(gmap);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        gmap->setMenuBar(menubar);
        centralwidget = new QWidget(gmap);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gmap->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(gmap);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        gmap->setStatusBar(statusbar);

        retranslateUi(gmap);

        QMetaObject::connectSlotsByName(gmap);
    } // setupUi

    void retranslateUi(QMainWindow *gmap)
    {
        gmap->setWindowTitle(QCoreApplication::translate("gmap", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gmap: public Ui_gmap {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GMAP_H
