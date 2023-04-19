#include "main.h"

void puts2(char *str)
{
	int a = 0;
	int b = str[a];
	while (b != '\0')
	{
		if (b % 2 == 0)
		{
			_putchar(str[a]);
			a++;
		}
		a++
	}
}
