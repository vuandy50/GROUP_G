/********************************************************************************
** Form generated from reading UI file 'addhikes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDHIKES_H
#define UI_ADDHIKES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_addHikes
{
public:
    QCheckBox *both2;
    QLabel *errorMesg;
    QLineEdit *ascent;
    QLineEdit *distance;
    QLabel *title;
    QCheckBox *walking;
    QPushButton *pushButton_2;
    QLabel *label_10;
    QCheckBox *both1;
    QLineEdit *address;
    QLabel *label_2;
    QLineEdit *park;
    QLabel *label_3;
    QTimeEdit *openTime;
    QLabel *label_4;
    QCheckBox *scenic;
    QLabel *label_8;
    QLabel *label;
    QLineEdit *difficulty;
    QLabel *label_7;
    QCheckBox *training;
    QTimeEdit *closeTime;
    QLineEdit *city;
    QLabel *label_9;
    QCheckBox *biking;
    QLabel *label_13;
    QLineEdit *phoneNum;
    QLabel *label_11;
    QLabel *label_12;
    QPushButton *add;
    QLineEdit *name;
    QLineEdit *zipcode;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *elevation;
    QLabel *errorName;
    QLabel *errorPark;
    QLabel *errorDis;
    QLabel *errorDiff;
    QLabel *errorAdd;
    QLabel *errorCity;
    QLabel *errorZip;
    QLabel *errorPhone;
    QLabel *errorWB;
    QLabel *errorType;
    QLabel *errorAsc;
    QLabel *errorElev;

    void setupUi(QDialog *addHikes)
    {
        if (addHikes->objectName().isEmpty())
            addHikes->setObjectName(QString::fromUtf8("addHikes"));
        addHikes->resize(365, 450);
        both2 = new QCheckBox(addHikes);
        both2->setObjectName(QString::fromUtf8("both2"));
        both2->setGeometry(QRect(300, 330, 41, 17));
        errorMesg = new QLabel(addHikes);
        errorMesg->setObjectName(QString::fromUtf8("errorMesg"));
        errorMesg->setGeometry(QRect(140, 20, 211, 16));
        errorMesg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ascent = new QLineEdit(addHikes);
        ascent->setObjectName(QString::fromUtf8("ascent"));
        ascent->setGeometry(QRect(260, 360, 81, 20));
        distance = new QLineEdit(addHikes);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(260, 150, 81, 20));
        title = new QLabel(addHikes);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(10, 10, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        title->setFont(font);
        title->setTextFormat(Qt::RichText);
        title->setAlignment(Qt::AlignCenter);
        title->setWordWrap(false);
        walking = new QCheckBox(addHikes);
        walking->setObjectName(QString::fromUtf8("walking"));
        walking->setGeometry(QRect(150, 300, 70, 17));
        pushButton_2 = new QPushButton(addHikes);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 420, 75, 23));
        label_10 = new QLabel(addHikes);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 270, 71, 20));
        both1 = new QCheckBox(addHikes);
        both1->setObjectName(QString::fromUtf8("both1"));
        both1->setGeometry(QRect(300, 300, 41, 17));
        address = new QLineEdit(addHikes);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(140, 210, 201, 20));
        label_2 = new QLabel(addHikes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 90, 21, 21));
        park = new QLineEdit(addHikes);
        park->setObjectName(QString::fromUtf8("park"));
        park->setGeometry(QRect(140, 90, 201, 20));
        label_3 = new QLabel(addHikes);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 120, 31, 21));
        openTime = new QTimeEdit(addHikes);
        openTime->setObjectName(QString::fromUtf8("openTime"));
        openTime->setGeometry(QRect(140, 120, 71, 22));
        label_4 = new QLabel(addHikes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(110, 120, 31, 21));
        scenic = new QCheckBox(addHikes);
        scenic->setObjectName(QString::fromUtf8("scenic"));
        scenic->setGeometry(QRect(150, 330, 70, 17));
        label_8 = new QLabel(addHikes);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 240, 21, 21));
        label = new QLabel(addHikes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 71, 20));
        difficulty = new QLineEdit(addHikes);
        difficulty->setObjectName(QString::fromUtf8("difficulty"));
        difficulty->setGeometry(QRect(260, 180, 81, 20));
        label_7 = new QLabel(addHikes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(90, 210, 41, 16));
        training = new QCheckBox(addHikes);
        training->setObjectName(QString::fromUtf8("training"));
        training->setGeometry(QRect(230, 330, 70, 17));
        closeTime = new QTimeEdit(addHikes);
        closeTime->setObjectName(QString::fromUtf8("closeTime"));
        closeTime->setGeometry(QRect(270, 120, 71, 22));
        city = new QLineEdit(addHikes);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(60, 240, 121, 20));
        label_9 = new QLabel(addHikes);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 240, 41, 21));
        biking = new QCheckBox(addHikes);
        biking->setObjectName(QString::fromUtf8("biking"));
        biking->setGeometry(QRect(230, 300, 70, 17));
        label_13 = new QLabel(addHikes);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(210, 390, 51, 21));
        phoneNum = new QLineEdit(addHikes);
        phoneNum->setObjectName(QString::fromUtf8("phoneNum"));
        phoneNum->setGeometry(QRect(140, 270, 201, 20));
        label_11 = new QLabel(addHikes);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 40, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setItalic(true);
        label_11->setFont(font1);
        label_12 = new QLabel(addHikes);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(220, 360, 41, 21));
        add = new QPushButton(addHikes);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(180, 420, 75, 23));
        name = new QLineEdit(addHikes);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(140, 60, 201, 20));
        zipcode = new QLineEdit(addHikes);
        zipcode->setObjectName(QString::fromUtf8("zipcode"));
        zipcode->setGeometry(QRect(260, 240, 81, 20));
        label_5 = new QLabel(addHikes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 150, 47, 21));
        label_6 = new QLabel(addHikes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 180, 47, 21));
        elevation = new QLineEdit(addHikes);
        elevation->setObjectName(QString::fromUtf8("elevation"));
        elevation->setGeometry(QRect(260, 390, 81, 20));
        errorName = new QLabel(addHikes);
        errorName->setObjectName(QString::fromUtf8("errorName"));
        errorName->setGeometry(QRect(50, 60, 21, 20));
        errorName->setAlignment(Qt::AlignCenter);
        errorPark = new QLabel(addHikes);
        errorPark->setObjectName(QString::fromUtf8("errorPark"));
        errorPark->setGeometry(QRect(90, 90, 21, 20));
        errorPark->setAlignment(Qt::AlignCenter);
        errorDis = new QLabel(addHikes);
        errorDis->setObjectName(QString::fromUtf8("errorDis"));
        errorDis->setGeometry(QRect(190, 150, 21, 20));
        errorDis->setAlignment(Qt::AlignCenter);
        errorDiff = new QLabel(addHikes);
        errorDiff->setObjectName(QString::fromUtf8("errorDiff"));
        errorDiff->setGeometry(QRect(190, 180, 21, 20));
        errorDiff->setAlignment(Qt::AlignCenter);
        errorAdd = new QLabel(addHikes);
        errorAdd->setObjectName(QString::fromUtf8("errorAdd"));
        errorAdd->setGeometry(QRect(70, 210, 21, 16));
        errorAdd->setAlignment(Qt::AlignCenter);
        errorCity = new QLabel(addHikes);
        errorCity->setObjectName(QString::fromUtf8("errorCity"));
        errorCity->setGeometry(QRect(10, 240, 21, 20));
        errorCity->setAlignment(Qt::AlignCenter);
        errorZip = new QLabel(addHikes);
        errorZip->setObjectName(QString::fromUtf8("errorZip"));
        errorZip->setGeometry(QRect(190, 240, 21, 20));
        errorZip->setAlignment(Qt::AlignCenter);
        errorPhone = new QLabel(addHikes);
        errorPhone->setObjectName(QString::fromUtf8("errorPhone"));
        errorPhone->setGeometry(QRect(40, 270, 21, 20));
        errorPhone->setAlignment(Qt::AlignCenter);
        errorWB = new QLabel(addHikes);
        errorWB->setObjectName(QString::fromUtf8("errorWB"));
        errorWB->setGeometry(QRect(130, 300, 21, 16));
        errorWB->setAlignment(Qt::AlignCenter);
        errorType = new QLabel(addHikes);
        errorType->setObjectName(QString::fromUtf8("errorType"));
        errorType->setGeometry(QRect(130, 330, 21, 16));
        errorType->setAlignment(Qt::AlignCenter);
        errorAsc = new QLabel(addHikes);
        errorAsc->setObjectName(QString::fromUtf8("errorAsc"));
        errorAsc->setGeometry(QRect(200, 360, 21, 20));
        errorAsc->setAlignment(Qt::AlignCenter);
        errorElev = new QLabel(addHikes);
        errorElev->setObjectName(QString::fromUtf8("errorElev"));
        errorElev->setGeometry(QRect(190, 390, 21, 20));
        errorElev->setAlignment(Qt::AlignCenter);

        retranslateUi(addHikes);

        QMetaObject::connectSlotsByName(addHikes);
    } // setupUi

    void retranslateUi(QDialog *addHikes)
    {
        addHikes->setWindowTitle(QCoreApplication::translate("addHikes", "Dialog", nullptr));
        both2->setText(QCoreApplication::translate("addHikes", "Both", nullptr));
        errorMesg->setText(QString());
        title->setText(QCoreApplication::translate("addHikes", "H.E.L.P", nullptr));
        walking->setText(QCoreApplication::translate("addHikes", "Walking", nullptr));
        pushButton_2->setText(QCoreApplication::translate("addHikes", "Cancel", nullptr));
        label_10->setText(QCoreApplication::translate("addHikes", "Phone Number", nullptr));
        both1->setText(QCoreApplication::translate("addHikes", "Both", nullptr));
        label_2->setText(QCoreApplication::translate("addHikes", "Park", nullptr));
        label_3->setText(QCoreApplication::translate("addHikes", "Close", nullptr));
        label_4->setText(QCoreApplication::translate("addHikes", "Open", nullptr));
        scenic->setText(QCoreApplication::translate("addHikes", "Scenic", nullptr));
        label_8->setText(QCoreApplication::translate("addHikes", "City", nullptr));
        label->setText(QCoreApplication::translate("addHikes", "Name of Trail", nullptr));
        label_7->setText(QCoreApplication::translate("addHikes", "Address", nullptr));
        training->setText(QCoreApplication::translate("addHikes", "Training", nullptr));
        label_9->setText(QCoreApplication::translate("addHikes", "Zip Code", nullptr));
        biking->setText(QCoreApplication::translate("addHikes", "Biking", nullptr));
        label_13->setText(QCoreApplication::translate("addHikes", "Elevation", nullptr));
        label_11->setText(QCoreApplication::translate("addHikes", "Add Hike", nullptr));
        label_12->setText(QCoreApplication::translate("addHikes", "Ascent", nullptr));
        add->setText(QCoreApplication::translate("addHikes", "Add", nullptr));
        label_5->setText(QCoreApplication::translate("addHikes", "Distance", nullptr));
        label_6->setText(QCoreApplication::translate("addHikes", "Difficulty", nullptr));
        errorName->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorPark->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorDis->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorDiff->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorAdd->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorCity->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorZip->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorPhone->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorWB->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorType->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorAsc->setText(QCoreApplication::translate("addHikes", "*", nullptr));
        errorElev->setText(QCoreApplication::translate("addHikes", "*", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addHikes: public Ui_addHikes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDHIKES_H
