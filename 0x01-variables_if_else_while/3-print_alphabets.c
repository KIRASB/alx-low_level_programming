#include <stdio.h>
int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
	putchar(al);
	}
	for (al = 'A' ; al <= 'Z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
	}
