


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::StepMotorDriverData::StepMotorDriverData()

{//BEGIN_de9444a76e37e556b9eff135b680bec9
    _1_mode = DRIVER_SERVO_IDLE;
    _2_hardware_error_code = DRIVER_HARDWARE_NO_ERRORS;

    _3_flags = 0;
    _4_rotor_angle_start_speed = 0;
    //_5_rotor_angle_start_speed_time = GetSystemTime();
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
    //TODO: loadFromRegisters()
}//END_d4e63daee7f8943d338b9b6e20d35684

void oldportal::fhe::hardware::modbus::StepMotorDriverData::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_748e9c79982a59569b95107c91f80e79
    //TODO: loadFromRegisters()
}//END_748e9c79982a59569b95107c91f80e79


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE