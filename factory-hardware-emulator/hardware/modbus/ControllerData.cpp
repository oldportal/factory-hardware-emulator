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


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::ControllerData::ControllerData()

{//BEGIN_a96f949964f66617b8d302209eb52e51
    // set structure sizeof
    _modbus_registers_sizeof = 9;

    // default values
    _1_mode = CTRLR_MODE_IDLE;
    _2_error_code = CTRLR_NO_ERRORS;
    _7_maximum_radiator_temperature = DEFAULT_MAXIMUM_RADIATOR_TEMPERATURE;
    _6_radiator_temperature = DEFAULT_RADIATOR_TEMPERATURE;
    _3_device_time = oldportal::fhe::network::GetSystemTime();
    _4_network_time_shift = 0;
    _5_maximum_system_step_timeout = 0;
}//END_a96f949964f66617b8d302209eb52e51


void oldportal::fhe::hardware::modbus::ControllerData::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_1cc172e4798745bc1f7894ac3683257d
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    _1_mode = registers[0];
    _2_error_code = registers[1];

    uint32_t *device_time_register = (uint32_t *)(registers+2);
    _3_device_time = *device_time_register;

    uint32_t *network_time_shift_register = (uint32_t *)(registers+4);
    _4_network_time_shift = *network_time_shift_register;

    _5_maximum_system_step_timeout = registers[6];
    _6_radiator_temperature = registers_i16[7];
    _7_maximum_radiator_temperature = registers_i16[8];
}//END_1cc172e4798745bc1f7894ac3683257d

void oldportal::fhe::hardware::modbus::ControllerData::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_d18e7df10413c32d0e6e49b1a917b9fc
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    registers[0] = _1_mode;
    registers[1] = _2_error_code;

    uint32_t *device_time_register = (uint32_t *)(registers+2);
    *device_time_register = _3_device_time;

    uint32_t *network_time_shift_register = (uint32_t *)(registers+4);
    *network_time_shift_register = _4_network_time_shift;

    registers[6] = _5_maximum_system_step_timeout;
    registers_i16[7] = _6_radiator_temperature;
    registers_i16[8] = _7_maximum_radiator_temperature;
}//END_d18e7df10413c32d0e6e49b1a917b9fc

void oldportal::fhe::hardware::modbus::ControllerData::step()
{//BEGIN_bc40c9790d0c14986aae5e92d69cc370
    // update maximum_system_step_timeout indication parameter
        uint32_t step_time_shift = oldportal::fhe::network::CalculateTimeInterval(oldportal::fhe::network::GetSystemTime(), _3_device_time);
        if (step_time_shift > UINT16_MAX)
            step_time_shift = UINT16_MAX;
        _5_maximum_system_step_timeout = step_time_shift;

        // update device_time indication parameter
        _3_device_time = oldportal::fhe::network::GetSystemTime();
}//END_bc40c9790d0c14986aae5e92d69cc370


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE