#include <stdio.h>
#include "main.h"
/**
 * main - add numbers
 * @argc: number of argumments
 * @argv: array of strings
 * Return: depends on each stuation
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		int a;
		int z = 0;
		int x;
		int n = 0;

		for (a = 1; a < argc; a++)
		{
			if (*argv[a] >= '0' && *argv[a] <= '9')
			{
				x = _atoi(argv[a]);
				n = x;
				z = z + n;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", z);
	}
	return (0);
}
/**
 * _atoi - it make sur that the input in int
 * @s: the string number
 * Return: n the intiger after fixing
 */
int _atoi(char *s)
{
	int b = 0;
	int c = 0;
	int d = 1;
	int n;

	if (*s == '-')
	{
		d = -1;
		s++;
	}
	if (*s >= '0' && *s <= '9')
	{
		int counter = 0;

		while (*s != '\0')
		{
			counter++;
			s++;
		}
		s = s - counter;
		while (*s != '\0')
		{
			for (b = 0; b <= 9; b++)
			{
				if (b == ((int)(*s)) - '0')
				{
					break;
				}
			}
			c = c * 10 + b;
			s++;
		}
	}
	n = c * d;
	return (n);
}
