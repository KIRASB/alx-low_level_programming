#include <stdio.h>
/**
 * main -Entry point
 * followed by a new line
 * Return: Aways 0 (Succes)
 */
int main(void)
{
	char la = 'a';

	while (la  <= 'z')
	{
		if (la != 'e' && la != 'q')
		{
			putchar(la);
	}
	la++;
	}
	putchar('\n');
	return (0);
	}
