
#ifndef H_0f6e4015274bfd80b54c5ad84bfe7a8b_H
#define H_0f6e4015274bfd80b54c5ad84bfe7a8b_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Result of command execution.
*/
namespace oldportal 
{
namespace fhe 
{
namespace network 
{
namespace scheduled 
{

class ScheduledCommandResult
{
// constructors:


// members:

public:
NETWORK_TIME _start_network_time;
public:
uint32_t _id;
public:
uint32_t _previous_command_id;
/**
queue number (individual for modbus device)
*/
public:
uint32_t _queue_number;
/**
esult execution time in milliseconds
*/
public:
uint32_t _result_execution_time;
/**
command custom result data
*/
public:
uint8_t _result_data[CTRL_COMMAND_RESULT_MAX_CUSTOM_DATA_LENGTH];
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


#endif // H_0f6e4015274bfd80b54c5ad84bfe7a8b_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_0f6e4015274bfd80b54c5ad84bfe7a8b_INLINES_H
#define H_0f6e4015274bfd80b54c5ad84bfe7a8b_INLINES_H

#endif // H_0f6e4015274bfd80b54c5ad84bfe7a8b_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES