#-------------------------------------------------
#
# Project created by QtCreator 2015-05-02T02:44:38
#
#-------------------------------------------------

#QT       += core

#QT       -= gui

TARGET = FDOG
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    ETF.cpp \
    fdog.cpp

HEADERS += \
    ETF.h \
    fdog.h \
    imatrix.h \
    myvec.h

INCLUDEPATH += C:/Opencv/include

LIBS += -LC:/Opencv/lib/ \
    -lopencv_core2410 \
    -lopencv_highgui2410 \
    -lopencv_imgproc2410d
