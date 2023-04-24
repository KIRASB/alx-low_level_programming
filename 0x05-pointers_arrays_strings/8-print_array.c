#include <stdio.h>
#include "main.h"
/**
 * print_array - print what v been stored in the arrays
 * @a: intput array
 * @n: the number stored in the array a
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[b]);
	}
	printf("\n");
}
