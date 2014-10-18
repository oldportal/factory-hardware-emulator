


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::HardwareDevice::HardwareDevice()

{//BEGIN_1a4b1400bcfb2aebd9c4a2b219e725eb
    assert(_modbus_mapping == nullptr);

    _modbus_mapping = modbus_mapping_new(0, 0, MODBUS_MAX_READ_REGISTERS, MODBUS_MAX_RW_WRITE_REGISTERS);
}//END_1a4b1400bcfb2aebd9c4a2b219e725eb



oldportal::fhe::hardware::HardwareDevice::~HardwareDevice()
{//BEGIN_5004a49203b0a14ade8e214d41f338f3
    if (_modbus_mapping != nullptr)
    {
         modbus_mapping_free(_modbus_mapping);
        _modbus_mapping = nullptr;
    }
}//END_5004a49203b0a14ade8e214d41f338f3


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE