#include "main.h"

void more_numbers(void)
{
	int a = 0;
	int c;

	while (a <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar('1');
			}
			_putchar(c % 10 +'0');
		}
		_putchar('\n');
		a++;
	}
}
