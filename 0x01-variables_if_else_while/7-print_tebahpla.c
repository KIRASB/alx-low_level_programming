#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
