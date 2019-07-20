#include"lpc21xx.h"
#include<stdio.h>
#include"LCD.h"

int main()
{
 IODIR0 &= 0xFFFFFFFF;
	 LCD_INIT();
    delay(1000);
	  LCD_PRINT("LCD in 4 bit");
	  LCD_CMD(0xC8);
	  LCD_PRINT("MODE");
	
	  delay(10000);
	 
}
