
#ifndef H_77feb5a37936fae508e72d629c5698b8_H
#define H_77feb5a37936fae508e72d629c5698b8_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Step motor emulation.
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace mechatronics 
{

class StepMotor
:  public virtual oldportal::fhe::hardware::HardwareDevice
{
// constructors:
public:
StepMotor();


public:
virtual ~StepMotor();

// members:

public:
long _current_position;
public:
oldportal::fhe::hardware::mechatronics::StepMotorModbus __modbus;
public:
oldportal::fhe::hardware::mechatronics::StepMotorSettings _settings;


//methods:

/**
Process Modbus request.
If message is not BROADCAST then send response.
*/
public:
void process_request(const uint8_t* request, const uint16_t request_length, const uint8_t slave_address, const uint8_t modbus_function, const modbus_t* modbus_ctx);

public:
virtual void step();



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace hardware
}// namespace mechatronics


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_77feb5a37936fae508e72d629c5698b8_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_77feb5a37936fae508e72d629c5698b8_INLINES_H
#define H_77feb5a37936fae508e72d629c5698b8_INLINES_H

#endif // H_77feb5a37936fae508e72d629c5698b8_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES