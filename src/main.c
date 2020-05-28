/*
  program to control 2x16 LCD Display with 4-bits data mode.
  Requirements:
• Connect the LCD Data Path to the higher 4 pins on PORTC.
• Connect the “RS” LCD pin to PD4.
• Connect the “R/W” LCD pin to PD5.
• Connect the “E” LCD pin to PD6.
• Display String message on the LCD Display.
*/
#include "lcd_driver.h"

int main(void)
{
	LCD_init(); 
	LCD_displayString("LCD IS READY");
	LCD_displayStringRowColumn(1,0,"4-Bit-Mode");
	
    for(;;){}
	
}


