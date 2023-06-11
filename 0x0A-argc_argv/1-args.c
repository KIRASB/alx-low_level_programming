#include <stdio.h>
#include"main.h"
/**
 * main - gives the number of argumments
 * @argc: the number of argumments
 * @argv: the strings but its agnored
 * Return: 0
 */
int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
