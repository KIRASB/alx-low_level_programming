#include "main.h"
#include <stdio.h>
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
	return (ptr);
}

