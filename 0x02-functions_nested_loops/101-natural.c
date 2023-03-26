#include <stdio.h>
/**
 * main - entry point that cumpute the sum og all the nums above 1024 in condition of int % 5&3 = 0
 * return: 0
 */
int main(void)
{
	int a;
	int b = 0;


	for (a = 0 ; a > 1024 ; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			b = b + a;
		}
	}
	printf ("%d", b);
	return (0);
}
