#include<reg51.h>
sfr DAC = 0x80; //Port P0 address
void main(){
   int sin_value[12] = {128,192,238,255,238,192,128,64,17,0,17,64};
   int i;
   while(1){
      //infinite loop for LED blinking
      for(i = 0; i<12; i++){
         DAC = sin_value[i];
      }
   }
}