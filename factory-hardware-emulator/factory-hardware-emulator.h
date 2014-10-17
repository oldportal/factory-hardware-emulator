
#ifndef H_fb313121fe57e0646771a031b4e0fd1f_H
#define H_fb313121fe57e0646771a031b4e0fd1f_H




//BEGIN_PROJECT_COMMENT
/**
Emulate factory embedded Modbus network with embedded device controllers.

For:
- Testing and development purposes.
- Factory MES CNC programs verification.
- Factory MES tasks verification.

*/
//END_PROJECT_COMMENT


//BEGIN_USER_SECTION_0
// C Standard Libraries
#include <cstdint>

// diagnostics
#include <cassert>
#include <cerrno>
#include <stdexcept>

// C++ Standard Libraries
#include <memory>
#include <string>
#include <atomic>
#include <array>
#include <queue>
#include <map>
#include <vector>
#include <thread>
#include <mutex>
#include <chrono>
#include <limits>
#include <typeinfo>
#include <csignal>

// Boost
#include <boost/date_time/posix_time/posix_time.hpp>

#include <boost/crc.hpp>

#include <boost/property_tree/ptree.hpp>

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

// Third party libraries
#include <modbus/modbus.h>
#include <modbus/modbus-rtu.h>

//END_USER_SECTION_0


//BEGIN_TYPE_DECLARATION_12a3f5a7f8c363b6a6ba95729499e214 NETWORK_TIME
typedef uint64_t NETWORK_TIME;
//END_TYPE_DECLARATION_12a3f5a7f8c363b6a6ba95729499e214 NETWORK_TIME
//BEGIN_TYPE_DECLARATION_656354ee5fc21c11e57bf6aa268df51b int16_t

//END_TYPE_DECLARATION_656354ee5fc21c11e57bf6aa268df51b int16_t
//BEGIN_TYPE_DECLARATION_3319d7fb96913b6df79f6e41b0cf3c5b int32_t

//END_TYPE_DECLARATION_3319d7fb96913b6df79f6e41b0cf3c5b int32_t
//BEGIN_TYPE_DECLARATION_470dc447b5d28c6118aeec5dfb774469 int64_t

//END_TYPE_DECLARATION_470dc447b5d28c6118aeec5dfb774469 int64_t
//BEGIN_TYPE_DECLARATION_eca6ac20a41e554764c38376960d1938 int8_t

//END_TYPE_DECLARATION_eca6ac20a41e554764c38376960d1938 int8_t
//BEGIN_TYPE_DECLARATION_15b4a7c72e42802c0243269250ce30d9 modbus_mapping_t
/* libmodbus mapping */
//END_TYPE_DECLARATION_15b4a7c72e42802c0243269250ce30d9 modbus_mapping_t
//BEGIN_TYPE_DECLARATION_6acb9435986539fcbffc1772eb77876d modbus_t
/* libmodbus context */
//END_TYPE_DECLARATION_6acb9435986539fcbffc1772eb77876d modbus_t


// class predeclarations:
namespace oldportal 
{
namespace fhe 
{
class EmulatorApplication;

namespace device 
{
class Device;

}// namespace device
namespace hardware 
{
class HardwareDevice;

namespace mechatronics 
{
class StepMotor;
struct StepMotorModbus;
class StepMotorSettings;

}// namespace mechatronics
namespace modbus 
{
struct ControllerData;
struct StepMotorDriverCalculationConstants;
struct StepMotorDriverData;
struct StepMotorDriverDataInput;
class SystemLogReport;

}// namespace modbus
}// namespace hardware
namespace network 
{
class ModbusNetworkController;

}// namespace network
}// namespace fhe
}// namespace oldportal


// Make sure the inline implementations are skipped
#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#undef OBJECTS_BUILDER_PROJECT_INLINES
#endif

// Include project classes, for declarations
#include "device/_group_device.h"
#include "hardware/_group_hardware.h"
#include "network/_group_network.h"
#include "EmulatorApplication.h"
#include "device/Device.h"
#include "hardware/HardwareDevice.h"
#include "hardware/mechatronics/StepMotorSettings.h"
#include "hardware/mechatronics/StepMotor.h"
#include "hardware/modbus/SystemLogReport.h"
#include "hardware/modbus/StepMotorDriverDataInput.h"
#include "hardware/modbus/StepMotorDriverData.h"
#include "hardware/modbus/StepMotorDriverCalculationConstants.h"
#include "hardware/modbus/ControllerData.h"
#include "hardware/mechatronics/StepMotorModbus.h"
#include "network/ModbusNetworkController.h"


// global members
namespace oldportal 
{
namespace fhe 
{
// global variables declaration
}// namespace fhe
}// namespace oldportal


// global methods
namespace oldportal 
{
namespace fhe 
{
// global methods declaration
}// namespace fhe
}// namespace oldportal


#define OBJECTS_BUILDER_PROJECT_INLINES
// Inline functions:


// Include classes again, for inline implementation:
#include "device/_group_device.h"
#include "hardware/_group_hardware.h"
#include "network/_group_network.h"
#include "EmulatorApplication.h"
#include "device/Device.h"
#include "hardware/HardwareDevice.h"
#include "hardware/mechatronics/StepMotorSettings.h"
#include "hardware/mechatronics/StepMotor.h"
#include "hardware/modbus/SystemLogReport.h"
#include "hardware/modbus/StepMotorDriverDataInput.h"
#include "hardware/modbus/StepMotorDriverData.h"
#include "hardware/modbus/StepMotorDriverCalculationConstants.h"
#include "hardware/modbus/ControllerData.h"
#include "hardware/mechatronics/StepMotorModbus.h"
#include "network/ModbusNetworkController.h"




//BEGIN_USER_SECTION_1

//END_USER_SECTION_1

#endif // H_fb313121fe57e0646771a031b4e0fd1f_H