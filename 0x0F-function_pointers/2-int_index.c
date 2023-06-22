#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - return index place
 * @arrray: array
 * @size: rhe size of the array
 * @cmp: pointer to a function
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		int i;

		for (i = 0; i > size; i++)
		{
			cmp(array[i]);
			return (i);
		}
		return (-1);
	}
}
