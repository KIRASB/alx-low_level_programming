#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculat the power function of two intgers
 * @x: the base
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
		z = x * _pow_recursion(x, y - 1);
		return (z);
}
