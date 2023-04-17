#include "main.h"

void rev_string(char *s)
{
	int a;
	int a = s[0];
	int b;

	while (a != '\0')
	{
		a++;
	}
	a--;
	int c = a;
	for (b = 0; b < c; b++)
	{
		_putchar(s[a]);
		a--;
	}
}
