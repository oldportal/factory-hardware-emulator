/*
*    This file is part of FactoryController project.
*    
*    factory-hardware-emulator is free software; you can redistribute it and/or modify
*    it under the terms of the GNU Lesser General Public License as published by
*    the Free Software Foundation; either version 2 of the License, or
*    (at your option) version 3.
*    
*    factory-hardware-emulator is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU Lesser General Public License for more details.
*    
*    You should have received a copy of the GNU Lesser General Public License
*    along with factory-hardware-emulator; if not, write to the Free Software
*    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*    
*    Copyright (C) Dmitry Ognyannikov, 2014-2016
*    dmogn@mail.ru
*/
#ifndef H_73eae20480d5bbfa0a9523f3155f0dee_H
#define H_73eae20480d5bbfa0a9523f3155f0dee_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION
#define ZERO_ERROR_LOG_PARAMETER (0)
//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**

*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace mechatronics 
{

struct MotorModbus
:  public virtual oldportal::fhe::hardware::modbus::ModbusRegistersMapping
{
// constructors:
public:
MotorModbus();


// members:

public:
oldportal::fhe::hardware::modbus::ControllerData _controllerData;
public:
oldportal::fhe::hardware::modbus::InterfaceSettings _1_interface;
public:
oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants _driverCalculationConstants;
public:
oldportal::fhe::hardware::modbus::StepMotorDriverData _driverData;
public:
oldportal::fhe::hardware::modbus::StepMotorDriverDataInput _driverDataInput;
public:
oldportal::fhe::hardware::modbus::SystemLogReport _systemLog[CONTROLLER_LOG_SIZE];


//methods:

/**
check modbus parameters for correct structure
*/
public:
void CheckDriverModbusParameters();

public:
void ctrlReportError(uint16_t error_code);

public:
void ctrlReportErrorWithParameter(uint16_t error_code, uint16_t parameter);

public:
virtual void loadFromRegisterArray(const modbus_mapping_t* modbus_mapping);

public:
virtual void saveToRegisterArray(const modbus_mapping_t* modbus_mapping);



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace hardware
}// namespace mechatronics


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_73eae20480d5bbfa0a9523f3155f0dee_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_73eae20480d5bbfa0a9523f3155f0dee_INLINES_H
#define H_73eae20480d5bbfa0a9523f3155f0dee_INLINES_H

#endif // H_73eae20480d5bbfa0a9523f3155f0dee_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES