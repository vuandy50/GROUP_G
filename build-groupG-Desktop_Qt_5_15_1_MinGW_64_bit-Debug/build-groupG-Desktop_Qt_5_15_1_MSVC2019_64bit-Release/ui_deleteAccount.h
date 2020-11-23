/********************************************************************************
** Form generated from reading UI file 'deleteAccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEACCOUNT_H
#define UI_DELETEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteAccount
{
public:
    QPushButton *consent;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QPushButton *deleteButton;
    QPushButton *cancel;
    QLabel *label_4;

    void setupUi(QDialog *deleteAccount)
    {
        if (deleteAccount->objectName().isEmpty())
            deleteAccount->setObjectName(QString::fromUtf8("deleteAccount"));
        deleteAccount->resize(400, 300);
        consent = new QPushButton(deleteAccount);
        consent->setObjectName(QString::fromUtf8("consent"));
        consent->setGeometry(QRect(153, 230, 94, 28));
        label = new QLabel(deleteAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 80, 260, 100));
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
        label->setPalette(palette);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(true);
        label_2 = new QLabel(deleteAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 111, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Showcard Gothic"));
        font1.setPointSize(18);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_3 = new QLabel(deleteAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 161, 81));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setWordWrap(true);
        lineEdit = new QLineEdit(deleteAccount);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 200, 171, 22));
        deleteButton = new QPushButton(deleteAccount);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(270, 130, 93, 61));
        QFont font3;
        font3.setPointSize(10);
        deleteButton->setFont(font3);
        cancel = new QPushButton(deleteAccount);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(20, 260, 93, 28));
        label_4 = new QLabel(deleteAccount);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 71, 16));

        retranslateUi(deleteAccount);

        QMetaObject::connectSlotsByName(deleteAccount);
    } // setupUi

    void retranslateUi(QDialog *deleteAccount)
    {
        deleteAccount->setWindowTitle(QCoreApplication::translate("deleteAccount", "Delete Account", nullptr));
        consent->setText(QCoreApplication::translate("deleteAccount", "Yes, I consent", nullptr));
        label->setText(QCoreApplication::translate("deleteAccount", "ARE YOU SURE YOU WANT TO DELETE YOUR ACCOUNT", nullptr));
        label_2->setText(QCoreApplication::translate("deleteAccount", "H.E.L.P", nullptr));
        label_3->setText(QCoreApplication::translate("deleteAccount", "Please type in the word \"delete\" below to confirm.", nullptr));
        deleteButton->setText(QCoreApplication::translate("deleteAccount", "Delete", nullptr));
        cancel->setText(QCoreApplication::translate("deleteAccount", "Cancel", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class deleteAccount: public Ui_deleteAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEACCOUNT_H
