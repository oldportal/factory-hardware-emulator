
#ifndef H_5bf85a48706441615cffb539026d7c06_H
#define H_5bf85a48706441615cffb539026d7c06_H



//BEGIN_USER_SECTION_BEFORE_CLASS_DECLARATION

//END_USER_SECTION_BEFORE_CLASS_DECLARATION


/**
Time translation from network time to host system time.
*/
namespace oldportal 
{
namespace fhe 
{
namespace network 
{

struct NetworkClock
{
// constructors:
public:
NetworkClock();


// members:

/**
System time in milliseconds.
*/
private:
std::chrono::high_resolution_clock::time_point _network_start_time;


//methods:

public:
NETWORK_TIME getCurrentNetworkTime() const;

/**
Start time in system time,
*/
public:
std::chrono::high_resolution_clock::time_point getStartTime();

public:
void init();

public:
NETWORK_TIME toNetworkTime(std::chrono::high_resolution_clock::time_point system_time) const;

public:
std::chrono::high_resolution_clock::time_point toSystemTime(NETWORK_TIME network_time) const;



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


#endif // H_5bf85a48706441615cffb539026d7c06_H

#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#ifndef H_5bf85a48706441615cffb539026d7c06_INLINES_H
#define H_5bf85a48706441615cffb539026d7c06_INLINES_H

#endif // H_5bf85a48706441615cffb539026d7c06_INLINES_H
#endif //OBJECTS_BUILDER_PROJECT_INLINES