#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - call a function to print a name
 * @name: the parameter name
 * @f: the pointer to the function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
