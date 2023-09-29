#include "main.h"

/**
 * set_bit - change a given index of binary to 1
 * @n: pointer to the wanted numberr
 * @index: index
 *
 * Return: 1 for succ, -1 for fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
