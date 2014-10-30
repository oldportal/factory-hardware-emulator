


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::EmulatorApplication::EmulatorApplication()

{//BEGIN_ea638a630e3f154ea1765cc75499beb9
    _device_time.init();
}//END_ea638a630e3f154ea1765cc75499beb9



oldportal::fhe::EmulatorApplication::~EmulatorApplication()
{//BEGIN_115cf4dbc8e7176e8418286d160f009d

}//END_115cf4dbc8e7176e8418286d160f009d


NETWORK_TIME oldportal::fhe::EmulatorApplication::getDeviceTime()
{//BEGIN_dedda9891bd731f76fc71b7d0093e1f8
    return _device_time.getCurrentNetworkTime();
}//END_dedda9891bd731f76fc71b7d0093e1f8


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE