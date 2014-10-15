


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


void oldportal::fhe::hardware::mechatronics::StepMotor::process_request(const uint8_t* request, const uint16_t request_length, const uint8_t slave_address, const uint8_t modbus_function, const modbus_t* modbus_ctx)
{//BEGIN_5b55e939e368cf5f2f98e49c2e3d2cf6
    assert (slave_address == MODBUS_BROADCAST_ADDRESS || slave_address == _modbus_address);

    //TODO: process_request() 

    if (slave_address == MODBUS_BROADCAST_ADDRESS)
        return;// no reply for request with MODBUS_BROADCAST_ADDRESS

    //modbus_reply(_modbus_ctx, _query, received_length, _modbus_mapping);

}//END_5b55e939e368cf5f2f98e49c2e3d2cf6

void oldportal::fhe::hardware::mechatronics::StepMotor::step()
{//BEGIN_139a1c7a4966eeccad82b1856e6ad1e1
    //step() - TODO
}//END_139a1c7a4966eeccad82b1856e6ad1e1


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE