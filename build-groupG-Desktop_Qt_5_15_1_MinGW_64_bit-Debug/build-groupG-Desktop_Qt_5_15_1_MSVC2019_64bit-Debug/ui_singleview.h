/********************************************************************************
** Form generated from reading UI file 'singleview.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SINGLEVIEW_H
#define UI_SINGLEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_singleView
{
public:
    QLabel *pic;
    QLabel *label_2;
    QLabel *name;
    QLabel *park;
    QLabel *address;
    QLabel *phone;
    QLabel *hours;
    QLabel *difficulty;
    QPushButton *cancel;
    QLabel *ascent;
    QLabel *elevation;
    QLabel *wob;
    QLabel *trail;
    QLabel *distance;
    QCheckBox *saveCheckBox;

    void setupUi(QDialog *singleView)
    {
        if (singleView->objectName().isEmpty())
            singleView->setObjectName(QString::fromUtf8("singleView"));
        singleView->resize(817, 638);
        pic = new QLabel(singleView);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setGeometry(QRect(360, 20, 411, 311));
        label_2 = new QLabel(singleView);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        name = new QLabel(singleView);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(30, 100, 291, 51));
        QFont font1;
        font1.setPointSize(12);
        name->setFont(font1);
        name->setWordWrap(true);
        park = new QLabel(singleView);
        park->setObjectName(QString::fromUtf8("park"));
        park->setGeometry(QRect(30, 170, 311, 51));
        QFont font2;
        font2.setPointSize(10);
        park->setFont(font2);
        park->setWordWrap(true);
        address = new QLabel(singleView);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(30, 240, 191, 51));
        address->setWordWrap(true);
        phone = new QLabel(singleView);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(30, 320, 211, 21));
        phone->setWordWrap(true);
        hours = new QLabel(singleView);
        hours->setObjectName(QString::fromUtf8("hours"));
        hours->setGeometry(QRect(30, 350, 231, 21));
        hours->setWordWrap(true);
        difficulty = new QLabel(singleView);
        difficulty->setObjectName(QString::fromUtf8("difficulty"));
        difficulty->setGeometry(QRect(450, 340, 311, 51));
        difficulty->setWordWrap(true);
        cancel = new QPushButton(singleView);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(680, 550, 93, 28));
        ascent = new QLabel(singleView);
        ascent->setObjectName(QString::fromUtf8("ascent"));
        ascent->setGeometry(QRect(70, 380, 161, 16));
        ascent->setWordWrap(true);
        elevation = new QLabel(singleView);
        elevation->setObjectName(QString::fromUtf8("elevation"));
        elevation->setGeometry(QRect(70, 410, 161, 16));
        elevation->setWordWrap(true);
        wob = new QLabel(singleView);
        wob->setObjectName(QString::fromUtf8("wob"));
        wob->setGeometry(QRect(450, 455, 331, 31));
        wob->setWordWrap(true);
        trail = new QLabel(singleView);
        trail->setObjectName(QString::fromUtf8("trail"));
        trail->setGeometry(QRect(450, 490, 211, 31));
        trail->setWordWrap(true);
        distance = new QLabel(singleView);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(450, 410, 331, 31));
        distance->setWordWrap(true);
        saveCheckBox = new QCheckBox(singleView);
        saveCheckBox->setObjectName(QString::fromUtf8("saveCheckBox"));
        saveCheckBox->setGeometry(QRect(680, 510, 91, 20));

        retranslateUi(singleView);

        QMetaObject::connectSlotsByName(singleView);
    } // setupUi

    void retranslateUi(QDialog *singleView)
    {
        singleView->setWindowTitle(QCoreApplication::translate("singleView", "Dialog", nullptr));
        pic->setText(QCoreApplication::translate("singleView", "pic", nullptr));
        label_2->setText(QCoreApplication::translate("singleView", "H.E.L.P", nullptr));
        name->setText(QCoreApplication::translate("singleView", "Name", nullptr));
        park->setText(QCoreApplication::translate("singleView", "Park", nullptr));
        address->setText(QCoreApplication::translate("singleView", "address", nullptr));
        phone->setText(QCoreApplication::translate("singleView", "PHONE NUM", nullptr));
        hours->setText(QCoreApplication::translate("singleView", "hours", nullptr));
        difficulty->setText(QCoreApplication::translate("singleView", "difficulty", nullptr));
        cancel->setText(QCoreApplication::translate("singleView", "Go Back", nullptr));
        ascent->setText(QCoreApplication::translate("singleView", "Ascent", nullptr));
        elevation->setText(QCoreApplication::translate("singleView", "Elevation", nullptr));
        wob->setText(QCoreApplication::translate("singleView", "wob", nullptr));
        trail->setText(QCoreApplication::translate("singleView", "trailType", nullptr));
        distance->setText(QCoreApplication::translate("singleView", "distance", nullptr));
        saveCheckBox->setText(QCoreApplication::translate("singleView", "Save Trail", nullptr));
    } // retranslateUi

};

namespace Ui {
    class singleView: public Ui_singleView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SINGLEVIEW_H
