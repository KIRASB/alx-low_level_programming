#include "main.h"
/**
 * _strlen_recursion - the function gives the long og a string
 * @s: the input
 * Return: the long
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
