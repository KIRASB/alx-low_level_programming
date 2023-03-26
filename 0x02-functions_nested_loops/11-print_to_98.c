#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - is a function print  numbers from int n to 98
 * @n: is the int
 * Return: is 0 (done)
 */
void print_to_98(int n)
{
	int a;
	int b;

	for (a = n ; a < 98 ; a++)
	{
		printf("%d, ", a);
	}
	for (b = n ; b > 98 ; b--)
	{
		printf("%d, ", b);
	}
	printf("98");
	putchar('\n');
}
