


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::ModbusRegistersMapping::ModbusRegistersMapping()

{//BEGIN_735c3598bdcd98266740974a5517e4be
    _modbus_registers_start_index = 0;
    _modbus_registers_sizeof = 0;
}//END_735c3598bdcd98266740974a5517e4be


uint8_t oldportal::fhe::hardware::modbus::ModbusRegistersMapping::getModbusRegistersSizeof()
{//BEGIN_8c457d66b8ce3857068a6cc1ed4d9e32
    return _modbus_registers_sizeof;
}//END_8c457d66b8ce3857068a6cc1ed4d9e32


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE