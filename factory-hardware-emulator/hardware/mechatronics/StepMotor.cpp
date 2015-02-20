


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::mechatronics::StepMotor::StepMotor()

{//BEGIN_af6f30859e21bb21da954b58d4c5a933
    _current_position = _settings._default_start_position;
}//END_af6f30859e21bb21da954b58d4c5a933



oldportal::fhe::hardware::mechatronics::StepMotor::~StepMotor()
{//BEGIN_51c1a47c1ac6e7d841a5516bb0b5ab4a

}//END_51c1a47c1ac6e7d841a5516bb0b5ab4a


void oldportal::fhe::hardware::mechatronics::StepMotor::process_request(const uint8_t* request, const uint16_t request_length, const uint8_t slave_address, const uint8_t modbus_function, modbus_t* modbus_ctx)
{//BEGIN_5b55e939e368cf5f2f98e49c2e3d2cf6
    assert (slave_address == MODBUS_BROADCAST_ADDRESS || slave_address == _modbus_address);

    // update registers in modbus mapping
    _modbus.saveToRegisterArray(_modbus_mapping);

    // call example:
    // uint16_t value = MODBUS_GET_INT16_FROM_INT8(query, header_length + 1);
    // modbus_reply_exception(ctx, query, MODBUS_EXCEPTION_SLAVE_OR_SERVER_BUSY);

    if (slave_address != MODBUS_BROADCAST_ADDRESS)
    {// default reply handler
        int result = modbus_reply(modbus_ctx, request, request_length, _modbus_mapping);
        if (result == -1)
            fprintf(stderr, "StepMotor::process_request() modbus_reply() error: %s\n", modbus_strerror(errno));
    }

    // update structures from registers in modbus mapping
    _modbus.loadFromRegisterArray(_modbus_mapping);
}//END_5b55e939e368cf5f2f98e49c2e3d2cf6

void oldportal::fhe::hardware::mechatronics::StepMotor::step()
{//BEGIN_139a1c7a4966eeccad82b1856e6ad1e1
    // update controller data
    //if (_modbus._controllerData._1_mode == 0)

    //TODO: update _controllerData

    //TODO: update device time


    // update motor state
    if (_modbus._driverData._1_mode != DRIVER_SERVO_IDLE)
    {
        // no activity in IDLE mode
    }
    else if ((_modbus._controllerData._1_mode == CTRLR_MODE_DIRECT_CONTROL || _modbus._controllerData._1_mode == CTRLR_MODE_NC_COMMANDS_FLOW)
    {
        if (_modbus._controllerData._1_mode == CTRLR_MODE_NC_COMMANDS_FLOW)
        {
            //TODO: check time and update current command status
        }

        // resolve current state

        if (_modbus._driverData._1_mode == DRIVER_SERVO_KEEP_POSITION)
        {
            // same motor position, no inertia (simplification)
        }
        else if (_modbus._driverData._1_mode == DRIVER_SERVO_CONTINUOUS_SPEED)
        {
            float angle_speed = _modbus._driverData._4_rotor_angle_start_speed;
            //TODO: update motor position
        }
        else if (_modbus._driverData._1_mode == DRIVER_SERVO_SPEED_AND_ACCELERATION)
        {
            float angle_speed = _modbus._driverData._4_rotor_angle_start_speed;
            //TODO: update motor position
        }
        else if (_modbus._driverData._1_mode == DRIVER_SERVO_SPEED_AND_ACCELERATION_TO_END_SPEED)
        {
            float angle_speed = _modbus._driverData._4_rotor_angle_start_speed;
            //TODO: update motor position
        }
        else if (_modbus._driverData._1_mode == DRIVER_SERVO_SPEED_TO_END_POSITION)
        {
            //TODO: update motor position
        }
        else if (_modbus._driverData._1_mode == DRIVER_SERVO_CONTINUOUS_FORCE)
        {
            //TODO: update motor position
        }
        else if (_modbus._driverData._1_mode == DRIVER_STEP_DIRECT)
        {
            if (abs(_modbus._driverData._10_rotor_angle_direct_step) == 1)
            {
                // update motor position
                // position +- step
                _modbus._driverDataInput._3_rotor_absolute_angle_position += _modbus._driverData._10_rotor_angle_direct_step;

                //stepMotorSetNextStep((int8_t) _modbus._driverData._10_rotor_angle_direct_step);

                _modbus._driverData._10_rotor_angle_direct_step = 0;                
            }

            if (_modbus._driverData._10_rotor_angle_direct_step != 0)
            {
                //TODO: report illegal parameters: direct step must be +-1 or 0.
            }
        }
    }


}//END_139a1c7a4966eeccad82b1856e6ad1e1

void oldportal::fhe::hardware::mechatronics::StepMotor::stepMotorSetNextStep(int8_t direction)
{//BEGIN_38c4d5678390d929b9d3d69b4d812cba
        // calculate shift
        int8_t microstep_scaler = 4;// full step
        if (_modbus._driverData._14_motor_step_scale == 2)
            microstep_scaler = 2;
        else if (_modbus._driverData._14_motor_step_scale == 4)
            microstep_scaler = 1;

        // update step mode data
//        step_motor_data.pwmMicroStepMode += microstep_scaler * direction;
//        if (step_motor_data.pwmMicroStepMode < 0)
//            step_motor_data.pwmMicroStepMode += 64;
//        if (step_motor_data.pwmMicroStepMode > 15)
//            step_motor_data.pwmMicroStepMode = step_motor_data.pwmMicroStepMode % 16;

        _currentStepStartTime = std::chrono::high_resolution_clock::now();

        // set PWM rates for new step position
        //StepMotorKeepPositionUpdatePWMRates();
}//END_38c4d5678390d929b9d3d69b4d812cba


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
