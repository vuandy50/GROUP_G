/********************************************************************************
** Form generated from reading UI file 'edithikes.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITHIKES_H
#define UI_EDITHIKES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_editHikes
{
public:
    QLabel *title;
    QLineEdit *name;
    QLineEdit *park;
    QLineEdit *distance;
    QLineEdit *difficulty;
    QLineEdit *address;
    QLineEdit *city;
    QLineEdit *zipcode;
    QLineEdit *phoneNum;
    QPushButton *edit;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QTimeEdit *openTime;
    QTimeEdit *closeTime;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QCheckBox *walking;
    QCheckBox *biking;
    QCheckBox *both1;
    QCheckBox *scenic;
    QCheckBox *both2;
    QCheckBox *training;
    QLabel *label_11;
    QLabel *errorMesg;
    QLineEdit *ascent;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *elevation;
    QPushButton *changePic;
    QLabel *pic;

    void setupUi(QDialog *editHikes)
    {
        if (editHikes->objectName().isEmpty())
            editHikes->setObjectName(QString::fromUtf8("editHikes"));
        editHikes->resize(630, 374);
        title = new QLabel(editHikes);
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
        name = new QLineEdit(editHikes);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(100, 60, 201, 20));
        park = new QLineEdit(editHikes);
        park->setObjectName(QString::fromUtf8("park"));
        park->setGeometry(QRect(400, 70, 201, 20));
        distance = new QLineEdit(editHikes);
        distance->setObjectName(QString::fromUtf8("distance"));
        distance->setGeometry(QRect(380, 280, 81, 20));
        difficulty = new QLineEdit(editHikes);
        difficulty->setObjectName(QString::fromUtf8("difficulty"));
        difficulty->setGeometry(QRect(380, 310, 81, 20));
        address = new QLineEdit(editHikes);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(400, 100, 201, 20));
        city = new QLineEdit(editHikes);
        city->setObjectName(QString::fromUtf8("city"));
        city->setGeometry(QRect(480, 130, 121, 20));
        zipcode = new QLineEdit(editHikes);
        zipcode->setObjectName(QString::fromUtf8("zipcode"));
        zipcode->setGeometry(QRect(520, 160, 81, 20));
        phoneNum = new QLineEdit(editHikes);
        phoneNum->setObjectName(QString::fromUtf8("phoneNum"));
        phoneNum->setGeometry(QRect(400, 190, 201, 20));
        edit = new QPushButton(editHikes);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setGeometry(QRect(440, 340, 75, 23));
        pushButton_2 = new QPushButton(editHikes);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(530, 340, 75, 23));
        label = new QLabel(editHikes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 71, 20));
        label_2 = new QLabel(editHikes);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(370, 70, 21, 21));
        openTime = new QTimeEdit(editHikes);
        openTime->setObjectName(QString::fromUtf8("openTime"));
        openTime->setGeometry(QRect(400, 40, 71, 22));
        closeTime = new QTimeEdit(editHikes);
        closeTime->setObjectName(QString::fromUtf8("closeTime"));
        closeTime->setGeometry(QRect(530, 40, 71, 22));
        label_3 = new QLabel(editHikes);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 40, 31, 21));
        label_4 = new QLabel(editHikes);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(370, 40, 31, 21));
        label_5 = new QLabel(editHikes);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 280, 47, 21));
        label_6 = new QLabel(editHikes);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 310, 47, 21));
        label_7 = new QLabel(editHikes);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(350, 100, 41, 16));
        label_8 = new QLabel(editHikes);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(450, 130, 21, 21));
        label_9 = new QLabel(editHikes);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(470, 160, 41, 21));
        label_10 = new QLabel(editHikes);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(320, 190, 71, 20));
        walking = new QCheckBox(editHikes);
        walking->setObjectName(QString::fromUtf8("walking"));
        walking->setGeometry(QRect(410, 220, 70, 17));
        biking = new QCheckBox(editHikes);
        biking->setObjectName(QString::fromUtf8("biking"));
        biking->setGeometry(QRect(490, 220, 70, 17));
        both1 = new QCheckBox(editHikes);
        both1->setObjectName(QString::fromUtf8("both1"));
        both1->setGeometry(QRect(560, 220, 41, 17));
        scenic = new QCheckBox(editHikes);
        scenic->setObjectName(QString::fromUtf8("scenic"));
        scenic->setGeometry(QRect(410, 250, 70, 17));
        both2 = new QCheckBox(editHikes);
        both2->setObjectName(QString::fromUtf8("both2"));
        both2->setGeometry(QRect(560, 250, 41, 17));
        training = new QCheckBox(editHikes);
        training->setObjectName(QString::fromUtf8("training"));
        training->setGeometry(QRect(490, 250, 70, 17));
        label_11 = new QLabel(editHikes);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 40, 61, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setItalic(true);
        label_11->setFont(font1);
        errorMesg = new QLabel(editHikes);
        errorMesg->setObjectName(QString::fromUtf8("errorMesg"));
        errorMesg->setGeometry(QRect(350, 40, 211, 16));
        errorMesg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ascent = new QLineEdit(editHikes);
        ascent->setObjectName(QString::fromUtf8("ascent"));
        ascent->setGeometry(QRect(520, 280, 81, 20));
        label_12 = new QLabel(editHikes);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(480, 280, 41, 21));
        label_13 = new QLabel(editHikes);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(470, 310, 51, 21));
        elevation = new QLineEdit(editHikes);
        elevation->setObjectName(QString::fromUtf8("elevation"));
        elevation->setGeometry(QRect(520, 310, 81, 20));
        changePic = new QPushButton(editHikes);
        changePic->setObjectName(QString::fromUtf8("changePic"));
        changePic->setGeometry(QRect(30, 310, 271, 23));
        pic = new QLabel(editHikes);
        pic->setObjectName(QString::fromUtf8("pic"));
        pic->setGeometry(QRect(30, 90, 271, 211));

        retranslateUi(editHikes);

        QMetaObject::connectSlotsByName(editHikes);
    } // setupUi

    void retranslateUi(QDialog *editHikes)
    {
        editHikes->setWindowTitle(QCoreApplication::translate("editHikes", "Dialog", nullptr));
        title->setText(QCoreApplication::translate("editHikes", "H.E.L.P", nullptr));
        edit->setText(QCoreApplication::translate("editHikes", "Edit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("editHikes", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("editHikes", "Name of Trail", nullptr));
        label_2->setText(QCoreApplication::translate("editHikes", "Park", nullptr));
        label_3->setText(QCoreApplication::translate("editHikes", "Close", nullptr));
        label_4->setText(QCoreApplication::translate("editHikes", "Open", nullptr));
        label_5->setText(QCoreApplication::translate("editHikes", "Distance", nullptr));
        label_6->setText(QCoreApplication::translate("editHikes", "Difficulty", nullptr));
        label_7->setText(QCoreApplication::translate("editHikes", "Address", nullptr));
        label_8->setText(QCoreApplication::translate("editHikes", "City", nullptr));
        label_9->setText(QCoreApplication::translate("editHikes", "Zip Code", nullptr));
        label_10->setText(QCoreApplication::translate("editHikes", "Phone Number", nullptr));
        walking->setText(QCoreApplication::translate("editHikes", "Walking", nullptr));
        biking->setText(QCoreApplication::translate("editHikes", "Biking", nullptr));
        both1->setText(QCoreApplication::translate("editHikes", "Both", nullptr));
        scenic->setText(QCoreApplication::translate("editHikes", "Scenic", nullptr));
        both2->setText(QCoreApplication::translate("editHikes", "Both", nullptr));
        training->setText(QCoreApplication::translate("editHikes", "Training", nullptr));
        label_11->setText(QCoreApplication::translate("editHikes", "Edit Hike", nullptr));
        errorMesg->setText(QString());
        label_12->setText(QCoreApplication::translate("editHikes", "Ascent", nullptr));
        label_13->setText(QCoreApplication::translate("editHikes", "Elevation", nullptr));
        changePic->setText(QCoreApplication::translate("editHikes", "Change", nullptr));
        pic->setText(QCoreApplication::translate("editHikes", "pic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editHikes: public Ui_editHikes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITHIKES_H
