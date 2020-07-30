// 0x400F.E000, 0x608, RCGC
// 0x4002.5000, 0x400, DIR
// 0x4002.5000, 0x51C, DEN
// 0x4002.5000, 0x000, DATA

int main()
{
	unsigned int *pt;
	pt = (unsigned int *) 0x400FE608U;
	*pt = 0x20U; 	// 0b 0000 0000 0000 0000 0000 0000 0010 0000 0x00000020 is equal to 0x20
	pt = (unsigned int *) 0x40025400U;
	*pt = 0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	pt = (unsigned int *) 0x4002551CU;
	*pt = 0x0EU;							// 0b 0000 0000 0000 0000 0000 0000 0000 1110 
	pt = (unsigned int *) 0x400253FCU ; // 0x400253FCU to eneable all data register
	*pt = 0x0AU; // color
	/*
	0x02U  Red
	0x04U  Blue
	0x08U  Green
	0x0EU  White
	0x0AU	 Amarillo
		1 			1				1 			0
	green		Blue		Red
	*/
	
	
	
	
}




