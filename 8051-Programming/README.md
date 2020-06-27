# 8051 Microcontroller programming in C

## Softwares Used

### 1. Keil IDE by ARM

### 2. Proteus Simulator 

## Procedure: Basic Integration between Keil and Proteus

### Keil IDE

* Introduction [link](includehelp.com/embedded-system/8051-microcontroller-programming-using-keil-uvision-ide.aspx)

* Download [link](keil.com/demo/eval/c51.htm)

* Device: AT89C51 or 8051

#### LED Blinking Program

```c
#include<reg51.h>
sbit LED= P1^0; //SFR (Special function register bit) // Pin 0 of Port 1
void init(void); // P1 as output port
void delay(int a);

int main(void)
{
init();
while(1)
{
LED=0;
delay(30000);
LED=1;
delay(30000);
}
}

void init(void)
{
P1 = 0x00; // P1= 0000 0000 // Port 1 as output -- 0 implies output pins 1 implies input pins!
}

void delay(int a)
{
int i;
for(i=0;i<a;i++); // 1375 == 1 ms
}
```

### Proteus Simulator

* Introduction [link](https://instructables.com/id/Interfacing-8051-Microcntroller-With-162-Lcd-in-Pr)

* Download [link](https://8051projects.net/t57699/electronics/proteus-78-sp2-long-live-download-links.htm)

#### How to simulate the circuit

* Open Proteus

* P - Pick device - AT89C51

* P - Pick device - Animated LED

* Double click 8051 board and add hex file from Keil.

* Draw wire between 1 and 2 positive with pin and negative with ground!
Right click - place - terminal - ground!

