# LCD1
LCD(16x2) interfacing with LPC2148

main.c file contain embedded c code to interface LPC2148 to LCD(Liquid Crystal Display). 


Here Lcd is interfaced in 8 bit mode. 


LCD_CMD function is to send command


LCD_DATA is used to send data to LCD


LCD_INIT function is used to initialise LCD in 8 bit mode and some initial setting


main1.c file contains code to interface LCD to LPC2148 in 4 bit mode.
LCD.H file must be needed to run this code. It is header file which contains functions to run code.
