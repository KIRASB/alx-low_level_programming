#include "main.h"

/**
 * set_bit - set 1 on a spessific position
 * @n: pointer
 * @index: index
 * Return : returns 1 if it's work or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index);
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);
		return(1);
	}
}
