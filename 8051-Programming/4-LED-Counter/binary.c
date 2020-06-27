#include<reg52.h>
void delay()
{
unsigned int i,j;
for(i=0;i< 500;i++)
for(j=0;j< 1000;j++);
}

void main()
{
while(1){
delay(); P1=0x01;  
delay(); P1=0x02;
delay(); P1=0x03;  
delay(); P1=0x04;
delay(); P1=0x05; 
delay(); P1=0x06;
delay(); P1=0x07; 
delay(); P1=0x08;
delay(); P1=0x09; 
delay(); P1=0x0A;
delay(); P1=0x0B; 
delay(); P1=0x0C;
delay(); P1=0x0D; 
delay(); P1=0x0E;
delay(); P1=0x0F; 
delay();
}
}