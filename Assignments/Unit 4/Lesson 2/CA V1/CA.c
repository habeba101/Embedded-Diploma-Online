#include "CA.h"

int CA_Speed = 0;
int CA_Distance = 0;
int CA_Threshold = 50;
// State pointer to function
void (*CA_STATE)();
int US_Get_Distance_Random(int l, int r, int count);

STATE_define(CA_Waiting)
{
    // STATE NAME
    state_id = CA_Waiting;
    // STATE ACTION
    CA_Speed = 0;
    // DC_motor(CA_Speed);
    // Event check
    // US_Get_distance(CA_Distance)
    CA_Distance = US_Get_Distance_Random(45, 55, 1);
    (CA_Distance <= CA_Threshold) ? (CA_STATE = STATE(CA_Waiting)) : (CA_STATE = STATE(CA_Driving));
    printf("CA_Waiting State: distance = %d , speed = %d \n", CA_Distance, CA_Speed);
}
STATE_define(CA_Driving)
{
    // STATE NAME
    state_id = CA_Driving;
    // STATE ACTION
    CA_Speed = 30;
    // DC_motor(CA_Speed);
    // Event check
    // US_Get_distance(CA_Distance)
    CA_Distance = US_Get_Distance_Random(45, 55, 1);
    (CA_Distance > CA_Threshold) ? (CA_STATE = STATE(CA_Driving)) : (CA_STATE = STATE(CA_Waiting));
    printf("CA_Driving State: distance = %d , speed = %d \n", CA_Distance, CA_Speed);
}

int US_Get_Distance_Random(int l, int r, int count)
{
    // This will generate random numbers in range l to r
    int i;
    for (i = 0; i < count; i++)
    {
        int rand_num = (rand() % (r - l + 1) + l);
        return rand_num;
    }
}
