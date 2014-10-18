


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::StepMotorDriverCalculationConstants()

{//BEGIN_eef07339a017f0365a00c69016a179b9
    _1_steps_per_revolution = 200;
    _2_rotor_intertia = 100;
    _3_moment_elasticity = 1000;
}//END_eef07339a017f0365a00c69016a179b9


void oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_990bd8c1718409138c6c02fd22eaaf7b
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    //TODO: loadFromRegisters()
}//END_990bd8c1718409138c6c02fd22eaaf7b

void oldportal::fhe::hardware::modbus::StepMotorDriverCalculationConstants::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_b2e111100e6ce5be449ca0c9b565d360
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    //TODO: saveToRegisterArray()
}//END_b2e111100e6ce5be449ca0c9b565d360


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
