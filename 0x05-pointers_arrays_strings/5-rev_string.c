#include "main.h"

void rev_string(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		a++;
		*s++;
	}
	s--;
	for  (b = 0; b < a; b++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
