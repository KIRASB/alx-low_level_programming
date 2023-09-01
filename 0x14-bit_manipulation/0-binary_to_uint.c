#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert from binary to decimal
 * @b: the incoming binary
 *
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;
	int cal;

	if (b == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; b[i]; i++)
		{
			if (b[i] < '0' || b[i] > '1')
			{
				return (0);
			}
			cal = b[i] - '0';
			result = result * 2 + cal;
		}
		return (result);
	}
}
