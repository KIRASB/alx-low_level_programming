#include <stdio.h>
#include "main.h"
/**
 * main-Entry point 
 * print the alphabet
 * Retuen always 0 (Succes)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122 ; a++)
	{
	  putchar(a);
  }
	putchar('\n');
}
