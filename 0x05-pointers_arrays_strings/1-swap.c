#include "main.h"
/**
 * swap_int - it swaps the values of b and a
 * @b: the first value or second
 * @a: other value
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
