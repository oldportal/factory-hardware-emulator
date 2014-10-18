
#ifndef H_004d4b3eeb36a7102150b5dbb725acf4_H
#define H_004d4b3eeb36a7102150b5dbb725acf4_H



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

struct StepMotorDriverCalculationConstants
:  public virtual oldportal::fhe::hardware::modbus::ModbusRegistersMapping
{
// constructors:
public:
StepMotorDriverCalculationConstants();


// members:

/**
Step is calculation unit of angle measure
*/
public:
uint16_t _1_steps_per_revolution;
/**
Rotor Inertia in rotor speed change (in steps per seconds) per torque unit
*/
public:
uint16_t _2_rotor_intertia;
/**
Moment elasticity - speed acceleration for angle error fix, in 0.1 % of speed error.
*/
public:
uint16_t _3_moment_elasticity;
/**
skolzenie (ENABLE_AC_INDUCTION_SIMPLE)
*/
public:
uint16_t _4_default_s_in_angle_steps;


//methods:

public:
virtual void loadFromRegisterArray();

public:
virtual void saveToRegisterArray();



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


#endif // H_004d4b3eeb36a7102150b5dbb725acf4_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_004d4b3eeb36a7102150b5dbb725acf4_INLINES_H
#define H_004d4b3eeb36a7102150b5dbb725acf4_INLINES_H

#endif // H_004d4b3eeb36a7102150b5dbb725acf4_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES