#include "main.h"
/**
 * puts2 - a function print a letter and jump
 * @str: a crazy fking pointer
 * Return: idk
 */
void puts2(char *str)
{
	int c = 0;
	int d;
	char *p = str;

	while (*p != '\0')
	{
		p++;
		c++;
	}
	for (d = 0; d < c; d++)
	{

		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
	}
	_putchar('\n');
}
