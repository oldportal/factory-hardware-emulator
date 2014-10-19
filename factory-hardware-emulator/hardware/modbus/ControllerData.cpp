


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
    _3_device_time = 0;
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


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
