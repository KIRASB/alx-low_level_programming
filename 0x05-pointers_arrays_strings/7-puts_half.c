#include "main.h"
/**
 * puts_half - it puts the half of the string
 * @str: the input
 */
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
	for (c = n; c < a; c++)
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}

