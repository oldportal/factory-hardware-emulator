/*
*    This file is part of factory-hardware-emulator program and part of FactoryController project.
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


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::StepMotorDriverCalculationConstants()

{//BEGIN_eef07339a017f0365a00c69016a179b9
    // set structure sizeof
    _modbus_registers_sizeof = 4;

    // default values
    _1_steps_per_revolution = 200;
    _2_rotor_intertia = 100;
    _3_moment_elasticity = 1000;
    _4_default_s_in_angle_steps = 0;
}//END_eef07339a017f0365a00c69016a179b9


void oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_990bd8c1718409138c6c02fd22eaaf7b
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    // variables
    _1_steps_per_revolution = registers[0];
    _2_rotor_intertia = registers[1];
    _3_moment_elasticity = registers[2];
    _4_default_s_in_angle_steps = registers[3];
}//END_990bd8c1718409138c6c02fd22eaaf7b

void oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_b2e111100e6ce5be449ca0c9b565d360
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    // variables
    registers[0] = _1_steps_per_revolution;
    registers[1] = _2_rotor_intertia;
    registers[2] = _3_moment_elasticity;
    registers[3] = _4_default_s_in_angle_steps;
}//END_b2e111100e6ce5be449ca0c9b565d360


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE