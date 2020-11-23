/********************************************************************************
** Form generated from reading UI file 'deletehike.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEHIKE_H
#define UI_DELETEHIKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteHike
{
public:
    QLabel *Label1;
    QLabel *Label2;
    QLabel *error;
    QLabel *label_2;
    QPushButton *deleteButton;
    QPushButton *cancel;
    QPushButton *consent;
    QLineEdit *typeDelete;
    QLabel *label;

    void setupUi(QDialog *deleteHike)
    {
        if (deleteHike->objectName().isEmpty())
            deleteHike->setObjectName(QString::fromUtf8("deleteHike"));
        deleteHike->resize(400, 300);
        Label1 = new QLabel(deleteHike);
        Label1->setObjectName(QString::fromUtf8("Label1"));
        Label1->setGeometry(QRect(80, 80, 221, 81));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(0, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        Label1->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Label1->setFont(font);
        Label1->setAlignment(Qt::AlignCenter);
        Label1->setWordWrap(true);
        Label2 = new QLabel(deleteHike);
        Label2->setObjectName(QString::fromUtf8("Label2"));
        Label2->setGeometry(QRect(30, 90, 161, 81));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        Label2->setFont(font1);
        Label2->setWordWrap(true);
        error = new QLabel(deleteHike);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(30, 180, 141, 16));
        label_2 = new QLabel(deleteHike);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 101, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Showcard Gothic"));
        font2.setPointSize(18);
        font2.setUnderline(false);
        label_2->setFont(font2);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        deleteButton = new QPushButton(deleteHike);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(280, 130, 93, 61));
        QFont font3;
        font3.setPointSize(10);
        deleteButton->setFont(font3);
        cancel = new QPushButton(deleteHike);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(30, 260, 93, 28));
        consent = new QPushButton(deleteHike);
        consent->setObjectName(QString::fromUtf8("consent"));
        consent->setGeometry(QRect(140, 200, 94, 28));
        typeDelete = new QLineEdit(deleteHike);
        typeDelete->setObjectName(QString::fromUtf8("typeDelete"));
        typeDelete->setGeometry(QRect(30, 200, 171, 22));
        label = new QLabel(deleteHike);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 61, 16));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Lucida Sans"));
        font4.setItalic(true);
        label->setFont(font4);

        retranslateUi(deleteHike);

        QMetaObject::connectSlotsByName(deleteHike);
    } // setupUi

    void retranslateUi(QDialog *deleteHike)
    {
        deleteHike->setWindowTitle(QCoreApplication::translate("deleteHike", "Dialog", nullptr));
        Label1->setText(QCoreApplication::translate("deleteHike", "ARE YOU SURE YOU WANT TO DELETE THIS HIKE", nullptr));
        Label2->setText(QCoreApplication::translate("deleteHike", "Please type in the word \"delete\" below to confirm.", nullptr));
        error->setText(QString());
        label_2->setText(QCoreApplication::translate("deleteHike", "H.E.L.P", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteHike", "Delete", nullptr));
        cancel->setText(QCoreApplication::translate("deleteHike", "Cancel", nullptr));
        consent->setText(QCoreApplication::translate("deleteHike", "Yes, I consent", nullptr));
        label->setText(QCoreApplication::translate("deleteHike", "Delete Hike", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteHike: public Ui_deleteHike {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEHIKE_H
