
#ifndef H_e7e73e9110b66c48518c6e5fe5ee2f5f_H
#define H_e7e73e9110b66c48518c6e5fe5ee2f5f_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION
#define CONTROLLER_LOG_SIZE 10
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

class SystemLogReport
:  public virtual oldportal::fhe::hardware::modbus::ModbusRegistersMapping
{
// constructors:
public:
SystemLogReport();


// members:

/**
error type
*/
public:
uint16_t _1_error_code;
/**
count of this error type reports
*/
public:
uint16_t _2_count;
/**
custom parameter value of last report
*/
public:
uint16_t _4_last_parameter;
/**
device time of this error type last report
*/
public:
uint32_t _3_last_time;


//methods:

public:
virtual void loadFromRegisterArray(const modbus_mapping_t* modbus_mapping);

public:
virtual void saveToRegisterArray(const modbus_mapping_t* modbus_mapping);



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


#endif // H_e7e73e9110b66c48518c6e5fe5ee2f5f_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_e7e73e9110b66c48518c6e5fe5ee2f5f_INLINES_H
#define H_e7e73e9110b66c48518c6e5fe5ee2f5f_INLINES_H

#endif // H_e7e73e9110b66c48518c6e5fe5ee2f5f_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES