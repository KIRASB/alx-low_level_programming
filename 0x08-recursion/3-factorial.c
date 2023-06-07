#include "main.h"
/**
 * factorial - the function calculate the facturial of a number
 * @n: the input variable
 * Return: the resulte
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
