
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence 9bl l main
 * function is executed, I think
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
