#include "main.h"
/**
 * _pow_recursion - the function calculate the power
 * @y: the power
 * @x: the number
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
