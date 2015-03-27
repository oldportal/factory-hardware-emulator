
#ifndef H_d9fda041f90db0fedb4ff2958ff0f1bd_H
#define H_d9fda041f90db0fedb4ff2958ff0f1bd_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION
#define CTRL_COMMANDFLOW_QUEUE_LENGTH 4
#define CTRL_COMMAND_MAX_CUSTOM_DATA_LENGTH 24
#define CTRL_COMMANDFLOW_RESULT_QUEUE_LENGTH 8
#define CTRL_COMMAND_RESULT_MAX_CUSTOM_DATA_LENGTH 16

typedef enum
{
	CTRL_COMMAND_RESULT_SUCCESS = 0
} ctrlCommandResultCode;
//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Command for real time scheduled execution in command flow.
*/
namespace oldportal 
{
namespace fhe 
{
namespace network 
{
namespace scheduled 
{

class ScheduledCommandRequest
{
// constructors:


// members:

public:
NETWORK_TIME _start_network_time;
public:
uint32_t _id;
/**
planned execution time in milliseconds
*/
public:
uint32_t _planned_execution_time;
public:
uint32_t _previous_command_id;
/**
queue number (individual for modbus device)
*/
public:
uint32_t _queue_number;
/**
command custom data
*/
public:
uint8_t _custom_data[CTRL_COMMAND_MAX_CUSTOM_DATA_LENGTH];
public:
uint8_t _type;


//methods:


//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace network
}// namespace scheduled


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_d9fda041f90db0fedb4ff2958ff0f1bd_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_d9fda041f90db0fedb4ff2958ff0f1bd_INLINES_H
#define H_d9fda041f90db0fedb4ff2958ff0f1bd_INLINES_H

#endif // H_d9fda041f90db0fedb4ff2958ff0f1bd_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES