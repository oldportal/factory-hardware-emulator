
#ifndef H_1c569a58ca76cb5d525f8ff64b442fc9_H
#define H_1c569a58ca76cb5d525f8ff64b442fc9_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
OldPortal Project specific industrial network controlled embedded device emulator.

Support OldPortal Project specific Modbus protocol extensions.
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{

class HardwareDevice
:  public virtual oldportal::fhe::device::Device
{
// constructors:
public:
HardwareDevice();


public:
virtual ~HardwareDevice();

// members:

public:
bool _controllerTemperatureSupported;
public:
bool _deviceTemperatureSupported;
/**
Controller temperature in Celsius.
*/
public:
float _controllerTemperature;
/**
Device temperature in Celsius.
*/
public:
float _deviceTemperature;


//methods:

public:
virtual void step() = 0;



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace hardware


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_1c569a58ca76cb5d525f8ff64b442fc9_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_1c569a58ca76cb5d525f8ff64b442fc9_INLINES_H
#define H_1c569a58ca76cb5d525f8ff64b442fc9_INLINES_H

#endif // H_1c569a58ca76cb5d525f8ff64b442fc9_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES