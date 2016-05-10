TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    ../Sources/main.cpp \
    ../Sources/ressouces.cpp \
    ../Sources/livre.cpp \
    ../Sources/cd.cpp \
    ../Sources/vhs.cpp \
    ../Sources/num.cpp \
    ../Sources/dvd.cpp \
    ../Sources/article.cpp \
    ../Sources/revue.cpp \
    ../Sources/mediatheque.cpp \
    ../Sources/utilisateur.cpp

HEADERS += \
    ../Includes/ressources.h \
    ../Includes/cd.h \
    ../Includes/vhs.h \
    ../Includes/num.h \
    ../Includes/dvd.h \
    ../Includes/article.h \
    ../Includes/revue.h \
    ../Includes/mediatheque.h \
    ../Includes/utilisateur.h \
    ../Includes/library_string.h \
    ../Includes/library_string2.h \
    ../Includes/livre.h

DISTFILES +=
