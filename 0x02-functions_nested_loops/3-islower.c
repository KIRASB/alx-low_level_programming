#include "main.h"
/**
 * _islower print 1 if the the letter in lowercase and 0 in otherwise
 * @c is car variable
 * if c has a lower case value the function return 1
 * if not the function return 0
 * and a new line at the end
 */
int _islower(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
