#include "main.h"
/**
 * int _isuppe - functionthat check if c is a upercase or lower
 * @c: the variable
 * Return: 1 if the c is upper case and 0 if it's lower
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
