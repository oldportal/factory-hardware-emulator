
#ifndef H_8e0c7283eb8146f999005c7b4b15f13f_H
#define H_8e0c7283eb8146f999005c7b4b15f13f_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**

*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace modbus 
{

struct ControllerData
{
// constructors:
public:
ControllerData();


// members:

/**
Driver cooling radiator temperature (in Celsius)
*/
public:
int16_t _6_radiator_temperature;
/**
Controller mode
*/
public:
uint16_t _1_mode;
/**
Error code
*/
public:
uint16_t _2_error_code;
/**
Maximum system step timeout, in milliseconds. The parameter for monitoring for logic errors
*/
public:
uint16_t _5_maximum_system_step_timeout;
/**
Maximum allowed radiator temperature (in Celsius)
*/
public:
uint16_t _7_maximum_radiator_temperature;
/**
Current device time (millisecond resolution) = uptime
*/
public:
uint32_t _3_device_time;
/**
Device time to network time shift (millisecond resolution)
*/
public:
uint32_t _4_network_time_shift;


//methods:


//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace hardware
}// namespace modbus


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_8e0c7283eb8146f999005c7b4b15f13f_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_8e0c7283eb8146f999005c7b4b15f13f_INLINES_H
#define H_8e0c7283eb8146f999005c7b4b15f13f_INLINES_H

#endif // H_8e0c7283eb8146f999005c7b4b15f13f_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES