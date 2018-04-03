#-------------------------------------------------
# qwebengine
#-------------------------------------------------

QT += core gui
QT += webenginewidgets webchannel
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qwebengine
TEMPLATE = app

SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h
