#include "main.h"

/**
 * get_bit - prints the binary index representation of a number.
 * @n: number to search for
 * @index: the number of the index
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
