#include "Uart.h"

unsigned char string_buffer[100] = "learn_in_depth : Habeba";

int main()
{

    Uart_Send_String(string_buffer);
}
