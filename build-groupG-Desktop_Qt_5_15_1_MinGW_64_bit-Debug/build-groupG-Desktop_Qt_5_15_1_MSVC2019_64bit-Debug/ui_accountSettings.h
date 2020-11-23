/********************************************************************************
** Form generated from reading UI file 'accountSettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSETTINGS_H
#define UI_ACCOUNTSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_accountSettings
{
public:
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *check6;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *email;
    QLineEdit *fname;
    QLineEdit *lname;
    QLineEdit *username;
    QDateEdit *dob;
    QLineEdit *password;
    QLineEdit *confirm;
    QPushButton *del;
    QPushButton *Save;
    QPushButton *cancel;

    void setupUi(QDialog *accountSettings)
    {
        if (accountSettings->objectName().isEmpty())
            accountSettings->setObjectName(QString::fromUtf8("accountSettings"));
        accountSettings->resize(370, 303);
        label_3 = new QLabel(accountSettings);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 60, 61, 16));
        label_9 = new QLabel(accountSettings);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(190, 160, 71, 16));
        label_6 = new QLabel(accountSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 160, 61, 16));
        label_2 = new QLabel(accountSettings);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_7 = new QLabel(accountSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 210, 61, 16));
        label_4 = new QLabel(accountSettings);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 60, 61, 16));
        check6 = new QLabel(accountSettings);
        check6->setObjectName(QString::fromUtf8("check6"));
        check6->setGeometry(QRect(240, 210, 91, 16));
        check6->setScaledContents(false);
        check6->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(accountSettings);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 110, 61, 16));
        label_8 = new QLabel(accountSettings);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 40, 171, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setItalic(true);
        label_8->setFont(font1);
        label_10 = new QLabel(accountSettings);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(190, 210, 61, 16));
        email = new QLabel(accountSettings);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(20, 130, 311, 20));
        fname = new QLineEdit(accountSettings);
        fname->setObjectName(QString::fromUtf8("fname"));
        fname->setGeometry(QRect(20, 80, 141, 20));
        lname = new QLineEdit(accountSettings);
        lname->setObjectName(QString::fromUtf8("lname"));
        lname->setGeometry(QRect(190, 80, 141, 20));
        username = new QLineEdit(accountSettings);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(20, 180, 141, 20));
        dob = new QDateEdit(accountSettings);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setGeometry(QRect(190, 180, 110, 22));
        password = new QLineEdit(accountSettings);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(20, 230, 141, 20));
        password->setEchoMode(QLineEdit::Password);
        confirm = new QLineEdit(accountSettings);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(190, 230, 141, 20));
        confirm->setEchoMode(QLineEdit::Password);
        del = new QPushButton(accountSettings);
        del->setObjectName(QString::fromUtf8("del"));
        del->setGeometry(QRect(20, 260, 101, 23));
        Save = new QPushButton(accountSettings);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(180, 260, 75, 23));
        cancel = new QPushButton(accountSettings);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(260, 260, 75, 23));

        retranslateUi(accountSettings);

        QMetaObject::connectSlotsByName(accountSettings);
    } // setupUi

    void retranslateUi(QDialog *accountSettings)
    {
        accountSettings->setWindowTitle(QCoreApplication::translate("accountSettings", "Edit Account", nullptr));
        label_3->setText(QCoreApplication::translate("accountSettings", "First name", nullptr));
        label_9->setText(QCoreApplication::translate("accountSettings", "Date of Birth", nullptr));
        label_6->setText(QCoreApplication::translate("accountSettings", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("accountSettings", "H.E.L.P", nullptr));
        label_7->setText(QCoreApplication::translate("accountSettings", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("accountSettings", "Last name", nullptr));
        check6->setText(QCoreApplication::translate("accountSettings", "<html><head/><body><p><br/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("accountSettings", "Email", nullptr));
        label_8->setText(QCoreApplication::translate("accountSettings", "Edit your HELP Account", nullptr));
        label_10->setText(QCoreApplication::translate("accountSettings", "Confirm", nullptr));
        email->setText(QCoreApplication::translate("accountSettings", "TextLabel", nullptr));
        del->setText(QCoreApplication::translate("accountSettings", "Delete Account", nullptr));
        Save->setText(QCoreApplication::translate("accountSettings", "Update", nullptr));
        cancel->setText(QCoreApplication::translate("accountSettings", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accountSettings: public Ui_accountSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSETTINGS_H
