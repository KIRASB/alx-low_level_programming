#include "main.h"
/**
 * _isdigit -this funcction check if the variable is a digit or not
 * @c: our variable
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
