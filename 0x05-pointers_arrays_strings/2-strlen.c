#include "main.h"
/**
 * _strlen - give us the long of the centence we had
 * @s: thr string
 * Return: the number of strings
 */
int _strlen(char *s)
{
	int r = 0;

	while (*s != '/0')
	{
		r++;
		*s++;
	}
	return (r);
}
