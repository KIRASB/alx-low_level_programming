#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function allocat memory
 * @b: variable parametre
 * Return: the pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

