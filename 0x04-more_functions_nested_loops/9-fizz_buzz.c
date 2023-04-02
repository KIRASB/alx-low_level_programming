#include <stdio.h>
/**
 * main - prints fizz buzz and numbres
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf ("FizzBuzz");
		}
		if ( a % 3 == 0)
		{
			printf ("Fizz");
		}
		if (a % 5 == 0)
		{
			printf ("Buzz");
		}
		else 
		{
			printf ("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
