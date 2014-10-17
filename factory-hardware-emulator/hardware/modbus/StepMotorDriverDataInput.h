
#ifndef H_94c3b71621b13a1e272ce34e9f30f179_H
#define H_94c3b71621b13a1e272ce34e9f30f179_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Data for servo driver state monitoring throught Modbus input registers
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace modbus 
{

struct StepMotorDriverDataInput
{
// constructors:
public:
StepMotorDriverDataInput();


// members:

/**
rotor angle speed in steps per second
*/
public:
int16_t _1_rotor_angle_speed;
/**
rotor angle acceleration in steps per second
*/
public:
int16_t _2_rotor_angle_acceleration;
/**
rotor calculated (planned for execution) current angle speed in steps per second
*/
public:
int16_t _4_rotor_planned_angle_speed;
/**
rotor calculated (planned for execution) current torque. 

Not applicable for step motors.
*/
public:
int16_t _5_rotor_planned_angle_torque;
public:
int16_t _6_motor_temperature;
/**
rotor angle position in steps
*/
public:
int32_t _3_rotor_absolute_angle_position;


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


#endif // H_94c3b71621b13a1e272ce34e9f30f179_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H
#define H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H

#endif // H_94c3b71621b13a1e272ce34e9f30f179_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES