#include "main.h"
/**
 * _print_rev_recursion - print the string in a reversed way
 * @s: the pointer of the string hihi
 */
void _print_rev_recursion(char *s)
{
	int b = 0;

	while (*s != '\0')
	{
		s++;
		b++;
	}
	s--;
	while (b > 0)
	{
		b--;
		_putchar(*s);
		s--;
	}
}
