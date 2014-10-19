


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::StepMotorDriverDataInput()

{//BEGIN_a1afeeb2e093e84ba19a306c8c96f1f1
    // set structure sizeof
    _modbus_registers_sizeof = 7;

    // default values
    _1_rotor_angle_speed = 0;
    _2_rotor_angle_acceleration = 0;
    _3_rotor_absolute_angle_position = 0;
    _4_rotor_planned_angle_speed = 0;
    _5_rotor_planned_angle_torque = 0;
    _6_motor_temperature = DEFAULT_MOTOR_TEMPERATURE;
}//END_a1afeeb2e093e84ba19a306c8c96f1f1


void oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_d2162691aba047d48d4ce71ff1af679f
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    _1_rotor_angle_speed = registers_i16[0];
    _2_rotor_angle_acceleration = registers_i16[1];

    int32_t *rotor_absolute_angle_position_register = (int32_t *)(registers+2);
    _3_rotor_absolute_angle_position = *rotor_absolute_angle_position_register;

    _4_rotor_planned_angle_speed = registers_i16[4];
    _5_rotor_planned_angle_torque = registers_i16[5];
    _6_motor_temperature = registers_i16[6];
}//END_d2162691aba047d48d4ce71ff1af679f

void oldportal::fhe::hardware::modbus::StepMotorDriverDataInput::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_881f8bb7889e7b6e344a36c27faf67ff
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    uint16_t *registers = modbus_mapping->tab_registers;
    registers += _modbus_registers_start_index;

    int16_t *registers_i16 = (int16_t *)modbus_mapping->tab_registers;

    // variables
    registers_i16[0] = _1_rotor_angle_speed;
    registers_i16[1] = _2_rotor_angle_acceleration;

    int32_t *rotor_absolute_angle_position_register = (int32_t *)(registers+2);
    *rotor_absolute_angle_position_register = _3_rotor_absolute_angle_position;

    registers_i16[4] = _4_rotor_planned_angle_speed;
    registers_i16[5] = _5_rotor_planned_angle_torque;
    registers_i16[6] = _6_motor_temperature;
}//END_881f8bb7889e7b6e344a36c27faf67ff


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE