#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: the variable
 * Return: 1 if the c is upper case and 0 if it's lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
