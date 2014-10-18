


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::SystemLogReport::SystemLogReport()

{//BEGIN_7f48829dfedcb1bc21e01d5d0d1ff202
    // set structure sizeof
    _modbus_registers_sizeof = 5;

    // default values
    _1_error_code = 0;
    _2_count = 0;
    _3_last_time = 0;
    _4_last_parameter = 0;
}//END_7f48829dfedcb1bc21e01d5d0d1ff202


void oldportal::fhe::hardware::modbus::SystemLogReport::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_cc435641b382d0ef6f4f5229fbc5c902
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    _1_error_code = registers[0];
    _2_count = registers[1];

    uint32_t *time_register = (uint32_t *)(registers+2);
    _3_last_time = *time_register;
    _4_last_parameter = registers[4];
}//END_cc435641b382d0ef6f4f5229fbc5c902

void oldportal::fhe::hardware::modbus::SystemLogReport::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_8b8c2a35a837a255fc41256995098aba
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    registers[0] = _1_error_code;
    registers[1] = _2_count;
    uint32_t *time_register = (uint32_t *)(registers+2);
    *time_register = _3_last_time;
    registers[4] = _4_last_parameter;
}//END_8b8c2a35a837a255fc41256995098aba


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
