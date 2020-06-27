#include<reg52.h>
void delay()
{
unsigned int i,j;
for(i=0;i< 500;i++)
for(j=0;j< 1000;j++);
}
void main()
{
unsigned int count;
while(1){
for(count=0;count<=255;count++)
P1=count;
delay();
}
}