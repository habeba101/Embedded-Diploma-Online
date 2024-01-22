#include "Uart.h"

#define UARTT0DR *((volatile unsigned int *const)((unsigned int *)0x101f1000))

void Uart_Send_String(unsigned char *P_tx_String)
{

	while (*P_tx_String != '\0')
	{

		UARTT0DR = (unsigned int)(*P_tx_String);
		P_tx_String++;
	}
}