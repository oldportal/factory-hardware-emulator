


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::device::Device::Device()

{//BEGIN_ebc65e7e592a893e49073a2f6ff2b82f
    _modbus_address = 1;
    _modbus_mapping = nullptr;
}//END_ebc65e7e592a893e49073a2f6ff2b82f



oldportal::fhe::device::Device::~Device()
{//BEGIN_eac95b71c80fb5385e787ce949ad3adc
    if (_modbus_mapping != nullptr)
    {
         modbus_mapping_free(_modbus_mapping);
        _modbus_mapping = nullptr;
    }
}//END_eac95b71c80fb5385e787ce949ad3adc


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
