#-------------------------------------------------
#
# Project created by QtCreator 2014-10-12T17:49:42
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = factory-hardware-emulator
CONFIG   += console
CONFIG   -= app_bundle
CONFIG   += boost
CONFIG   += thread

LIBS	+= -lboost_system -lpthread -lmodbus -lboost_program_options

TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x
#QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    hardwareemulator/_group_hardwareemulator.cpp

HEADERS += \
    hardwareemulator/factory-hardware-emulator.h
