#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - run the action function on each element of the array
 * @array: array of intigers
 * @size: the size of the arrays
 * @action: the pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		int unsigned i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
