#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the decimal number as a binary
 * @n: the given binary code
 *
 */
void print_binary(unsigned long int n)
{
	int a;
	int x = 63;
	unsigned long int place;
	int c = 0;

	for (a = 64; a >= 1; a--)
	{
		place = n >> x;
		if (place & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c != 0)
		{
			_putchar('0');
		}
		x--;
	}
	if (c == 0)
	{
		_putchar('0');
	}
}
