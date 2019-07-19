#include"lpc21xx.h"
#include<stdio.h>
# define RS (1<<12);
# define RW (1<<13) ;
# define EN (1<<14)	;
# define data_pins (0xFF<<0) 

void delay(unsigned int count)
{

unsigned int i,j;
	for(i=0;i<100;i++)
		{
			for(j=0;j<count;j++)

				{

				}
		}
 }

void LCD_DATA(unsigned char data)
{
unsigned int temp;
temp=data;
 IOSET0=(temp<<4);
 IOSET0=RS;
 IOCLR0=RW;
 IOSET0=EN;
 delay(5);
 IOCLR0=EN;
 IOCLR0=(temp<<4);

}

void LCD_CMD(unsigned char data)						    
{
 unsigned int temp;
 temp=data;
 IOSET0=(temp<<4);
 IOCLR0=RS;
 IOCLR0=RW;
 IOSET0=EN;
 delay(5);
 IOCLR0=EN ;
 IOCLR0=(temp<<4);

}


unsigned char LCD_PRINT (unsigned char *x )
     {
	while(*x!='\0')
	{
		LCD_DATA(*x);
		x++;
	}	 
 }


unsigned char LCD_INIT (void)
{
 LCD_CMD(0X38);
 delay(15);
  LCD_CMD(0X0E);
 delay(15);
    LCD_CMD(0X01);
 delay(15);
   LCD_CMD(0X06);
 delay(15);
     LCD_CMD(0X80) ;
 delay(5);



}



int main()
{
 IODIR0= 0xFFFFFFFF;
	 LCD_INIT();
    delay(1000);
	  LCD_PRINT("LCD Interfacing");
	  LCD_CMD(0xC8);
	  LCD_PRINT("TO LPC 2148");
	
	  delay(10000);
	 
}
