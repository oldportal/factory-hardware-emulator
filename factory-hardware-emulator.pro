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
    factory-hardware-emulator/hardware/mechatronics/StepMotor.cpp \
    factory-hardware-emulator/hardware/HardwareDevice.cpp \
    factory-hardware-emulator/hardware/mechatronics/StepMotorSettings.cpp \
    factory-hardware-emulator/hardware/modbus/_group_modbus.cpp \
    factory-hardware-emulator/hardware/modbus/ControllerData.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverData.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.cpp \
    factory-hardware-emulator/hardware/modbus/SystemLogReport.cpp \
    factory-hardware-emulator/hardware/mechatronics/StepMotorModbus.cpp \
    factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.cpp

HEADERS += \
    factory-hardware-emulator/factory-hardware-emulator.h
