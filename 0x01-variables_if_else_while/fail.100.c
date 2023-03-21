#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	for (x =  0; x < 100; x++)
	{
		for (y = 0; y < 100 ; y++)
		{
		if (x > y)
		{
			putchar(y);
			putchar(x);
			if (x != 99 || y != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		}
	}
	putchar('\n');
	return (0);
}
