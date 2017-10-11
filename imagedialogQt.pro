QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = imagedialogqt
TEMPLATE = app
DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += \
        main.cpp \
    imagedialogqt.cpp
HEADERS += \
    imagedialogqt.h

target.path = /usr/bin

INSTALLS += target
