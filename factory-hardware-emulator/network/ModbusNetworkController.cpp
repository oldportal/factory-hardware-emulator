


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::network::ModbusNetworkController::ModbusNetworkController(std::weak_ptr< oldportal::fhe::EmulatorApplication > application)

{//BEGIN_2019c5510015ad3d8d2bcd7e203ed210
    _application = application;

    _modbus_ctx = nullptr;
    _modbus_mapping = nullptr;
    _query = nullptr;
}//END_2019c5510015ad3d8d2bcd7e203ed210



oldportal::fhe::network::ModbusNetworkController::~ModbusNetworkController()
{//BEGIN_3b0b6e57a9ab008d2eb65c6395d8f01e

}//END_3b0b6e57a9ab008d2eb65c6395d8f01e


void oldportal::fhe::network::ModbusNetworkController::init()
{//BEGIN_3b09a28375be1e7d2d8a78eaea0d11a9
    assert(_modbus_ctx == nullptr);
    assert(_modbus_mapping == nullptr);
    assert(_query == nullptr);

    _modbus_ctx = modbus_new_tcp("127.0.0.1", 1502);
    modbus_set_debug(_modbus_ctx, TRUE);


    //TODO: init()
}//END_3b09a28375be1e7d2d8a78eaea0d11a9

void oldportal::fhe::network::ModbusNetworkController::run()
{//BEGIN_8e94675d1917f794cd825b81ee5da0b1
    //TODO: run()
}//END_8e94675d1917f794cd825b81ee5da0b1


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE