#include "main.h"
/**
 * is_prime_number - check if the number prime
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (real_prime(n, n - 1));
	}
}
/**
 * real_prime - the main function
 * @n: input
 * @b: input
 * Return: 1 or 0
 */
int real_prime(int n, int b)
{
	if (b == 1)
	{
		return (1);
	}
	if (n % b == 0 && b > 0)
	{
		return (0);
	}
	else
	{
		return (real_prime(n, b - 1));
	}
}
