#ifndef _STATE_H_
#define _STATE_H_

#include "stdio.h"
#include "stdlib.h"

// Automatic State function generated
#define STATE_define(_state_fun_) void ST_##_state_fun_()
#define STATE(_state_fun_) ST_##_state_fun_

#endif