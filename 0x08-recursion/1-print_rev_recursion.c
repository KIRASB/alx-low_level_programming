#include "main.h"
/**
 * _print_rev_recursion - print the string in a reversed way
 * @s: the pointer of the string hihi
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
