


//BEGIN_USER_SECTION_BEFORE_MASTER_INCLUDE

//END_USER_SECTION_BEFORE_MASTER_INCLUDE


#include "../../factory-hardware-emulator.h"

//BEGIN_USER_SECTION_AFTER_MASTER_INCLUDE

//END_USER_SECTION_AFTER_MASTER_INCLUDE


oldportal::fhe::hardware::mechatronics::MotorSettings::MotorSettings()

{//BEGIN_2541b038464227043a96c274b108daaf
    _default_start_position = 0;

    // Logic limits
    _max_logic_position = 1000;
    _min_logic_position = -1000;
    _logic_limits_enabled = true;

    // Matherial or electric limits
    _max_end_stopper_position = 1200;
    _min_end_stopper_position = -1200;
    _end_stoppers_enabled = true;
}//END_2541b038464227043a96c274b108daaf


//BEGIN_USER_SECTION_AFTER_GENERATED_CODE

//END_USER_SECTION_AFTER_GENERATED_CODE