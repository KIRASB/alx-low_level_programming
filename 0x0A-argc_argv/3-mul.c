#include "main.h"
#include <stdio.h>
/**
 * atoi - it make sur that the input in int
 * @s: the string number
 * Return: n the intiger after fixing
 */
int atoi(char *s)
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
/**
 * main - calculate the result of multiplication
 * @argc: the number of argumments
 * @argv: the array of strings
 * Return: 1 if there is an error and 0 if there is not
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b, x;

		a = atoi(argv[1]);
		b = atoi(argv[2]);
		x = a * b;
		printf("%d\n", x);
	}
	return (0);
}
