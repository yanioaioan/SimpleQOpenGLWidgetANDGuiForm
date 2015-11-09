QT += core gui opengl
QT += widgets

TEMPLATE = app
CONFIG +=c++11
SOURCES += src/*.cpp

FORMS += \
    mainwindow.ui

HEADERS += include/*.h

OBJECTS_DIR+=obj
CONFIG +=c++11
LIBS += -L/$(HOME)/NGL/lib -l NGL
INCLUDEPATH += $$(HOME)/NGL/include/
INCLUDEPATH +=$$PWD/include

OTHER_FILES+=$$PWD/shaders/*
