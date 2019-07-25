#include"lpc21xx.h"
#include<stdio.h>
#include"LCD.h"

int main()
{
 IODIR0 &= 0xFFFFFFFF;
	 LCD_INIT();// Initialse lcd function to operate in 4bit mode 
    delay(1000);
	  LCD_PRINT("LCD in 4 bit");// print data on 1st row
	  LCD_CMD(0xC8);// Command to go to second line
	  LCD_PRINT("MODE"); // print data on second row
	
	  delay(10000);
	 
}
