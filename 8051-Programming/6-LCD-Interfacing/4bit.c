#include<reg52.h> //including sfr registers for ports of the controller
#include<lcd.h> //Can be download from bottom of this article

//LCD Module Connections
sbit RS = P0^0;
sbit EN = P0^1;
sbit D4 = P2^4;
sbit D5 = P2^5;
sbit D6 = P2^6;
sbit D7 = P2^7;
//End LCD Module Connections
void Delay(int a)
{
  int j;
  int i;
  for(i=0;i<a;i++)
  {
    for(j=0;j<100;j++)
    {
    }
  }
}
void main()
{
  int i;
  Lcd4_Init();
  while(1)
  {
    Lcd4_Set_Cursor(1,1);
    Lcd4_Write_String("electroSome LCD Hello World");
    for(i=0;i<15;i++)
    {
      Delay(1000);
      Lcd4_Shift_Left();
    }
    for(i=0;i<15;i++)
    {
      Delay(1000);
      Lcd4_Shift_Right();
    }
    Lcd4_Clear();
    Lcd4_Set_Cursor(2,1);
    Lcd4_Write_Char('e');
    Lcd4_Write_Char('S');
    Delay(2000);
  }
}