#include<reg51.h>
unsigned int a[10] = {0x8C,0xFF,0xC0,0xFF,0xC0,0xFF,0xF1,0xFF,0x88,0xFF} ;
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