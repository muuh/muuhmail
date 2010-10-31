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
    src/gui/mmlayout.cpp \
    src/gui/mainpanel.cpp \
    src/model/contact.cpp \
    src/model/mail.cpp \
    src/gui/docklets/docklet.cpp \
    src/gui/docklets/emailviewerdocklet.cpp \
    src/gui/docklets/createemaildocklet.cpp \
    src/core/mailservice/pop3mailservice.cpp \
    src/model/mailbox.cpp \
    src/model/mailboxstatus.cpp \
    src/model/mailheader.cpp \
    src/core/mailservice/imapmailservice.cpp \
    src/core/configservice/configservice.cpp \
    src/model/config/mailaccountconfig.cpp \
    src/model/config/applicationconfig.cpp \
    src/model/config/globalsettingsconfig.cpp \
    src/core/mailservice/mailservice.cpp

HEADERS  += \
    src/gui/muuhmainwindow.h \
    src/gui/mmlayout.h \
    src/gui/mainpanel.h \
    src/core/mailservice/mailservice.h \
    src/model/contact.h \
    src/model/mail.h \
    src/gui/docklets/docklet.h \
    src/gui/docklets/emailviewerdocklet.h \
    src/gui/docklets/createemaildocklet.h \
    src/core/mailservice/pop3mailservice.h \
    src/model/mailbox.h \
    src/model/mailboxstatus.h \
    src/model/mailheader.h \
    src/core/mailservice/imapmailservice.h \
    src/core/configservice/configservice.h \
    src/model/config/mailaccountconfig.h \
    src/model/config/applicationconfig.h \
    src/model/config/globalsettingsconfig.h
 

OTHER_FILES +=
