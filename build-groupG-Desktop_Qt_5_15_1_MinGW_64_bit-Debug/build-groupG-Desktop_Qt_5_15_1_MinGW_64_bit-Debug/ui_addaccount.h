/********************************************************************************
** Form generated from reading UI file 'addaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDACCOUNT_H
#define UI_ADDACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addAccount
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *fname;
    QLineEdit *lname;
    QLineEdit *email;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *confirm;
    QDateEdit *dob;
    QLabel *check1;
    QLabel *check2;
    QLabel *check3;
    QLabel *check4;
    QLabel *check5;
    QLabel *check6;
    QLabel *error;
    QPushButton *Save;
    QPushButton *cancel;

    void setupUi(QDialog *addAccount)
    {
        if (addAccount->objectName().isEmpty())
            addAccount->setObjectName(QString::fromUtf8("addAccount"));
        addAccount->resize(370, 303);
        label = new QLabel(addAccount);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 40, 171, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Lucida Sans"));
        font.setItalic(true);
        label->setFont(font);
        label_2 = new QLabel(addAccount);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 101, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Showcard Gothic"));
        font1.setPointSize(18);
        font1.setUnderline(false);
        label_2->setFont(font1);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_3 = new QLabel(addAccount);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 61, 16));
        label_4 = new QLabel(addAccount);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 60, 61, 16));
        label_5 = new QLabel(addAccount);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 110, 61, 16));
        label_6 = new QLabel(addAccount);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 160, 61, 16));
        label_7 = new QLabel(addAccount);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 210, 61, 16));
        label_8 = new QLabel(addAccount);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(200, 210, 61, 16));
        label_9 = new QLabel(addAccount);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(200, 160, 71, 16));
        fname = new QLineEdit(addAccount);
        fname->setObjectName(QString::fromUtf8("fname"));
        fname->setGeometry(QRect(30, 80, 141, 20));
        lname = new QLineEdit(addAccount);
        lname->setObjectName(QString::fromUtf8("lname"));
        lname->setGeometry(QRect(200, 80, 141, 20));
        email = new QLineEdit(addAccount);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(30, 130, 141, 20));
        username = new QLineEdit(addAccount);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(30, 180, 141, 20));
        password = new QLineEdit(addAccount);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(30, 230, 141, 20));
        password->setEchoMode(QLineEdit::Password);
        confirm = new QLineEdit(addAccount);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(200, 230, 141, 20));
        confirm->setEchoMode(QLineEdit::Password);
        dob = new QDateEdit(addAccount);
        dob->setObjectName(QString::fromUtf8("dob"));
        dob->setGeometry(QRect(200, 180, 110, 22));
        check1 = new QLabel(addAccount);
        check1->setObjectName(QString::fromUtf8("check1"));
        check1->setGeometry(QRect(80, 60, 61, 16));
        check2 = new QLabel(addAccount);
        check2->setObjectName(QString::fromUtf8("check2"));
        check2->setGeometry(QRect(250, 60, 61, 16));
        check3 = new QLabel(addAccount);
        check3->setObjectName(QString::fromUtf8("check3"));
        check3->setGeometry(QRect(60, 110, 121, 16));
        check4 = new QLabel(addAccount);
        check4->setObjectName(QString::fromUtf8("check4"));
        check4->setGeometry(QRect(80, 160, 111, 16));
        check5 = new QLabel(addAccount);
        check5->setObjectName(QString::fromUtf8("check5"));
        check5->setGeometry(QRect(80, 210, 61, 16));
        check6 = new QLabel(addAccount);
        check6->setObjectName(QString::fromUtf8("check6"));
        check6->setGeometry(QRect(240, 210, 91, 16));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        QBrush brush1(QColor(0, 120, 215, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush1);
        check6->setPalette(palette);
        check6->setTextFormat(Qt::MarkdownText);
        check6->setScaledContents(false);
        error = new QLabel(addAccount);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(190, 30, 131, 21));
        error->setAlignment(Qt::AlignCenter);
        Save = new QPushButton(addAccount);
        Save->setObjectName(QString::fromUtf8("Save"));
        Save->setGeometry(QRect(190, 260, 75, 23));
        cancel = new QPushButton(addAccount);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(270, 260, 75, 23));

        retranslateUi(addAccount);

        QMetaObject::connectSlotsByName(addAccount);
    } // setupUi

    void retranslateUi(QDialog *addAccount)
    {
        addAccount->setWindowTitle(QCoreApplication::translate("addAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("addAccount", "Create your HELP Account", nullptr));
        label_2->setText(QCoreApplication::translate("addAccount", "H.E.L.P", nullptr));
        label_3->setText(QCoreApplication::translate("addAccount", "First name", nullptr));
        label_4->setText(QCoreApplication::translate("addAccount", "Last name", nullptr));
        label_5->setText(QCoreApplication::translate("addAccount", "Email", nullptr));
        label_6->setText(QCoreApplication::translate("addAccount", "Username", nullptr));
        label_7->setText(QCoreApplication::translate("addAccount", "Password", nullptr));
        label_8->setText(QCoreApplication::translate("addAccount", "Confirm", nullptr));
        label_9->setText(QCoreApplication::translate("addAccount", "Date of Birth", nullptr));
        check1->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check2->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check3->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check4->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check5->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check6->setText(QCoreApplication::translate("addAccount", "<html><head/><body><p><br/></p></body></html>", nullptr));
        error->setText(QString());
        Save->setText(QCoreApplication::translate("addAccount", "Save", nullptr));
        cancel->setText(QCoreApplication::translate("addAccount", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addAccount: public Ui_addAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDACCOUNT_H
