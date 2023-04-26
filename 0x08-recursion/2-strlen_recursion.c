#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - give the long of a string
 * @s: is the input string
 * Return: return is the long
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a++;
		a = a + _strlen_recursion(s + 1);
	}
	return (a);
}
