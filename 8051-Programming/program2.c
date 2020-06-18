#include<reg51.h>
sbit <<variable1>>= P1^0; //SFR (Special function register bit) // Pin 0 of Port 1

void <init function>(void); // P1 as output port

int main(void)
{
<init function>();
while(1)
{
<variable1>=0;
delay(30000);
<variable1>=1;
delay(30000);
//////////////////////////////////
LED = 0x0f;
delay()
LED= 0xf0;

//odd even
//shift
////Left shift
led = 0x01;
delay();
for(i=0;i<=7;i++)
{
Led=led<<1;
delay();
}
//rotate
// rotate left (led<<1 | 0x01);
/////////////////////////////////
}
}

void <<init function>>(void)
{
P1 = 0x00; // P1= 0000 0000 // Port 1 as output -- 0 implies output pins 1 implies input pins!
}

void delay(int a)
{
int i;
for(i=0;i<a;i++); // 1375 == 1 ms
}
