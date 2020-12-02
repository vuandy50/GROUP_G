/********************************************************************************
** Form generated from reading UI file 'tracker.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRACKER_H
#define UI_TRACKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_tracker
{
public:
    QLabel *label;
    QLabel *timer;
    QLabel *label_3;
    QLabel *distance;
    QLabel *label_4;
    QLabel *speed;
    QLabel *label_5;
    QLabel *calories;
    QLabel *label_6;
    QPushButton *stop;
    QPushButton *resume;
    QLabel *notify;
    QPushButton *pause;
    QPushButton *returnTo;

    void setupUi(QDialog *tracker)
    {
        if (tracker->objectName().isEmpty())
            tracker->setObjectName(QString::fromUtf8("tracker"));
        tracker->resize(400, 331);
        label = new QLabel(tracker);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 10, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label->setFont(font);
        label->setTextFormat(Qt::RichText);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        timer = new QLabel(tracker);
        timer->setObjectName(QString::fromUtf8("timer"));
        timer->setGeometry(QRect(120, 90, 161, 41));
        timer->setFrameShape(QFrame::Box);
        timer->setFrameShadow(QFrame::Raised);
        timer->setLineWidth(1);
        timer->setMidLineWidth(3);
        timer->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(tracker);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(120, 130, 161, 20));
        label_3->setAlignment(Qt::AlignCenter);
        distance = new QLabel(tracker);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(20, 160, 161, 41));
        distance->setFrameShape(QFrame::Box);
        distance->setFrameShadow(QFrame::Raised);
        distance->setLineWidth(1);
        distance->setMidLineWidth(3);
        distance->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tracker);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 200, 161, 16));
        label_4->setAlignment(Qt::AlignCenter);
        speed = new QLabel(tracker);
        speed->setObjectName(QString::fromUtf8("speed"));
        speed->setGeometry(QRect(220, 160, 161, 41));
        speed->setFrameShape(QFrame::Box);
        speed->setFrameShadow(QFrame::Raised);
        speed->setLineWidth(1);
        speed->setMidLineWidth(3);
        speed->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(tracker);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 200, 161, 16));
        label_5->setAlignment(Qt::AlignCenter);
        calories = new QLabel(tracker);
        calories->setObjectName(QString::fromUtf8("calories"));
        calories->setGeometry(QRect(120, 230, 161, 41));
        calories->setFrameShape(QFrame::Box);
        calories->setFrameShadow(QFrame::Raised);
        calories->setLineWidth(1);
        calories->setMidLineWidth(3);
        calories->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tracker);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 270, 161, 16));
        label_6->setAlignment(Qt::AlignCenter);
        stop = new QPushButton(tracker);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setEnabled(true);
        stop->setGeometry(QRect(20, 292, 171, 31));
        resume = new QPushButton(tracker);
        resume->setObjectName(QString::fromUtf8("resume"));
        resume->setEnabled(true);
        resume->setGeometry(QRect(210, 292, 171, 31));
        notify = new QLabel(tracker);
        notify->setObjectName(QString::fromUtf8("notify"));
        notify->setGeometry(QRect(46, 60, 311, 20));
        notify->setAlignment(Qt::AlignCenter);
        pause = new QPushButton(tracker);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(24, 292, 351, 31));
        returnTo = new QPushButton(tracker);
        returnTo->setObjectName(QString::fromUtf8("returnTo"));
        returnTo->setGeometry(QRect(20, 50, 361, 31));

        retranslateUi(tracker);

        QMetaObject::connectSlotsByName(tracker);
    } // setupUi

    void retranslateUi(QDialog *tracker)
    {
        tracker->setWindowTitle(QCoreApplication::translate("tracker", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("tracker", "H.E.L.P", nullptr));
        timer->setText(QCoreApplication::translate("tracker", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">MIN:SEC</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("tracker", "--------------- MIN : SEC --------------", nullptr));
        distance->setText(QCoreApplication::translate("tracker", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">DISTANCE</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("tracker", "--------------- MILES ---------------", nullptr));
        speed->setText(QCoreApplication::translate("tracker", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">AVG SPEED</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("tracker", "---------------- MIN/MIL ---------------", nullptr));
        calories->setText(QCoreApplication::translate("tracker", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">CALORIES</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("tracker", "----------------- KCAL -----------------", nullptr));
        stop->setText(QCoreApplication::translate("tracker", "STOP", nullptr));
        resume->setText(QCoreApplication::translate("tracker", "RESUME", nullptr));
        notify->setText(QString());
        pause->setText(QCoreApplication::translate("tracker", "PAUSE", nullptr));
        returnTo->setText(QCoreApplication::translate("tracker", "RETURN TO MAIN MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tracker: public Ui_tracker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRACKER_H
