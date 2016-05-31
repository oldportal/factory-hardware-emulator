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
#ifndef H_d69daaac0e1f6da7c70e719db0b9a129_H
#define H_d69daaac0e1f6da7c70e719db0b9a129_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Object with mapping internal variables to array of modbus protocol registers.
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace modbus 
{

class ModbusRegistersMapping
{
// constructors:
public:
ModbusRegistersMapping();


// members:

/**
Registers count for save structure (structure size in array of registers).
*/
protected:
uint8_t _modbus_registers_sizeof;
public:
uint16_t _modbus_registers_start_index;


//methods:

public:
uint8_t getModbusRegistersSizeof();

public:
virtual void loadFromRegisterArray(const modbus_mapping_t* modbus_mapping) = 0;

public:
virtual void saveToRegisterArray(const modbus_mapping_t* modbus_mapping) = 0;



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


#endif // H_d69daaac0e1f6da7c70e719db0b9a129_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H
#define H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H

#endif // H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES