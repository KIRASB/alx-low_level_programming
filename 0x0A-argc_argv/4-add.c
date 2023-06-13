#include <stdlib.h>
#include <stdio.h>
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
				x = atoi(argv[a]);
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
