#include "stdint.h"
typedef volatile unsigned int vuint32_t;
#define RCC_BASE 0x40021000
#define GPIO_BASE 0x40010800
#define RCC_APB2ENR *(volatile uint32_t *)(RCC_BASE + 0x18)
#define GPIO_CRH *(volatile uint32_t *)(GPIO_BASE + 0x04)
#define GPIO_ODR *(volatile uint32_t *)(GPIO_BASE + 0x0C)
#define RCC_IOPAEN (1 << 2)
#define GPIOA13 (1UL << 13)
typedef union
{
	vuint32_t all_fields;
	struct
	{
		vuint32_t reserved : 13;
		vuint32_t p_13 : 1;

	} pin;
} R_ODR_t;

volatile R_ODR_t *R_ODR = (volatile R_ODR_t *)(GPIO_BASE + 0x0C);
unsigned char g_variables[3] = {1, 2, 3};
unsigned char const const_variables[3] = {1, 2, 3};
volatile int i;
int main(void)
{
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIO_CRH &= 0xFF0FFFFF;
	GPIO_CRH |= 0x00200000;

	while (1)
	{
		R_ODR->pin.p_13 = 1;
		for (i = 0; i < 50000; i++)
			; // delay for now
		R_ODR->pin.p_13 = 0;
		for (i = 0; i < 50000; i++)
			; // delay for now
	}
}
