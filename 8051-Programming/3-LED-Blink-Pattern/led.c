#include<reg51.h>

void delay(int value )
{
int i,j;
 for(i=0;i< =value;i++)
 for(j=0;j< =5;j++);
}

void main()
{
int count=0;

while(1){

//Pattern one led blink and moves up to 8th one - Then moves back one by one to 1st
while(count!=2){ 
P1=0x01;delay(5000);P1=0x02;delay(5000);P1=0x04;delay(5000);
P1=0x08;delay(5000);P1=0x10;delay(5000);P1=0x20;delay(5000);
P1=0x40;delay(5000);P1=0x80;delay(1000);P1=0x80;delay(5000);
P1=0x40;delay(5000);P1=0x20;delay(5000);P1=0x10;delay(5000);
P1=0x08;delay(5000);P1=0x04;delay(5000);P1=0x02;delay(5000);
P1=0x01;delay(5000);
count++;
}

count=0;
//Eight leds divided in to two half
while(count!=2) // Four leds pattern same task like the above one with two halfs
{
delay(5000);P1=0x18;delay(5500);P1=0x24;delay(1500);P1=0x42;
delay(5500);P1=0x11;delay(5500);P1=0x11;delay(5500);P1=0x42;
delay(5500);P1=0x24;delay(5500);P1=0x18;delay(5500);
count++;
}

count=0;
while(count!=2) //Leds blinking from the middle
{
delay(5000);P1=0x18;delay(5000);P1=0x3C;delay(5000);P1=0x7E;
delay(5000);P1=0xFF;delay(5000);P1=0x00;delay(5000);P1=0x81;
delay(5000);P1=0xC3;delay(5000);P1=0xE7;delay(5000);P1=0xFF;
delay(5000);
count++;
}

//Random blinking pattern
delay(3000);P1=0x20;delay(3000);P1=0x01;delay(3400);P1=0x04;
delay(3400);P1=0x80;delay(3400);P1=0x04;delay(3400);P1=0x02;
delay(3400);P1=0x10;delay(3400);P1=0x40;delay(3400);P1=0x80;
delay(3400);P1=0x08;delay(3400);P1=0x04;delay(3400);P1=0x01;
delay(3400);P1=0x10;delay(3400);P1=0x80;delay(3400);P1=0x20;
delay(3400);
count=0;
}

}