#include <mega16.h>
#include <delay.h>

void light1(void);
void main(void)
{
DDRA=0xFF;
PORTA=0;

while (1)
{
        light1();       
}
}
void light1(void)
{
     PORTA=0b00000001;
    delay_ms(333);
    while(PORTA.7!=1)
    {
        PORTA = PORTA << 1;
        delay_ms(333);
    }  
}