
#ifndef H_d7159df8f6a3d1d69e63c82405cf616d_H
#define H_d7159df8f6a3d1d69e63c82405cf616d_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**

*/
namespace oldportal 
{
namespace fhe 
{
namespace network 
{

class ModbusNetworkController
{
// constructors:
public:
ModbusNetworkController(std::weak_ptr< oldportal::fhe::EmulatorApplication > application);


public:
virtual ~ModbusNetworkController();

// members:

protected:
int _socket;
protected:
modbus_mapping_t* _modbus_mapping;
protected:
modbus_t* _modbus_ctx;
protected:
uint8_t* _query;
public:
std::weak_ptr< oldportal::fhe::EmulatorApplication > _application;


//methods:

public:
void init();

public:
void run();



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace network


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_d7159df8f6a3d1d69e63c82405cf616d_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_d7159df8f6a3d1d69e63c82405cf616d_INLINES_H
#define H_d7159df8f6a3d1d69e63c82405cf616d_INLINES_H

#endif // H_d7159df8f6a3d1d69e63c82405cf616d_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES