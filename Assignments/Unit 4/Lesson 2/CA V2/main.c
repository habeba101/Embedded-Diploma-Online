#include "CA.h"
#include "US_Sensor.h"
#include "DC_Motor.h"

void setup()
{
    // init all the driver
    // init IRQ
    US_init();
    DC_init();
    // set states pointers for each block
    US_state = STATE(US_Busy);
    DC_state = STATE(DC_idle);
    CA_state = STATE(CA_Waiting);
}
int main()
{
    volatile int d;
    setup();
    while (1)
    {
        // call state for each block

        US_state();
        CA_state();
        DC_state();
        // delay
        for (d = 0; d <= 10000; d++)
            ;
    }

    return 0;
}
