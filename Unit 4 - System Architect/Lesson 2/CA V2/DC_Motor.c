#include "DC_Motor.h"

unsigned int speed;

void (*DC_state)();

void DC_init()
{
    // init DC
    printf("DC init \n");
}
void DC_Set_Motor(int s)
{
    speed = s;
    DC_state = STATE(DC_busy);
    printf("CA -----------> DC DC_Motor() \n");
}

STATE_define(DC_idle)
{
    // state action
    DC_state_id = DC_idle;
    // call next state
    DC_state = STATE(DC_idle);
    // print current speed
    printf("DC_idle state : speed %d \n ", speed);
}
STATE_define(DC_busy)
{
    // state action
    DC_state_id = DC_busy;
    // call next state
    DC_state = STATE(DC_idle);
    // print current speed
    printf("DC_busy state : speed %d \n ", speed);
}