


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::mechatronics::StepMotorModbus::StepMotorModbus()

{//BEGIN_6ca1ad45040297580b922c50c0922d36
    // set structure sizeof
    _modbus_registers_sizeof = _controllerData.getModbusRegistersSizeof() +
            _driverCalculationConstants.getModbusRegistersSizeof() +
            _driverData.getModbusRegistersSizeof() +
            _driverDataInput.getModbusRegistersSizeof() +
            _systemLog[0].getModbusRegistersSizeof()*CONTROLLER_LOG_SIZE;

    // set members structures sizeof
    _controllerData._modbus_registers_start_index = 0;
    _driverCalculationConstants._modbus_registers_start_index = _controllerData.getModbusRegistersSizeof();
    _driverData._modbus_registers_start_index = _controllerData.getModbusRegistersSizeof() +
            _driverCalculationConstants.getModbusRegistersSizeof();
    _driverDataInput._modbus_registers_start_index = _controllerData.getModbusRegistersSizeof() +
            _driverCalculationConstants.getModbusRegistersSizeof() +
            _driverData.getModbusRegistersSizeof();

    for (int index = 0; index < CONTROLLER_LOG_SIZE; index++)
    {
        _systemLog[index]._modbus_registers_start_index = _controllerData.getModbusRegistersSizeof() +
                _driverCalculationConstants.getModbusRegistersSizeof() +
                _driverData.getModbusRegistersSizeof() +
                _driverDataInput.getModbusRegistersSizeof() +
                _systemLog[0].getModbusRegistersSizeof()*index;
    }
}//END_6ca1ad45040297580b922c50c0922d36


void oldportal::fhe::hardware::mechatronics::StepMotorModbus::loadFromRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_78fc3366898319efcb31f2aa857f113b
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    _controllerData.loadFromRegisterArray(modbus_mapping);
    _driverCalculationConstants.loadFromRegisterArray(modbus_mapping);
    _driverData.loadFromRegisterArray(modbus_mapping);
    _driverDataInput.loadFromRegisterArray(modbus_mapping);
    for (int index = 0; index < CONTROLLER_LOG_SIZE; index++)
    {
        _systemLog[index].loadFromRegisterArray(modbus_mapping);
    }
}//END_78fc3366898319efcb31f2aa857f113b

void oldportal::fhe::hardware::mechatronics::StepMotorModbus::saveToRegisterArray(const modbus_mapping_t* modbus_mapping)
{//BEGIN_b71c476c1b34c76ccb5e14bfbb49777a
    // check index range with modbus_mapping->nb_registers:
    assert(_modbus_registers_start_index < modbus_mapping->nb_registers);
    assert(_modbus_registers_start_index + getModbusRegistersSizeof() <= modbus_mapping->nb_registers);

    _controllerData.saveToRegisterArray(modbus_mapping);
    _driverCalculationConstants.saveToRegisterArray(modbus_mapping);
    _driverData.saveToRegisterArray(modbus_mapping);
    _driverDataInput.saveToRegisterArray(modbus_mapping);
    for (int index = 0; index < CONTROLLER_LOG_SIZE; index++)
    {
        _systemLog[index].saveToRegisterArray(modbus_mapping);
    }
}//END_b71c476c1b34c76ccb5e14bfbb49777a


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE
