#include <stdio.h>
#include "main.h"

int _strlen_recursion(char *s)
{
	int a = 0;

	if(*s != '\0')
	{
		a++;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
