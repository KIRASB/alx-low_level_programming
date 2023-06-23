#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - the function print the giving numbers
 * @separator: is the pointer to the char between the numbers
 * @n: is number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;

	if (separator == NULL)
	{
		return;
	}
	else
	{
		va_list nptr;
		unsigned int x;

		va_start(nptr, n);
		c = n;

		for (x = 0; x < c; x++)
		{
			printf("%s%d", separator, va_arg(nptr, int));
		}
		printf("\n");
	}
}
