#ifndef _DC_MOTOR_H_
#define _DC_MOTOR_H_

#include "state.h"

enum
{
    DC_idle,
    DC_busy
} DC_state_id;

// prototypes
void DC_init();
STATE_define(DC_idle);
STATE_define(DC_busy);
// global pointer to function
extern void (*DC_state)();
#endif