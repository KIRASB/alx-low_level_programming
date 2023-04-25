#include <stdio.h>
#include "main.h"
/**
 */
int _pow_recursion(int x, int y)
{
	int z;
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
		z = x * _pow_recursion(x ,y - 1);
		return (z);
}
