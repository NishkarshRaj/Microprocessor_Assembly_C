KEIL SOFTWARE! IDE

keil.com - 8051 Development Tools

includehelp.com/embedded-system/8051-microcontroller-programming-using-keil-uvision-ide.aspx

Product Downloads - C51
keil.com/demo/eval/c51.htm

AT89C51 or 8051
-----------------

Proteus Simulator!

includehelp.com/embedded-system/8051-microcontroller-programming-using-keil-uvision-ide.aspx

Proteus 7.8 download!! STUDENT VERSION
8051projects.net/t57699/electronics/proteus-78-sp2-long-live-download-links.htm

------------------------------------------------------

1. LED Blink

---------------------------------------------------

1. LED Blink!

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

--------------------------------------

How to simulate the circuit!!!

Open Proteus!!
P - Pick from Libraries!
Pick device!!

Keyword - 

1 at89c51

2 animated led - keep near p1.0

* Draw wire between 1 and 2 positive with pin and negative with ground!
Right click - place - terminal - ground!

PROGRAM FILES - hex file!! - Play!!

LINK!! instructables.coms

instructables.com/id/Interfacing-8051-Microcntroller-With-162-Lcd-in-Pr

----------------------------------------------

Program 2

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
