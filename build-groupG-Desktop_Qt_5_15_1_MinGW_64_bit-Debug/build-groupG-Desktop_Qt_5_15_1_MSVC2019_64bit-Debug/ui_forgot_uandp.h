/********************************************************************************
** Form generated from reading UI file 'forgot_uandp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOT_UANDP_H
#define UI_FORGOT_UANDP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_forgot_UandP
{
public:
    QLabel *label_2;
    QLabel *label;
    QLabel *title;
    QLineEdit *emailEdit;
    QPushButton *confirm;
    QLabel *error;
    QPushButton *save;
    QLineEdit *username;
    QLabel *user;
    QLineEdit *password;
    QLabel *check2;
    QLabel *check1;
    QLabel *pass;
    QLineEdit *confirm_2;
    QLabel *pass2;
    QLabel *check3;
    QLabel *error_2;
    QPushButton *cancel;

    void setupUi(QDialog *forgot_UandP)
    {
        if (forgot_UandP->objectName().isEmpty())
            forgot_UandP->setObjectName(QString::fromUtf8("forgot_UandP"));
        forgot_UandP->resize(307, 219);
        label_2 = new QLabel(forgot_UandP);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 101, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Showcard Gothic"));
        font.setPointSize(18);
        font.setUnderline(false);
        label_2->setFont(font);
        label_2->setTextFormat(Qt::RichText);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label = new QLabel(forgot_UandP);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 171, 16));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Lucida Sans"));
        font1.setItalic(true);
        label->setFont(font1);
        title = new QLabel(forgot_UandP);
        title->setObjectName(QString::fromUtf8("title"));
        title->setEnabled(true);
        title->setGeometry(QRect(60, 70, 171, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        title->setFont(font2);
        title->setLayoutDirection(Qt::LeftToRight);
        title->setAlignment(Qt::AlignCenter);
        emailEdit = new QLineEdit(forgot_UandP);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));
        emailEdit->setEnabled(true);
        emailEdit->setGeometry(QRect(70, 100, 161, 20));
        confirm = new QPushButton(forgot_UandP);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setEnabled(true);
        confirm->setGeometry(QRect(110, 140, 75, 23));
        confirm->setFlat(false);
        error = new QLabel(forgot_UandP);
        error->setObjectName(QString::fromUtf8("error"));
        error->setGeometry(QRect(70, 120, 161, 16));
        error->setAlignment(Qt::AlignCenter);
        save = new QPushButton(forgot_UandP);
        save->setObjectName(QString::fromUtf8("save"));
        save->setEnabled(false);
        save->setGeometry(QRect(110, 180, 75, 23));
        save->setAutoDefault(true);
        save->setFlat(true);
        username = new QLineEdit(forgot_UandP);
        username->setObjectName(QString::fromUtf8("username"));
        username->setEnabled(true);
        username->setGeometry(QRect(90, 70, 141, 20));
        user = new QLabel(forgot_UandP);
        user->setObjectName(QString::fromUtf8("user"));
        user->setEnabled(true);
        user->setGeometry(QRect(30, 70, 61, 16));
        password = new QLineEdit(forgot_UandP);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEnabled(true);
        password->setGeometry(QRect(90, 110, 141, 20));
        password->setEchoMode(QLineEdit::Password);
        check2 = new QLabel(forgot_UandP);
        check2->setObjectName(QString::fromUtf8("check2"));
        check2->setGeometry(QRect(80, 90, 61, 16));
        check1 = new QLabel(forgot_UandP);
        check1->setObjectName(QString::fromUtf8("check1"));
        check1->setGeometry(QRect(80, 60, 111, 16));
        pass = new QLabel(forgot_UandP);
        pass->setObjectName(QString::fromUtf8("pass"));
        pass->setEnabled(true);
        pass->setGeometry(QRect(30, 110, 61, 16));
        confirm_2 = new QLineEdit(forgot_UandP);
        confirm_2->setObjectName(QString::fromUtf8("confirm_2"));
        confirm_2->setEnabled(true);
        confirm_2->setGeometry(QRect(90, 150, 141, 20));
        confirm_2->setEchoMode(QLineEdit::Password);
        pass2 = new QLabel(forgot_UandP);
        pass2->setObjectName(QString::fromUtf8("pass2"));
        pass2->setEnabled(true);
        pass2->setGeometry(QRect(40, 150, 61, 16));
        check3 = new QLabel(forgot_UandP);
        check3->setObjectName(QString::fromUtf8("check3"));
        check3->setGeometry(QRect(80, 130, 91, 16));
        check3->setScaledContents(false);
        error_2 = new QLabel(forgot_UandP);
        error_2->setObjectName(QString::fromUtf8("error_2"));
        error_2->setGeometry(QRect(160, 30, 131, 21));
        error_2->setAlignment(Qt::AlignCenter);
        cancel = new QPushButton(forgot_UandP);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(220, 180, 75, 23));

        retranslateUi(forgot_UandP);

        QMetaObject::connectSlotsByName(forgot_UandP);
    } // setupUi

    void retranslateUi(QDialog *forgot_UandP)
    {
        forgot_UandP->setWindowTitle(QCoreApplication::translate("forgot_UandP", "Recover Account", nullptr));
        label_2->setText(QCoreApplication::translate("forgot_UandP", "H.E.L.P", nullptr));
        label->setText(QCoreApplication::translate("forgot_UandP", "Recover your Account", nullptr));
        title->setText(QCoreApplication::translate("forgot_UandP", "Please enter your email", nullptr));
        emailEdit->setInputMask(QString());
        confirm->setText(QCoreApplication::translate("forgot_UandP", "Confirm", nullptr));
        error->setText(QString());
        save->setText(QString());
        user->setText(QCoreApplication::translate("forgot_UandP", "Username", nullptr));
        check2->setText(QCoreApplication::translate("forgot_UandP", "<html><head/><body><p><br/></p></body></html>", nullptr));
        check1->setText(QCoreApplication::translate("forgot_UandP", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pass->setText(QCoreApplication::translate("forgot_UandP", "Password", nullptr));
        pass2->setText(QCoreApplication::translate("forgot_UandP", "Confirm", nullptr));
        check3->setText(QCoreApplication::translate("forgot_UandP", "<html><head/><body><p><br/></p></body></html>", nullptr));
        error_2->setText(QString());
        cancel->setText(QCoreApplication::translate("forgot_UandP", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgot_UandP: public Ui_forgot_UandP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOT_UANDP_H
