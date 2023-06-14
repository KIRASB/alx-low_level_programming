#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of size using malloc and assign char c
 * @size: size of the array
 * @c: char to asign
 * Return: value of pointer but NULL of it's fail
 */
char *create_array(unsigned int size, char c)
{
	char *create_array(unsigned int size, char c)

{

	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
