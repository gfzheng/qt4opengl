#-------------------------------------------------
#
# Project created by QtCreator 2012-12-05T11:12:26
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtOpenGL
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    glbox.cpp

HEADERS  += mainwindow.h \
    glbox.h

FORMS    += mainwindow.ui
