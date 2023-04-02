#include "main.h"
/**
 * print_line -  functio prints lines
 * @n: the number of underscoerd
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

