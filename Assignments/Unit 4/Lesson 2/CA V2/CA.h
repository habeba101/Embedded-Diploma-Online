#ifndef _CA_H_
#define _CA_H_

#include "state.h"

enum
{
    CA_Waiting,
    CA_Driving
} state_id;

// decalre states functions CA
STATE_define(CA_Waiting);
STATE_define(CA_Driving);

// STATE pointer to function
extern void (*CA_state)();

#endif