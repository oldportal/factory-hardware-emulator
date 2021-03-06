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


oldportal::fhe::hardware::modbus::StepMotorDriverData::StepMotorDriverData()

{//BEGIN_de9444a76e37e556b9eff135b680bec9
    // set structure sizeof
    _modbus_registers_sizeof = 15;

    // default values
    _1_mode = DRIVER_SERVO_IDLE;
    _2_hardware_error_code = DRIVER_HARDWARE_NO_ERRORS;

    _3_flags = 0;
    _4_rotor_angle_start_speed = 0;
    _5_rotor_angle_start_speed_time = 0;
    _6_rotor_angle_acceleration_speed = 0;
    _7_rotor_angle_end_continuous_speed = 0;
    _8_rotor_angle_stop_position = 0;
    _9_rotor_angle_force = 0;
    _10_rotor_angle_direct_step = 0;
    _14_motor_step_scale = 1; // fullstep mode

    _11_motor_maximum_allowed_temperature = DEFAULT_MAXIMUM_ALLOWED_MOTOR_TEMPERATURE;
    _12_motor_maximum_allowed_current = DEFAULT_MAXIMUM_ALLOWED_MOTOR_CURRENT;
    _13_motor_maximum_allowed_angle_speed = DEFAULT_MAXIMUM_ALLOWED_ANGLE_SPEED;
}//END_de9444a76e37e556b9eff135b680bec9


void oldportal::fhe::hardware::modbus::StepMotorDriverData::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_d4e63daee7f8943d338b9b6e20d35684
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    _1_mode = registers[0];
    _2_hardware_error_code = registers[1];
    _3_flags = registers[2];
    _4_rotor_angle_start_speed = registers_i16[3];

    int32_t *rotor_angle_start_speed_time_register = (int32_t *)(registers+4);
    _5_rotor_angle_start_speed_time = *rotor_angle_start_speed_time_register;

    _6_rotor_angle_acceleration_speed = registers_i16[6];
    _7_rotor_angle_end_continuous_speed = registers_i16[7];

    int32_t *rotor_angle_stop_position_register = (int32_t *)(registers+8);
    _8_rotor_angle_stop_position = *rotor_angle_stop_position_register;

    _9_rotor_angle_force = registers_i16[10];
    _10_rotor_angle_direct_step = registers_i16[11];
    _11_motor_maximum_allowed_temperature = registers_i16[12];
    _12_motor_maximum_allowed_current = registers_i16[13];
    _13_motor_maximum_allowed_angle_speed = registers_i16[14];
}//END_d4e63daee7f8943d338b9b6e20d35684

void oldportal::fhe::hardware::modbus::StepMotorDriverData::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_748e9c79982a59569b95107c91f80e79
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    registers[0] = _1_mode;
    registers[1] = _2_hardware_error_code;
    registers[2] = _3_flags;
    registers_i16[3] = _4_rotor_angle_start_speed;

    int32_t *rotor_angle_start_speed_time_register = (int32_t *)(registers+4);
    *rotor_angle_start_speed_time_register = _5_rotor_angle_start_speed_time;

    registers_i16[6] = _6_rotor_angle_acceleration_speed;
    registers_i16[7] = _7_rotor_angle_end_continuous_speed;

    int32_t *rotor_angle_stop_position_register = (int32_t *)(registers+8);
    *rotor_angle_stop_position_register = _8_rotor_angle_stop_position;

    registers_i16[10] = _9_rotor_angle_force;
    registers_i16[11] = _10_rotor_angle_direct_step;
    registers_i16[12] = _11_motor_maximum_allowed_temperature;
    registers_i16[13] = _12_motor_maximum_allowed_current;
    registers_i16[14] = _13_motor_maximum_allowed_angle_speed;
}//END_748e9c79982a59569b95107c91f80e79


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE