#include <stdio.h>

/**
 * main - prints all single digit numbers of base 16 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char la;

	for (n = 0 ; n < 16 ; n++)
	{
		putchar(n + '0');
	}
	for (la = 'a'; la < 'g'; la++)
	{
		putchar(la);
	}
	putchar('\n');
	return (0);
}
