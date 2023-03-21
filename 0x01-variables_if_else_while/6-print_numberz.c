#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
		putchar(k);
	}
	putchar('\n');
	return (0);
}
