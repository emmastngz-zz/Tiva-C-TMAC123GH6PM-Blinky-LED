// 0x400F.E000, 0x608, RCGC
// 0x4002.5000, 0x400, DIR
// 0x4002.5000, 0x51C, DEN
// 0x4002.5000, 0x000, DATA

#define CLOCK_REGISTER 				(*((unsigned int *) 0x400FE608U))
#define DIRECTION_REGISTER		(*((unsigned int *) 0x40025400U))
#define ENABLE_REGISTER				(*((unsigned int *) 0x4002551CU))
#define DATA_REGISTER					(*((unsigned int *) 0x400253FCU))

	int delay;


int main()
{
	unsigned int *pt;
	
	CLOCK_REGISTER = 0x20U; 	// 0b 0000 0000 0000 0000 0000 0000 0010 0000 0x00000020 is equal to 0x20
	DIRECTION_REGISTER = 0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	ENABLE_REGISTER = 0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	
	while(1)
	{
	delay = 0;
	while(delay < 1000000)
	{
		DATA_REGISTER = 0X0CU; // color
		++delay;
	}
	
	delay = 0;
	
		while(delay < 1000000)
	{
		DATA_REGISTER = 0x00U;
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