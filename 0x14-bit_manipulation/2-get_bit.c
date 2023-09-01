#include "main.h"
/**
 * get_bit - returns the value of a bit b the index
 * @n: inputs
 * @index: the index
 * Return: the value of the spessific bit
 */

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		int valu = 0;
		int bit = 0;

		valu = n >> index;
		bit = valu & 1;
		return (bit);
	}
}
