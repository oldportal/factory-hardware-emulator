#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/factory-hardware-emulator/EmulatorApplication.o \
	${OBJECTDIR}/factory-hardware-emulator/_group_factory-hardware-emulator.o \
	${OBJECTDIR}/factory-hardware-emulator/device/Device.o \
	${OBJECTDIR}/factory-hardware-emulator/device/_group_device.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/HardwareDevice.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/_group_hardware.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/Motor.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorModbus.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorSettings.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/StepMotor.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ControllerData.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/InterfaceSettings.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverData.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/SystemLogReport.o \
	${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/_group_modbus.o \
	${OBJECTDIR}/factory-hardware-emulator/network/ModbusNetworkController.o \
	${OBJECTDIR}/factory-hardware-emulator/network/NetworkClock.o \
	${OBJECTDIR}/factory-hardware-emulator/network/_group_network.o \
	${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.o \
	${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandResult.o \
	${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.o \
	${OBJECTDIR}/factory-hardware-emulator/network/scheduled/_group_scheduled.o \
	${OBJECTDIR}/factory-hardware-emulator/system/_group_system.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-lpthread -lboost_system -lboost_program_options -lmodbus -llog4cxx

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/factory-hardware-emulator

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/factory-hardware-emulator: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/factory-hardware-emulator ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/factory-hardware-emulator/EmulatorApplication.o: factory-hardware-emulator/EmulatorApplication.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/EmulatorApplication.o factory-hardware-emulator/EmulatorApplication.cpp

${OBJECTDIR}/factory-hardware-emulator/_group_factory-hardware-emulator.o: factory-hardware-emulator/_group_factory-hardware-emulator.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/_group_factory-hardware-emulator.o factory-hardware-emulator/_group_factory-hardware-emulator.cpp

${OBJECTDIR}/factory-hardware-emulator/device/Device.o: factory-hardware-emulator/device/Device.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/device
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/device/Device.o factory-hardware-emulator/device/Device.cpp

${OBJECTDIR}/factory-hardware-emulator/device/_group_device.o: factory-hardware-emulator/device/_group_device.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/device
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/device/_group_device.o factory-hardware-emulator/device/_group_device.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/HardwareDevice.o: factory-hardware-emulator/hardware/HardwareDevice.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/HardwareDevice.o factory-hardware-emulator/hardware/HardwareDevice.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/_group_hardware.o: factory-hardware-emulator/hardware/_group_hardware.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/_group_hardware.o factory-hardware-emulator/hardware/_group_hardware.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/Motor.o: factory-hardware-emulator/hardware/mechatronics/Motor.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/Motor.o factory-hardware-emulator/hardware/mechatronics/Motor.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorModbus.o: factory-hardware-emulator/hardware/mechatronics/MotorModbus.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorModbus.o factory-hardware-emulator/hardware/mechatronics/MotorModbus.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorSettings.o: factory-hardware-emulator/hardware/mechatronics/MotorSettings.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/MotorSettings.o factory-hardware-emulator/hardware/mechatronics/MotorSettings.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/StepMotor.o: factory-hardware-emulator/hardware/mechatronics/StepMotor.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/StepMotor.o factory-hardware-emulator/hardware/mechatronics/StepMotor.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.o: factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.o factory-hardware-emulator/hardware/mechatronics/_group_mechatronics.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ControllerData.o: factory-hardware-emulator/hardware/modbus/ControllerData.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ControllerData.o factory-hardware-emulator/hardware/modbus/ControllerData.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/InterfaceSettings.o: factory-hardware-emulator/hardware/modbus/InterfaceSettings.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/InterfaceSettings.o factory-hardware-emulator/hardware/modbus/InterfaceSettings.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.o: factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.o factory-hardware-emulator/hardware/modbus/ModbusRegistersMapping.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.o: factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.o factory-hardware-emulator/hardware/modbus/StepMotorDriverCalculationConstants.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverData.o: factory-hardware-emulator/hardware/modbus/StepMotorDriverData.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverData.o factory-hardware-emulator/hardware/modbus/StepMotorDriverData.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.o: factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.o factory-hardware-emulator/hardware/modbus/StepMotorDriverDataInput.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/SystemLogReport.o: factory-hardware-emulator/hardware/modbus/SystemLogReport.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/SystemLogReport.o factory-hardware-emulator/hardware/modbus/SystemLogReport.cpp

${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/_group_modbus.o: factory-hardware-emulator/hardware/modbus/_group_modbus.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/hardware/modbus/_group_modbus.o factory-hardware-emulator/hardware/modbus/_group_modbus.cpp

${OBJECTDIR}/factory-hardware-emulator/network/ModbusNetworkController.o: factory-hardware-emulator/network/ModbusNetworkController.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/ModbusNetworkController.o factory-hardware-emulator/network/ModbusNetworkController.cpp

${OBJECTDIR}/factory-hardware-emulator/network/NetworkClock.o: factory-hardware-emulator/network/NetworkClock.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/NetworkClock.o factory-hardware-emulator/network/NetworkClock.cpp

${OBJECTDIR}/factory-hardware-emulator/network/_group_network.o: factory-hardware-emulator/network/_group_network.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/_group_network.o factory-hardware-emulator/network/_group_network.cpp

${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.o: factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network/scheduled
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.o factory-hardware-emulator/network/scheduled/ScheduledCommandRequest.cpp

${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandResult.o: factory-hardware-emulator/network/scheduled/ScheduledCommandResult.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network/scheduled
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledCommandResult.o factory-hardware-emulator/network/scheduled/ScheduledCommandResult.cpp

${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.o: factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network/scheduled
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.o factory-hardware-emulator/network/scheduled/ScheduledDeviceCommandQueue.cpp

${OBJECTDIR}/factory-hardware-emulator/network/scheduled/_group_scheduled.o: factory-hardware-emulator/network/scheduled/_group_scheduled.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/network/scheduled
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/network/scheduled/_group_scheduled.o factory-hardware-emulator/network/scheduled/_group_scheduled.cpp

${OBJECTDIR}/factory-hardware-emulator/system/_group_system.o: factory-hardware-emulator/system/_group_system.cpp 
	${MKDIR} -p ${OBJECTDIR}/factory-hardware-emulator/system
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/factory-hardware-emulator/system/_group_system.o factory-hardware-emulator/system/_group_system.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++14 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/factory-hardware-emulator

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
