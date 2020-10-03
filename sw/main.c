#include <general.h>
/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer - Move to WDT file

	ConfigureInitMCU();

	return 0;
}
