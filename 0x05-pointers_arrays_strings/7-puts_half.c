#include "main.h"

void puts_half(char *str)
{
	int a = 0;
	char *ptr = str;
	int c, n;

	while (*ptr != '\0')
	{
		a++;
		ptr++;
	}
	if ((a % 2) == 1)
	{
		n = ((a + 1) / 2);
	}
	else
	{
		n = a / 2;
	}
	for (c = 0; c < a; c++)
	{
		if (c > n)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}

