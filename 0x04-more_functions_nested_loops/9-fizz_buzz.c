#include "main.h"
#include <stdio.h>
/**
 * main - prints fizz buzz and numbres
 * Return: just 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf( "FizzBuzz");
		}
		else if (a % 3 == 0 && a % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i == 1)
		{
			printf("%d", a);
		}
		else
		{
			printf(" %d ", a);
		}
	}
	printf("\n");
	return (0);
}
