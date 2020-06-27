#include<reg51.h> 
#define led P0
sbit sw1=P2^0;
sbit sw2=P2^1;
sbit sw3=P2^2;
sbit sw4=P2^3;
unsigned char ch[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
//void delay (int);
void display (unsigned long int);
void sdelay (char);

/*void delay (int d)
{
	unsigned char i;
	for(;d>0;d--)
	{
		for(i=250;i>0;i--);
		for(i=248;i>0;i--);
	}
}*/

void sdelay (char d)
{
	for(;d>0;d--);
}

void display (unsigned long int n)
{
	led=ch[n/1000];
	sw1=1;
	sdelay(30);
	sw1=0;
	
	led=ch[(n/100)%10];
	sw2=1;
	sdelay(30);
	sw2=0;
	
	led=ch[(n/10)%10];
	sw3=1;
	sdelay(30);
	sw3=0;
	
	led=ch[n%10];
	sw4=1;
	sdelay(30);
	sw4=0;
}

void main()
{
	unsigned long int i=1;
	
	while(1)
	{
		i=++i;
		display(i);
		if(i==9999)
			i=0;
	}
}