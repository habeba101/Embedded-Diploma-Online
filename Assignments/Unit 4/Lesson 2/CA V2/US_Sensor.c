#include "US_Sensor.h"

void (*US_state)();

unsigned int distance = 0;

int generate_random(int l, int r, int count)
{
    // This will generate random numbers in range l to r
    int i;
    for (i = 0; i < count; i++)
    {
        int rand_num = (rand() % (r - l + 1) + l);
        return rand_num;
    }
}

void US_init()
{
    // init US Sensor
    // Call US driver or functions
    printf("US Init \n");
}
STATE_define(US_Busy)
{
    // state action
    US_state_id = US_Busy;
    // read from the us
    distance = generate_random(45, 55, 1);
    //-----------------
    printf("US_Busy state : distance = %d \n", distance);

    US_distance_set(distance);
    US_state = STATE(US_Busy);
}