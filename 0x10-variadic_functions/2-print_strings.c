#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print the givign dtrings
 * @separator: the serparator
 * @n: number of argumments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list nptr;
	unsigned int x;
	char *str;

	va_start(nptr, n);
	c = n;

	for (x = 0; x < c; x++)
	{
		str = va_arg(nptr, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		if (str == NULL)
		{
			printf("nil");
		}
		if (x != (c - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(nptr);
}
