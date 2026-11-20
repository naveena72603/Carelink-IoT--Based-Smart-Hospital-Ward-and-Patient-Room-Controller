#include "delay_millisecond.h"

#define LCD_D 0xf<<14
#define RS 1<<12
#define E  1<<13

void LCD_INIT(void);
void LCD_COMMAND(unsigned char);
void LCD_DATA(unsigned char);
void LCD_STRING(unsigned char *s);
 


void LCD_INIT(void)
{
IODIR0=LCD_D|RS|E;
LCD_COMMAND(0x01);
LCD_COMMAND(0x02);
LCD_COMMAND(0x0c);
LCD_COMMAND(0x28);
}
void LCD_COMMAND(unsigned char cmd)
{
IOCLR0=LCD_D;
IOSET0=(cmd&0xf0)<<10;
IOCLR0=RS;
IOSET0=E;
delay_millisecond(2);
IOCLR0=E;

IOCLR0=LCD_D;
IOSET0=(cmd&0x0f)<<14;
IOCLR0=RS;
IOSET0=E;
delay_millisecond(2);
IOCLR0=E;
}

void LCD_DATA(unsigned char d)
{
IOCLR0=LCD_D;
IOSET0=(d&0xf0)<<10;
IOSET0=RS;
IOSET0=E;
delay_millisecond(2);
IOCLR0=E;

IOCLR0=LCD_D;
IOSET0=(d&0x0f)<<14;
IOSET0=RS;
IOSET0=E;
delay_millisecond(2);
IOCLR0=E;
}

 void LCD_STRING(unsigned char *s)
 {
 while(*s)
 LCD_DATA(*s++);
 }

