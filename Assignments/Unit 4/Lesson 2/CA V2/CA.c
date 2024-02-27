#include "CA.h"

int CA_Speed = 0;
int CA_Distance = 0;
int CA_Threshold = 50;
// State pointer to function
void (*CA_state)();

void US_distance_set(int d)
{
    CA_Distance = d;
    (CA_Distance <= CA_Threshold) ? (CA_state = STATE(CA_Waiting)) : (CA_state = STATE(CA_Driving));
    printf("US SEND DISTANCE TO CA = %d \n", CA_Distance);
}

STATE_define(CA_Waiting)
{
    // STATE NAME
    state_id = CA_Waiting;
    // STATE ACTION
    CA_Speed = 0;
    DC_Set_Motor(CA_Speed);
    printf("CA_Waiting State: distance = %d , speed = %d \n", CA_Distance, CA_Speed);
}
STATE_define(CA_Driving)
{
    // STATE NAME
    state_id = CA_Driving;
    // STATE ACTION
    CA_Speed = 30;
    DC_Set_Motor(CA_Speed);
    printf("CA_Driving State: distance = %d , speed = %d \n", CA_Distance, CA_Speed);
}
