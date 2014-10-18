


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::mechatronics::StepMotorModbus::StepMotorModbus()

{//BEGIN_6ca1ad45040297580b922c50c0922d36

}//END_6ca1ad45040297580b922c50c0922d36


void oldportal::fhe::hardware::mechatronics::StepMotorModbus::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_78fc3366898319efcb31f2aa857f113b
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    //TODO: loadFromRegisters()
}//END_78fc3366898319efcb31f2aa857f113b

void oldportal::fhe::hardware::mechatronics::StepMotorModbus::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_b71c476c1b34c76ccb5e14bfbb49777a
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    //TODO: saveToRegisterArray()
}//END_b71c476c1b34c76ccb5e14bfbb49777a


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
