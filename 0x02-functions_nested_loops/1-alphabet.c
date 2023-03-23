#include "main.h"


	/**
	 * print_alphabet - print all alphabet in lowercase
	 *
	 */
void print_alphabet(void)
{
	char c;

	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
