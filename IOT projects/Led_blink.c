//Make the led blink
#include<reg51.h>
int i;
sbit led = P1^1;
#define delay for(i = 0;i<10000;i++)
main()
{
	while(1)
	{
		if (led==1) {
			led = 0; }
		else {
			led = 1; }
		
		delay;
	}
}
	