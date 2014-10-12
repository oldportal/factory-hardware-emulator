
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
#include "network/_group_network.h"
#include "EmulatorApplication.h"
#include "device/Device.h"
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
#include "network/_group_network.h"
#include "EmulatorApplication.h"
#include "device/Device.h"
#include "network/ModbusNetworkController.h"




//BEGIN_USER_SECTION_1

//END_USER_SECTION_1

#endif // H_fb313121fe57e0646771a031b4e0fd1f_H