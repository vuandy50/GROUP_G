QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    accountSettings.cpp \
    addaccount.cpp \
    addhikes.cpp \
    adminwindow.cpp \
    database.cpp \
    deleteAccount.cpp \
    deletehike.cpp \
    edithikes.cpp \
    forgot_uandp.cpp \
    hike.cpp \
    logindb.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    singleView.cpp \
    sql.cpp

HEADERS += \
    account.h \
    accountSettings.h \
    addaccount.h \
    addhikes.h \
    adminwindow.h \
    database.h \
    deleteAccount.h \
    deletehike.h \
    edithikes.h \
    forgot_uandp.h \
    hike.h \
    logindb.h \
    mainwindow.h \
    menu.h \
    singleView.h \
    sql.h

FORMS += \
    accountSettings.ui \
    addaccount.ui \
    addhikes.ui \
    adminwindow.ui \
    deleteAccount.ui \
    deletehike.ui \
    edithikes.ui \
    forgot_uandp.ui \
    mainwindow.ui \
    menu.ui \
    singleview.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    account.csv \
    groupG.pro.user \
    groupG.pro.user.5a829f8 \
    groupG.pro.user.7346f64 \
    help.sqlite \
    hikes.csv
