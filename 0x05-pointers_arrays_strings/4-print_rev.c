#include "main.h"
/**
 * print_rev - the function write a string contravertuel
 * @s: is the pointer
 */
void print_rev(char *s)
{
	int l = 0;
	int m;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	s--;
	for (m = l; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	s--;
	_putchar('\n');
}
