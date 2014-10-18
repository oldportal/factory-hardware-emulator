
#ifndef H_d69daaac0e1f6da7c70e719db0b9a129_H
#define H_d69daaac0e1f6da7c70e719db0b9a129_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Object with mapping internal variables to array of modbus protocol registers.
*/
namespace oldportal 
{
namespace fhe 
{
namespace hardware 
{
namespace modbus 
{

class ModbusRegistersMapping
{
// constructors:
public:
ModbusRegistersMapping();


// members:

public:
uint16_t _modbus_registers_start_index;


//methods:

public:
virtual void loadFromRegisterArray() = 0;

public:
virtual void saveToRegisterArray() = 0;



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


#endif // H_d69daaac0e1f6da7c70e719db0b9a129_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H
#define H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H

#endif // H_d69daaac0e1f6da7c70e719db0b9a129_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES