
#ifndef H_239d8fbde27418a9ec3aaa0ab347d3ef_H
#define H_239d8fbde27418a9ec3aaa0ab347d3ef_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**

*/
namespace oldportal 
{
namespace fhe 
{

class EmulatorApplication
{
// constructors:
public:
EmulatorApplication();


public:
virtual ~EmulatorApplication();

// members:

protected:
oldportal::fhe::network::NetworkClock _device_time;
public:
std::shared_ptr< oldportal::fhe::network::ModbusNetworkController > _network;
public:
std::vector< std::shared_ptr< oldportal::fhe::device::Device > > _devices;


//methods:

public:
NETWORK_TIME getDeviceTime();



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_239d8fbde27418a9ec3aaa0ab347d3ef_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_239d8fbde27418a9ec3aaa0ab347d3ef_INLINES_H
#define H_239d8fbde27418a9ec3aaa0ab347d3ef_INLINES_H

#endif // H_239d8fbde27418a9ec3aaa0ab347d3ef_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES