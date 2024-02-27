#ifndef _US_Sensor_H_
#define _US_Sensor_H_

#include "state.h"

enum
{
    US_Busy
} US_state_id;
// prototypes
void US_init();
STATE_define(US_Busy);
// global pointer to function
extern void (*US_state)();

#endif