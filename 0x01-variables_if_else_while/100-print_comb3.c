#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 0 ; x > 90 ; x++)
	{
		if (x < 10)
		{
			putchar('0');
		}
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
