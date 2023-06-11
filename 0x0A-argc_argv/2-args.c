#include "main.h"
#include <stdio.h>
/**
 * main - it prints all the argumments
 * @argc: the counter of argumments
 * @argv: array of  the argumments names
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
