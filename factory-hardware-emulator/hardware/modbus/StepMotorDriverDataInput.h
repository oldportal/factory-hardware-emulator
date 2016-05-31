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
#ifndef H_94c3b71621b13a1e272ce34e9f30f179_H
#define H_94c3b71621b13a1e272ce34e9f30f179_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Data for servo driver state monitoring throught Modbus input registers
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace modbus 
{

struct StepMotorDriverDataInput
:  public virtual oldportal::fhe::hardware::modbus::ModbusRegistersMapping
{
// constructors:
public:
StepMotorDriverDataInput();


// members:

/**
rotor angle speed in steps per second
*/
public:
int16_t _1_rotor_angle_speed;
/**
rotor angle acceleration in steps per second
*/
public:
int16_t _2_rotor_angle_acceleration;
/**
rotor calculated (planned for execution) current angle speed in steps per second
*/
public:
int16_t _4_rotor_planned_angle_speed;
/**
rotor calculated (planned for execution) current torque. 

Not applicable for step motors.
*/
public:
int16_t _5_rotor_planned_angle_torque;
public:
int16_t _6_motor_temperature;
/**
rotor angle position in steps
*/
public:
int32_t _3_rotor_absolute_angle_position;


//methods:

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
}// namespace modbus


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_94c3b71621b13a1e272ce34e9f30f179_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H
#define H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H

#endif // H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES