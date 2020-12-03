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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QSlider *Distance;
    QSlider *Difficulty;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_14;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *tracker;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(709, 576);
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
        layoutWidget->setGeometry(QRect(330, 30, 341, 30));
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
        table->setGeometry(QRect(240, 60, 421, 441));
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
        label_2->setGeometry(QRect(250, 32, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        buttonAccount = new QPushButton(centralwidget);
        buttonAccount->setObjectName(QString::fromUtf8("buttonAccount"));
        buttonAccount->setGeometry(QRect(10, 500, 121, 28));
        savedHikesButton = new QPushButton(centralwidget);
        savedHikesButton->setObjectName(QString::fromUtf8("savedHikesButton"));
        savedHikesButton->setGeometry(QRect(10, 460, 121, 28));
        refreshButton = new QPushButton(centralwidget);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(140, 460, 93, 28));
        listView = new QListView(centralwidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(10, 100, 231, 161));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 110, 61, 16));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 80, 51, 16));
        QFont font3;
        font3.setPointSize(15);
        label_6->setFont(font3);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 150, 21, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(110, 150, 16, 16));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(140, 150, 16, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(170, 150, 16, 16));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 150, 16, 16));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(100, 180, 61, 16));
        label_11->setFont(font2);
        Distance = new QSlider(centralwidget);
        Distance->setObjectName(QString::fromUtf8("Distance"));
        Distance->setGeometry(QRect(20, 200, 211, 22));
        Distance->setSizeIncrement(QSize(0, 0));
        Distance->setMaximum(15);
        Distance->setPageStep(1);
        Distance->setOrientation(Qt::Horizontal);
        Distance->setTickPosition(QSlider::TicksBelow);
        Distance->setTickInterval(1);
        Difficulty = new QSlider(centralwidget);
        Difficulty->setObjectName(QString::fromUtf8("Difficulty"));
        Difficulty->setGeometry(QRect(50, 130, 160, 22));
        Difficulty->setMaximum(5);
        Difficulty->setPageStep(1);
        Difficulty->setValue(0);
        Difficulty->setOrientation(Qt::Horizontal);
        Difficulty->setTickPosition(QSlider::TicksBelow);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(50, 150, 21, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 220, 16, 16));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(90, 220, 16, 16));
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(220, 220, 16, 16));
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(150, 220, 47, 13));
        tracker = new QPushButton(centralwidget);
        tracker->setObjectName(QString::fromUtf8("tracker"));
        tracker->setGeometry(QRect(10, 270, 221, 181));
        menu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(menu);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 709, 21));
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
        label_3->setText(QCoreApplication::translate("menu", "Difficulty", nullptr));
        label_6->setText(QCoreApplication::translate("menu", "Filter", nullptr));
        label_4->setText(QCoreApplication::translate("menu", "1", nullptr));
        label_7->setText(QCoreApplication::translate("menu", "2", nullptr));
        label_8->setText(QCoreApplication::translate("menu", "3", nullptr));
        label_9->setText(QCoreApplication::translate("menu", "4", nullptr));
        label_10->setText(QCoreApplication::translate("menu", "5", nullptr));
        label_11->setText(QCoreApplication::translate("menu", "Distance", nullptr));
        label_12->setText(QCoreApplication::translate("menu", "0", nullptr));
        label_5->setText(QCoreApplication::translate("menu", "0", nullptr));
        label_14->setText(QCoreApplication::translate("menu", "5", nullptr));
        label_22->setText(QCoreApplication::translate("menu", "15", nullptr));
        label_23->setText(QCoreApplication::translate("menu", "10", nullptr));
        tracker->setText(QCoreApplication::translate("menu", "TRACKER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
