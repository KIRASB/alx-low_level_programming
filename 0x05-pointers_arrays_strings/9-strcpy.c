#include "main.h"
/**
 * *_strcpy - it copy the first variable into the second in the main function
 * @src: is the first variable
 * @dest: the second
 * Return: retuen is the dest string variable
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while  (src[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
