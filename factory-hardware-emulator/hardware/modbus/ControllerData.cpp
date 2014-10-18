


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::ControllerData::ControllerData()

{//BEGIN_a96f949964f66617b8d302209eb52e51
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
    //TODO: loadFromRegisters()
}//END_1cc172e4798745bc1f7894ac3683257d

void oldportal::fhe::hardware::modbus::ControllerData::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_d18e7df10413c32d0e6e49b1a917b9fc
    //TODO: loadFromRegisters()
}//END_d18e7df10413c32d0e6e49b1a917b9fc


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE