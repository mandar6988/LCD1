# define RS (1<<12)
# define EN (1<<14)	


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

 IOSET0=((temp&0XF0));
 IOSET0=RS;

 IOSET0=EN;
 delay(5);
 IOCLR0=EN;
 IOCLR0=((temp&0XF0));
 temp=data;
 IOSET0=((temp&0x0F)<<4);
 IOSET0=RS;

 IOSET0=EN;
 delay(5);
 IOCLR0=EN;
 IOCLR0=((temp&0x0F)<<4);
}

void LCD_CMD(unsigned char data)						    
{
 unsigned int temp;
 temp=data;
 IOSET0=((temp&0XF0));
 IOCLR0=RS;

 IOSET0=EN;
 delay(5);
 IOCLR0=EN ;
 IOCLR0=((temp&0XF0));
 temp=data;
 IOSET0=((temp&0x0F)<<4);
 IOCLR0=RS;

 IOSET0=EN;
 delay(5);
 IOCLR0=EN ;
 IOCLR0=((temp&0x0F)<<4);
}


unsigned char LCD_PRINT (unsigned char *temp )
     {
	while(*temp!='\0')
	{
		LCD_DATA(*temp);
		temp++;
	}	 
 }


unsigned char LCD_INIT (void)
{
 LCD_CMD(0X02);
 delay(15);
 LCD_CMD(0X28);
 delay(15);
  LCD_CMD(0X0C);
 delay(15);
    LCD_CMD(0X01);
 delay(15);
   LCD_CMD(0X06);
 delay(15);
     LCD_CMD(0X80) ;
 delay(5);



}

