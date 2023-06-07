#include "main.h"
/**
 * _print_rev_recursion - the function print the input revertionally
 * @s: the input
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
