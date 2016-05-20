#-------------------------------------------------
#
# Project created by QtCreator 2016-05-15T21:22:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    drum.cpp \
    grade.cpp

HEADERS  += mainwindow.h \
    drum.h \
    grade.h

FORMS    += mainwindow.ui \
    drum.ui \
    grade.ui

RESOURCES += \
    img.qrc

DISTFILES +=
