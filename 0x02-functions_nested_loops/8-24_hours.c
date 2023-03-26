#include "main.h"
/**
 * jack_bauer - this function print evry minute in the day
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a < 24 ; a++)
	{
		for (b = 0 ; b < 60  ; b++)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
		}
	}
}
