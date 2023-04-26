#include "main.h"
int the_real_function(int n, int i);
/**
 * _sqrt_recursion - calculat the natural square root of a number.
 * @n: the input variable
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (the_real_function(n, 0));
}
/**
 * the_real_function - calculate the root
 * @i: the root squar
 * @n: the original number
 * Return: the square root
 */
int the_real_function(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
		return (the_real_function(n, i + 1));
}
