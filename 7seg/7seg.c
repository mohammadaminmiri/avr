#include <io.h>
#include <delay.h>

void main(void)
{
DDRD = 0x0F;
while (1)
    {
        PORTD = 0;
        delay_ms(199);
        while(PORTD!=0x09) 
        {
            PORTD++;
            delay_ms(199);
        }
    }
}
