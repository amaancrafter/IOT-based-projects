#include<reg51.h>
sbit led = P1^1;
sbit sw = P1^2;
main()
{
	led = 0;
	sw = 1;
	while(1)
	{
		if(sw == 0)
		{
			led = 1;
		}
		else
		{
			led = 0;
		}
	}
}
	