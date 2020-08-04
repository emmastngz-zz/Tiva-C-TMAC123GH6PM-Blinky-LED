#include "TM4C123.h"                    // Device header

#include "delay.h"

#define RED 		(1U<<1)
#define BLUE 		(1U<<2)
#define GREEN 	(1U<<3)

int main()
{
	SYSCTL -> RCGCGPIO   = 	0x20U; 	// 0b 0000 0000 0000 0000 0000 0000 0010 0000 0x00000020 is equal to 0x20
	GPIOF -> DIR    = 	(RED|BLUE|GREEN);							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	GPIOF -> DEN 		= 	(RED|BLUE|GREEN);							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	GPIOF -> DATA 	|= 	GREEN;
	
	while(1)
	{
	GPIOF -> DATA |= BLUE; // Enable bits
	delay(1000000);
	GPIOF -> DATA  &= (~BLUE); // Disable bits
	delay(500000);
	}

	/*
	0x02U  Red
	0x04U  Blue
	0x08U  Green
	0x0EU  White
	0x0AU	 Yellow
	0X0CU	 Cyan
		1 			1				1 			0
	green		Blue		Red
	*/
}
