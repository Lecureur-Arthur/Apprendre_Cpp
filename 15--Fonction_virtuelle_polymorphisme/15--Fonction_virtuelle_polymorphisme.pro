TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        barre.cpp \
        barrecarree.cpp \
        barrerectangle.cpp \
        barreronde.cpp \
        catalogue.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    barre.h \
    barrecarree.h \
    barrerectangle.h \
    barreronde.h \
    catalogue.h \
    menu.h

DISTFILES += \
    menu.txt
