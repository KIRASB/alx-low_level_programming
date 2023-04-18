#include "main.h"

void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int c = 0;
	while (a != '\0')
	{
		a++;
		b++;
	}
	a--;
	for (c < b; c++)
	{
		_putchar(s[b]);
		b--;
	}
		
