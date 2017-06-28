#include <io.h>
#include <delay.h>
#define led PORTC.0

void main(void)
{
DDRC.0=1;
while (1)
    {
        delay_ms(200);
        led = 1;
        delay_ms(200);
        led = 0;
    }
}