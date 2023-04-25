#include "main.h"
/**
 * factorial - calculate tha n!
 * @n: the input variable
 * Return: returne the resulte
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
