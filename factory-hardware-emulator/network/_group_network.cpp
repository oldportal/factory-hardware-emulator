


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


log4cxx::LoggerPtr oldportal::fhe::network::logger = log4cxx::Logger::getLogger("oldportal.fhe.network");


uint32_t oldportal::fhe::network::CalculateTimeInterval(uint32_t current_clock, uint32_t last_clock)
{//BEGIN_41105f0659a56af4a21f833ec6e6050d
    if (current_clock >= last_clock)
		return current_clock - last_clock;
	else
		return current_clock + (UINT32_MAX - last_clock);
}//END_41105f0659a56af4a21f833ec6e6050d

uint32_t oldportal::fhe::network::GetSystemTime()
{//BEGIN_b58814517c9bf090f2e7c7af607dd52e

    static NetworkClock clock;

    // total time uptime in milliseconds
    NETWORK_TIME time_interval = clock.getCurrentNetworkTime();

    // shorted time interval
    uint32_t ret = time_interval % UINT32_MAX;

    return ret;
}//END_b58814517c9bf090f2e7c7af607dd52e



//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE