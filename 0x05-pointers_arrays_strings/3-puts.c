#include "main.h"

void _puts(char *str)
{
	while ( *str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
