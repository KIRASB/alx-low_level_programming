#include "main.h"
/**
 * _puts - this function write the whole string just c by c
 * @str: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
