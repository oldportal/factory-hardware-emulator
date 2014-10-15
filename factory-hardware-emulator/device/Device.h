
#ifndef H_f77adeaed10a9e7f7df37115ab8aea50_H
#define H_f77adeaed10a9e7f7df37115ab8aea50_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
General modbus slave embedded device emulator.
*/
namespace oldportal 
{
namespace fhe 
{
namespace device 
{

class Device
{
// constructors:
public:
Device();


public:
virtual ~Device();

// members:

public:
uint8_t _modbus_address;


//methods:

/**
Process Modbus request.
If message is not BROADCAST then send response.
*/
public:
virtual void process_request(const uint8_t* request, const uint16_t length, const uint8_t slave_address, const uint8_t function, const modbus_t* modbus_ctx) = 0;

public:
virtual void step() = 0;



//child groups:


//child classes:


//BEGIN_USER_SECTION_INSIDE_CLASS_DECLARATION

//END_USER_SECTION_INSIDE_CLASS_DECLARATION


};
}// namespace oldportal
}// namespace fhe
}// namespace device


//BEGIN_USER_SECTION_AFTER_CLASS_DECLARATION

//END_USER_SECTION_AFTER_CLASS_DECLARATION


#endif // H_f77adeaed10a9e7f7df37115ab8aea50_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_f77adeaed10a9e7f7df37115ab8aea50_INLINES_H
#define H_f77adeaed10a9e7f7df37115ab8aea50_INLINES_H

#endif // H_f77adeaed10a9e7f7df37115ab8aea50_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES