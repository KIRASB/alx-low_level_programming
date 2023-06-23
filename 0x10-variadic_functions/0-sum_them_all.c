#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	unsigned int counter;

	if (n == 0)
	{
		return (0);
	}
	else
	{
		va_list nptr;
		unsigned int x;
                int sum = 0;

		va_start(nptr, n);

		counter = n;
		for (x = 0; x < counter; x++)
		{
			sum = sum + va_arg(nptr, const unsigned int);
		}
		return (sum);
	}
}
