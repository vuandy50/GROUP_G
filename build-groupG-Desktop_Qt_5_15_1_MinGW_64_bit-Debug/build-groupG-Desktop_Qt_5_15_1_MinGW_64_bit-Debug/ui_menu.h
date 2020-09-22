/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonName;
    QPushButton *buttonDistance;
    QPushButton *buttonDifficulty;
    QTableWidget *table;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(800, 600);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(330, 30, 451, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonName = new QPushButton(layoutWidget);
        buttonName->setObjectName(QString::fromUtf8("buttonName"));

        horizontalLayout->addWidget(buttonName);

        buttonDistance = new QPushButton(layoutWidget);
        buttonDistance->setObjectName(QString::fromUtf8("buttonDistance"));

        horizontalLayout->addWidget(buttonDistance);

        buttonDifficulty = new QPushButton(layoutWidget);
        buttonDifficulty->setObjectName(QString::fromUtf8("buttonDifficulty"));

        horizontalLayout->addWidget(buttonDifficulty);

        table = new QTableWidget(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(250, 60, 531, 481));
        table->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"background-color:#000000\n"
"alternate-background-color:#C0C0C0\n"
"selection-background-color:#282828\n"
"}"));
        table->setEditTriggers(QAbstractItemView::SelectedClicked);
        table->setAlternatingRowColors(true);
        table->horizontalHeader()->setStretchLastSection(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 32, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu->setMenuBar(menubar);
        statusbar = new QStatusBar(menu);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu->setStatusBar(statusbar);

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QMainWindow *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Menu", nullptr));
        label->setText(QCoreApplication::translate("menu", "H.E.L.P", nullptr));
        buttonName->setText(QCoreApplication::translate("menu", "Name", nullptr));
        buttonDistance->setText(QCoreApplication::translate("menu", "Distance", nullptr));
        buttonDifficulty->setText(QCoreApplication::translate("menu", "Difficulty", nullptr));
        label_2->setText(QCoreApplication::translate("menu", "Sort By:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
