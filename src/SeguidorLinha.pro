#-------------------------------------------------
#
# Project created by QtCreator 2018-02-22T12:30:14
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = SeguidorLinha
CONFIG   += console
CONFIG   -= app_bundle
LIBS += -lwiringPi
INCLUDEPATH += /usr/local/include
INCLUDEPATH += /usr/include
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp \
    mechanical.cpp \
    control.cpp

HEADERS += \
    mechanical.h \
    Defines.h \
    control.h
