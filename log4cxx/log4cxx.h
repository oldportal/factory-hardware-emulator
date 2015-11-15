
#ifndef H_019b234be6dd1a219e4c388d524438a6_H
#define H_019b234be6dd1a219e4c388d524438a6_H




//BEGIN_PROJECT_COMMENT
/**
Apache log4cxx is a logging framework for C++ patterned after Apache log4j, which uses Apache Portable Runtime for most platform-specific code and should be usable on any platform supported by APR. Apache log4cxx is licensed under the Apache License, an open source license certified by the Open Source Initiative.

Almost every large application includes its own logging or tracing API. Inserting log statements into code is a low-tech method for debugging it. It may also be the only way because debuggers are not always available or applicable. This is usually the case for multithreaded applications and distributed applications at large.

Experience indicates that logging is an important component of the development cycle. It offers several advantages. It provides precise emcontext/em about a run of the application. Once inserted into the code, the generation of logging output requires no human intervention. Moreover, log output can be saved in persistent medium to be studied at a later time. In addition to its use in the development cycle, a sufficiently rich logging package can also be viewed as an auditing tool.

Logging does have its drawbacks. It can slow down an application. If too verbose, it can cause scrolling blindness. To alleviate these concerns, log4cxx is designed to be reliable, fast and extensible. Since logging is rarely the main focus of an application, the log4cxx API strives to be simple to understand and to use.
*/
//END_PROJECT_COMMENT


//BEGIN_USER_SECTION_0

//END_USER_SECTION_0




// class predeclarations:
namespace log4cxx 
{
class BasicConfigurator;
class Logger;
class LoggerPtr;
class PropertyConfigurator;

}// namespace log4cxx


// Make sure the inline implementations are skipped
#ifdef OBJECTS_BUILDER_PROJECT_INLINES
#undef OBJECTS_BUILDER_PROJECT_INLINES
#endif

// Include project classes, for declarations
#include "BasicConfigurator.h"
#include "Logger.h"
#include "LoggerPtr.h"
#include "PropertyConfigurator.h"


// global members
namespace log4cxx 
{
// global variables declaration
}// namespace log4cxx


// global methods
namespace log4cxx 
{
// global methods declaration
}// namespace log4cxx


#define OBJECTS_BUILDER_PROJECT_INLINES
// Inline functions:


// Include classes again, for inline implementation:
#include "BasicConfigurator.h"
#include "Logger.h"
#include "LoggerPtr.h"
#include "PropertyConfigurator.h"




//BEGIN_USER_SECTION_1

//END_USER_SECTION_1

#endif // H_019b234be6dd1a219e4c388d524438a6_H