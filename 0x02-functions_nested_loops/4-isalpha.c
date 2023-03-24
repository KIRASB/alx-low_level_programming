#include "main.h"
/**
 * _isalpha - this function check if the input if it's a alphabet
 * @c: is a variable that countain the input
 * Return: always 0 (Succes)
 */
int _isalpha(int c)
{
	if (c >= 'z' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
