#include "main.h"
/**
 * print_last_digit - this function print the last degit of the number
 * @t: the is the int
 * Return: THE LAST DIGIT
 */

int print_last_digit(int t)
{
	int z;

	z = t % 10;
	if (t >= 0)
	{
		z = z;
	}
	if (t < 0)
	{
		z = -z;
	}
	_putchar(z + '0');
	return (z);
}
