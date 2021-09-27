#include<reg51.h>
sbit I1 = P1^0;
sbit I2 = P1^1;
sbit I3 = P1^2;
sbit I4 = P1^3;
sbit S1 = P1^4;
sbit S2 = P1^5;
main()
{
	S1 = 1;
	S2 = 1;
	while(1)
	{
		if(S1 == 0)
		{
			I1 = 1;
			I2 = 0;
			I3 = 0;
			I4 = 1;
		}
		else if (S2 == 0)
		{
			I1 = 0;
			I2 = 1;
			I3 = 1;
			I4 = 0;
		}
		else
		{
			I1 = 0;
			I2 = 0;
			I3 = 0;
			I4 = 0;
		}
	}
}