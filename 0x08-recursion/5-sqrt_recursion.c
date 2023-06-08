#include "main.h"
/**
 * _sqrt_recursion - find the squar root
 * @n: the input
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (real_sqrt_root(n, 0));
	}
}
/**
 * real_sqrt_root - the main function
 * @a: the root number
 * @n: the squar
 * Return: the squar
 */
int real_sqrt_root(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (real_sqrt_root(n, a + 1));
	}
}
