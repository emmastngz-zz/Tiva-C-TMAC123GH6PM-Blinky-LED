#include "tm4c123gh6pm.h"

#define RED 		(1U<<1)
#define BLUE 		(1U<<2)
#define GREEN 	(1U<<3)

int main()
{
	int volatile delay;
	SYSCTL_RCGCGPIO_R   = 	0x20U; 	// 0b 0000 0000 0000 0000 0000 0000 0010 0000 0x00000020 is equal to 0x20
	GPIO_PORTF_DIR_R    = 	0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	GPIO_PORTF_DEN_R 		= 	0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	
	while(1)
	{
	delay = 0;
	while(delay < 1000000)
	{
		GPIO_PORTF_DATA_R  = RED; // color
		++delay;
	}
	
	delay = 0;
	
		while(delay < 1000000)
	{
		GPIO_PORTF_DATA_R  = 0x00U;
		++delay;
	}
	}

	/*
	0x02U  Red
	0x04U  Blue
	0x08U  Green
	0x0EU  White
	0x0AU	 Yellow
	0X0CU	 CYAN
		1 			1				1 			0
	green		Blue		Red
	*/
}
