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
    factory-hardware-emulator/_group_factory-hardware-emulator.cpp \
    factory-hardware-emulator/EmulatorApplication.cpp \
    factory-hardware-emulator/network/_group_network.cpp \
    factory-hardware-emulator/network/ModbusNetworkController.cpp \
    factory-hardware-emulator/device/_group_device.cpp \
    factory-hardware-emulator/device/Device.cpp \
    factory-hardware-emulator/hardware/_group_hardware.cpp \
    factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.cpp \
    factory-hardware-emulator/hardware/mechatronics/StepMotor.cpp

HEADERS += \
    factory-hardware-emulator/factory-hardware-emulator.h
