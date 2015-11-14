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
CONFIG   += object_parallel_to_source

LIBS	+= -lboost_system -lpthread -lmodbus -lboost_program_options -llog4cxx

TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

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
    factory-hardware-emulator/hardware/modbus/_group_modbus.cpp \
    factory-hardware-emulator/hardware/modbus/ControllerData.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverData.cpp \
    factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.cpp \
    factory-hardware-emulator/hardware/modbus/SystemLogReport.cpp \
    factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.cpp \
    factory-hardware-emulator/network/NetworkClock.cpp \
    factory-hardware-emulator/hardware/modbus/InterfaceSettings.cpp \
    factory-hardware-emulator/network/scheduled/_group_scheduled.cpp \
    factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.cpp \
    factory-hardware-emulator/network/scheduled/ScheduledCommandResult.cpp \
    factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.cpp \
    factory-hardware-emulator/hardware/mechatronics/Motor.cpp \
    factory-hardware-emulator/hardware/mechatronics/MotorModbus.cpp \
    factory-hardware-emulator/hardware/mechatronics/MotorSettings.cpp

HEADERS += \
    factory-hardware-emulator/factory-hardware-emulator.h

#unix: CONFIG += link_pkgconfig
#unix: PKGCONFIG += liblog4cxx10-dev
