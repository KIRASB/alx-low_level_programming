#include "main.h"
/**
 * _puts_recursion - the funcion that put the data
 * @s: the pointer of the input
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
