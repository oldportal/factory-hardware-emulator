


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::StepMotorDriverDataInput()

{//BEGIN_a1afeeb2e093e84ba19a306c8c96f1f1
    _4_rotor_planned_angle_speed = 0;
    _6_motor_temperature = DEFAULT_MOTOR_TEMPERATURE;
}//END_a1afeeb2e093e84ba19a306c8c96f1f1


void oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_d2162691aba047d48d4ce71ff1af679f
    //TODO: loadFromRegisters()
}//END_d2162691aba047d48d4ce71ff1af679f

void oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_881f8bb7889e7b6e344a36c27faf67ff
    //TODO: loadFromRegisters()
}//END_881f8bb7889e7b6e344a36c27faf67ff


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE