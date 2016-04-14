TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../main.cpp \
    ../ressouces.cpp \
    ../livre.cpp \
    ../cd.cpp \
    ../vhs.cpp \
    ../num.cpp \
    ../dvd.cpp \
    ../article.cpp \
    ../revue.cpp \
    ../mediatheque.cpp \
    ../utilisateur.cpp

HEADERS += \
    ../ressources.h \
    ../livre.h \
    ../cd.h \
    ../vhs.h \
    ../num.h \
    ../dvd.h \
    ../article.h \
    ../revue.h \
    ../mediatheque.h \
    ../utilisateur.h

DISTFILES +=
