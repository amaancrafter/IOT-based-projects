#include<reg51.h>
unsigned int a[10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x98} ;
void delay(unsigned int);

main()
{
	unsigned int i;
	while(1)
	{
		for(i=0;i<10;i++)
		{
			P1 = a[i];
			delay(1000000000);
		}
	}
}

void delay(unsigned int itime)
{
	unsigned int i,j;
	for(i=0;i<itime;i++);
	for(j=0;j<1275;j++);
}