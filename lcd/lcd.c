#include <mega16.h>
#include <alcd.h>
#include <delay.h>
#include <stdio.h>
 char st[20];
 int counter=0;

void main(void)
{
DDRA=0;
PORTA=0;
lcd_init(20);
while (1)
      { 
            sprintf(st,"i am counting %d",counter);
            lcd_puts(st);
            delay_ms(300);
            lcd_clear();  
            counter++;
      }
}
