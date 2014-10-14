


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
    _socket = -1;
}//END_2019c5510015ad3d8d2bcd7e203ed210



oldportal::fhe::network::ModbusNetworkController::~ModbusNetworkController()
{//BEGIN_3b0b6e57a9ab008d2eb65c6395d8f01e
    if (_query != nullptr)
        free(_query);

    if (_socket != -1) {
        close(_socket);
    }

    if (_modbus_mapping != nullptr)
        modbus_mapping_free(_modbus_mapping);

    if (_modbus_ctx != nullptr)
    {
        modbus_close(_modbus_ctx);
        modbus_free(_modbus_ctx);
    }
}//END_3b0b6e57a9ab008d2eb65c6395d8f01e


void oldportal::fhe::network::ModbusNetworkController::init()
{//BEGIN_3b09a28375be1e7d2d8a78eaea0d11a9
    assert(_modbus_ctx == nullptr);
    assert(_modbus_mapping == nullptr);
    assert(_query == nullptr);

    _modbus_ctx = modbus_new_tcp("127.0.0.1", 1502);
    modbus_set_debug(_modbus_ctx, TRUE);

    _query = (uint8_t*)malloc(MODBUS_TCP_MAX_ADU_LENGTH);

    _socket = modbus_tcp_pi_listen(_modbus_ctx, 1);
    modbus_tcp_pi_accept(_modbus_ctx, &_socket);


    //TODO: init()
}//END_3b09a28375be1e7d2d8a78eaea0d11a9

void oldportal::fhe::network::ModbusNetworkController::run()
{//BEGIN_8e94675d1917f794cd825b81ee5da0b1
    assert(_modbus_ctx);
    assert(_modbus_mapping);
    assert(_query);

    //TODO: run()
}//END_8e94675d1917f794cd825b81ee5da0b1


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
