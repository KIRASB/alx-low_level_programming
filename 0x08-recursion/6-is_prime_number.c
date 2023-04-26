#include "main.h"
int the_real_function(int n, int a);
/**
 * is_prime_number - same role as the real one
 * @n: the input num
 * Return: same thing
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return(the_real_function(n, n - 1));
}
/**
 * the_real_function - find out if the number prime or not
 * @n: the input number
 * @i: number for  help
 * Return: 1 if it's prime and 0 if it's  not
 */
int the_real_function(int n, int a)
{
	if (a == 1)
	{
		return(1);
	}
	if (n % a == 0 && a > 0)
	{
		return(0);
	}
	return(the_real_function(n, a - 1));
}
