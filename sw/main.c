#include <general.h>
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer - Move to WDT file

	ConfigureInitMCU();

	P1DIR |= 0x01;

	while(1)
	{
	    P1OUT = 0x01;
        __delay_cycles(90000);
        P1OUT = ~0x01;
        __delay_cycles(90000);
	}
}
