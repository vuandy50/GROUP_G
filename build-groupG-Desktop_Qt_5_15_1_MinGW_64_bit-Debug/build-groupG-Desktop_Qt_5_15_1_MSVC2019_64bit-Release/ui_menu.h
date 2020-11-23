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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
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
    QTableView *table;
    QLabel *label_2;
    QPushButton *buttonAccount;
    QPushButton *savedHikesButton;
    QPushButton *refreshButton;
    QListView *listView;
    QCheckBox *checkBox_1;
    QLabel *label_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QLabel *label_4;
    QCheckBox *checkBox;
    QCheckBox *Teusday;
    QCheckBox *Wedsnesday;
    QCheckBox *Thursday;
    QCheckBox *Friday;
    QCheckBox *Saturday;
    QCheckBox *checkBox_16;
    QLabel *label_5;
    QCheckBox *Walking;
    QCheckBox *Biking;
    QLabel *label_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(817, 638);
        centralwidget = new QWidget(menu);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 111, 41));
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
        layoutWidget->setGeometry(QRect(340, 58, 441, 30));
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

        table = new QTableView(centralwidget);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(260, 90, 521, 471));
        table->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"background-color:#000000\n"
"alternate-background-color:#C0C0C0\n"
"selection-background-color:#282828\n"
"}"));
        table->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        table->setAutoScrollMargin(16);
        table->setEditTriggers(QAbstractItemView::SelectedClicked);
        table->setAlternatingRowColors(true);
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        table->setSelectionBehavior(QAbstractItemView::SelectRows);
        table->verticalHeader()->setCascadingSectionResizes(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 60, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        buttonAccount = new QPushButton(centralwidget);
        buttonAccount->setObjectName(QString::fromUtf8("buttonAccount"));
        buttonAccount->setGeometry(QRect(20, 530, 121, 28));
        savedHikesButton = new QPushButton(centralwidget);
        savedHikesButton->setObjectName(QString::fromUtf8("savedHikesButton"));
        savedHikesButton->setGeometry(QRect(20, 490, 121, 28));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(150, 490, 93, 28));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(20, 90, 221, 331));
        checkBox_1 = new QCheckBox(centralwidget);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(40, 120, 70, 17));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 100, 61, 16));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(40, 140, 70, 17));
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(40, 160, 70, 17));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(40, 180, 70, 17));
        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(40, 200, 70, 17));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(80, 120, 70, 17));
        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(80, 140, 70, 17));
        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(80, 160, 70, 17));
        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(80, 180, 70, 17));
        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(80, 200, 70, 17));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 240, 71, 16));
        label_4->setFont(font2);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(30, 260, 70, 17));
        Teusday = new QCheckBox(centralwidget);
        Teusday->setObjectName(QString::fromUtf8("Teusday"));
        Teusday->setGeometry(QRect(30, 280, 70, 17));
        Wedsnesday = new QCheckBox(centralwidget);
        Wedsnesday->setObjectName(QString::fromUtf8("Wedsnesday"));
        Wedsnesday->setGeometry(QRect(30, 300, 81, 17));
        Thursday = new QCheckBox(centralwidget);
        Thursday->setObjectName(QString::fromUtf8("Thursday"));
        Thursday->setGeometry(QRect(30, 320, 70, 17));
        Friday = new QCheckBox(centralwidget);
        Friday->setObjectName(QString::fromUtf8("Friday"));
        Friday->setGeometry(QRect(110, 260, 70, 17));
        Saturday = new QCheckBox(centralwidget);
        Saturday->setObjectName(QString::fromUtf8("Saturday"));
        Saturday->setGeometry(QRect(110, 280, 70, 17));
        checkBox_16 = new QCheckBox(centralwidget);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));
        checkBox_16->setGeometry(QRect(110, 300, 70, 17));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 343, 81, 20));
        label_5->setFont(font2);
        Walking = new QCheckBox(centralwidget);
        Walking->setObjectName(QString::fromUtf8("Walking"));
        Walking->setGeometry(QRect(30, 370, 70, 17));
        Biking = new QCheckBox(centralwidget);
        Biking->setObjectName(QString::fromUtf8("Biking"));
        Biking->setGeometry(QRect(30, 390, 70, 17));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 70, 51, 16));
        QFont font3;
        font3.setPointSize(15);
        label_6->setFont(font3);
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 817, 26));
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
        buttonAccount->setText(QCoreApplication::translate("menu", "Account Settings", nullptr));
        savedHikesButton->setText(QCoreApplication::translate("menu", "Saved Hikes", nullptr));
        refreshButton->setText(QCoreApplication::translate("menu", "Refresh Table", nullptr));
        checkBox_1->setText(QCoreApplication::translate("menu", "1", nullptr));
        label_3->setText(QCoreApplication::translate("menu", "Difficulty", nullptr));
        checkBox_2->setText(QCoreApplication::translate("menu", "2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("menu", "3", nullptr));
        checkBox_4->setText(QCoreApplication::translate("menu", "4", nullptr));
        checkBox_5->setText(QCoreApplication::translate("menu", "5", nullptr));
        checkBox_6->setText(QCoreApplication::translate("menu", "6", nullptr));
        checkBox_7->setText(QCoreApplication::translate("menu", "7", nullptr));
        checkBox_8->setText(QCoreApplication::translate("menu", "8", nullptr));
        checkBox_9->setText(QCoreApplication::translate("menu", "9", nullptr));
        checkBox_10->setText(QCoreApplication::translate("menu", "10", nullptr));
        label_4->setText(QCoreApplication::translate("menu", "Days Open", nullptr));
        checkBox->setText(QCoreApplication::translate("menu", "Monday", nullptr));
        Teusday->setText(QCoreApplication::translate("menu", "Teusday", nullptr));
        Wedsnesday->setText(QCoreApplication::translate("menu", "Wednesday", nullptr));
        Thursday->setText(QCoreApplication::translate("menu", "Thursday", nullptr));
        Friday->setText(QCoreApplication::translate("menu", "Friday", nullptr));
        Saturday->setText(QCoreApplication::translate("menu", "Saturday", nullptr));
        checkBox_16->setText(QCoreApplication::translate("menu", "Sunday", nullptr));
        label_5->setText(QCoreApplication::translate("menu", "Type of Hike", nullptr));
        Walking->setText(QCoreApplication::translate("menu", "Walking", nullptr));
        Biking->setText(QCoreApplication::translate("menu", "Biking", nullptr));
        label_6->setText(QCoreApplication::translate("menu", "Filter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
