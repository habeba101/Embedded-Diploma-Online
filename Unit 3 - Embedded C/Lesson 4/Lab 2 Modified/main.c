
#define SYSCTL_RCG2_R_BASE 0x400FE000
#define GPIO_PORTF_BASE 0x40025000

#define SYSCTL_RCG2_R *((volatile unsigned long *)(SYSCTL_RCG2_R_BASE + 0x108))
#define GPIO_PORTF_DATA_R *((volatile unsigned long *)(GPIO_PORTF_BASE + 0x3FC))
#define GPIO_PORTF_DIR_R *((volatile unsigned long *)(GPIO_PORTF_BASE + 0x400))
#define GPIO_PORTF_DEN_R *((volatile unsigned long *)(GPIO_PORTF_BASE + 0x51C))

int main()
{
	volatile unsigned long delay_count;
	SYSCTL_RCG2_R = 0x20;

	for (delay_count = 0; delay_count < 2000; delay_count++)
		;

	GPIO_PORTF_DIR_R |= 1 << 3;
	GPIO_PORTF_DEN_R |= 1 << 3;

	while (1)
	{
		GPIO_PORTF_DATA_R |= 1 << 3;
		for (delay_count = 0; delay_count < 200000; delay_count++)
			;
		GPIO_PORTF_DATA_R &= ~(1 << 3);
		for (delay_count = 0; delay_count < 200000; delay_count++)
			;
	} 

	return 0;
}
