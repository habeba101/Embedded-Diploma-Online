#include "CA.h"

void setup()
{
    // init all the driver
    // init IRQ
    // init HAL US_Driver  DC_Motor
    // init Block
    // set states pointers for each block
    CA_STATE = STATE(CA_Waiting);
}
int main()
{
    volatile int d;
    setup();
    while (1)
    {
        // call state for each block
        CA_STATE();
        // delay
        for (d = 0; d <= 10000; d++);
    }

    return 0;
}
