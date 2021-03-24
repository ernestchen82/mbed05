#include "LCD.h"

int main()
{
      LCD_init();                     // call the initialise function
      display_to_LCD(0x31);           // ‘H’
      display_to_LCD(0x30);           // ‘E’
      display_to_LCD(0x37);           // ‘L’
      display_to_LCD(0x30);           // ‘L’
      display_to_LCD(0x33); 
      display_to_LCD(0x30);
      display_to_LCD(0x30);
      display_to_LCD(0x31);
      display_to_LCD(0x36);          // ‘O’
      //for(char x=0x30;x<=0x39;x++)
      //{
            //display_to_LCD(x);      // display numbers 0-9
      //}
}