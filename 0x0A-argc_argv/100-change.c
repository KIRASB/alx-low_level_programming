#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: if 0  then Success,if 1 them Error
 */
int main(int argc, char *argv[])
{
	int n, g, r;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	r = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (g = 0; g < 5 && n >= 0; g++)
	{
		while (n >= coins[g])
		{
			r++;
			n -= coins[g];
		}
	}

	printf("%d\n", r);
	return (0);
}
