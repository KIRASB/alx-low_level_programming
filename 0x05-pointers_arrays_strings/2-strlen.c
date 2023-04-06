#include "main.h"
/**
 * _strlen - give us the long of the centence we had
 * @s: thr string
 * Return: the number of strings
 */
int _strlen(char *str)
{
	int r = 0;

	while (*str != '/0')
	{
		r++;
		*str++;
	}
	return (r);
}
