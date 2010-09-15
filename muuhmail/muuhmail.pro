#-------------------------------------------------
#
# Project created by QtCreator 2010-09-10T19:02:17
#
#-------------------------------------------------

QT       += core gui

TARGET = muuhmail
TEMPLATE = app


SOURCES += src/gui/muuhmainwindow.cpp \
    src/gui/main.cpp \
    src/gui/docklet.cpp \
    src/gui/MMLayout.cpp \
    src/model/mail.cpp \
    src/model/contact.cpp \
    src/core/mailservice.cpp

HEADERS  += \
    src/gui/muuhmainwindow.h \
    src/gui/docklet.h \
    src/gui/MMLayout.h \
    src/model/mail.h \
    src/model/contact.h \
    src/core/mailservice.h
