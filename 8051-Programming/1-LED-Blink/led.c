#include<reg51.h>
sbit LED= P1^0; //SFR (Special function register bit) // Pin 0 of Port 1

void cct_init(void); // P1 as output port

int main(void)
{
cct_init();
while(1)
{
LED=0;
delay(30000);
LED=1;
delay(30000);
}
}

void cct_init(void)
{
P1 = 0x00; // P1= 0000 0000 // Port 1 as output -- 0 implies output pins 1 implies input pins!
}

void delay(int a)
{
int i;
for(i=0;i<a;i++); // 1375 == 1 ms
}
